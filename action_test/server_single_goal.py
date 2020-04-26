import threading
import time

from action_test.action import Averaging

import rclpy
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_msgs.msg import Float32


class AveragingServer(Node):
    """Minimal action server that processes one goal at a time."""

    def __init__(self):
        super().__init__('AveragingServer')
        self.goal_handle = None
        self.goal = 0
        self.count = 0
        self.sum = 0
        self.sum_sq = 0
        self.mean = 0
        self.std_dev = 0
        self._action_server = ActionServer(
            self,
            Averaging,
            'averaging',
            self.execute_callback,
            )
        self.subscription = self.create_subscription(
            Float32,
            'random_numbers',
            self.analysis_callback,
            10)


    def analysis_callback(self, msg):
        if self.goal_handle is None:
            return

        feedback_msg = Averaging.Feedback()
        self.count += 1
        self.sum += msg.data
        self.mean = self.sum/self.count
        self.sum_sq = msg.data**2
        self.std_dev = sqrt(abs((self.sum_sq/self.count)-feedback_msg.mean**2))
        feedback_msg.sample = self.count
        feedback_msg.data = msg.data
        feedback_msg.mean = self.mean
        feedback_msg.std_dev = self.std_dev
        self.goal_handle.publish_feedback(feedback_msg)
        if self.count > self.goal:
            self.goal_handle.Succeed()
            self.goal_handle = None


    def execute_callback(self, goal_handle):
        """Executes the goal."""
        #self.get_logger().info('Executing goal...')
        self.goal_handle = goal_handle
        self.goal = self.goal_handle.request.samples
        while self.goal_handle is not None:
            time.sleep(1)
        goal_handle.Succeed()

        result = Averaging.Result()
        result.mean = self.mean
        result.std_dev = self.std_dev
        return result


def main(args=None):
    rclpy.init(args=args)

    # We use a MultiThreadedExecutor to handle incoming goal requests concurrently
    executor = MultiThreadedExecutor()
    rclpy.spin(action_server, executor=executor)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
