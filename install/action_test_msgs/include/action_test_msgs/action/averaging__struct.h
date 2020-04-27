// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_test_msgs:action/Averaging.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TEST_MSGS__ACTION__AVERAGING__STRUCT_H_
#define ACTION_TEST_MSGS__ACTION__AVERAGING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_Goal
{
  int32_t samples;
} action_test_msgs__action__Averaging_Goal;

// Struct for a sequence of action_test_msgs__action__Averaging_Goal.
typedef struct action_test_msgs__action__Averaging_Goal__Sequence
{
  action_test_msgs__action__Averaging_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_Result
{
  float mean;
  float std_dev;
} action_test_msgs__action__Averaging_Result;

// Struct for a sequence of action_test_msgs__action__Averaging_Result.
typedef struct action_test_msgs__action__Averaging_Result__Sequence
{
  action_test_msgs__action__Averaging_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_Feedback
{
  int32_t sample;
  float data;
  float mean;
  float std_dev;
} action_test_msgs__action__Averaging_Feedback;

// Struct for a sequence of action_test_msgs__action__Averaging_Feedback.
typedef struct action_test_msgs__action__Averaging_Feedback__Sequence
{
  action_test_msgs__action__Averaging_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "action_test_msgs/action/averaging__struct.h"

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_test_msgs__action__Averaging_Goal goal;
} action_test_msgs__action__Averaging_SendGoal_Request;

// Struct for a sequence of action_test_msgs__action__Averaging_SendGoal_Request.
typedef struct action_test_msgs__action__Averaging_SendGoal_Request__Sequence
{
  action_test_msgs__action__Averaging_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_test_msgs__action__Averaging_SendGoal_Response;

// Struct for a sequence of action_test_msgs__action__Averaging_SendGoal_Response.
typedef struct action_test_msgs__action__Averaging_SendGoal_Response__Sequence
{
  action_test_msgs__action__Averaging_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_test_msgs__action__Averaging_GetResult_Request;

// Struct for a sequence of action_test_msgs__action__Averaging_GetResult_Request.
typedef struct action_test_msgs__action__Averaging_GetResult_Request__Sequence
{
  action_test_msgs__action__Averaging_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_test_msgs/action/averaging__struct.h"

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_GetResult_Response
{
  int8_t status;
  action_test_msgs__action__Averaging_Result result;
} action_test_msgs__action__Averaging_GetResult_Response;

// Struct for a sequence of action_test_msgs__action__Averaging_GetResult_Response.
typedef struct action_test_msgs__action__Averaging_GetResult_Response__Sequence
{
  action_test_msgs__action__Averaging_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_test_msgs/action/averaging__struct.h"

// Struct defined in action/Averaging in the package action_test_msgs.
typedef struct action_test_msgs__action__Averaging_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_test_msgs__action__Averaging_Feedback feedback;
} action_test_msgs__action__Averaging_FeedbackMessage;

// Struct for a sequence of action_test_msgs__action__Averaging_FeedbackMessage.
typedef struct action_test_msgs__action__Averaging_FeedbackMessage__Sequence
{
  action_test_msgs__action__Averaging_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_test_msgs__action__Averaging_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_TEST_MSGS__ACTION__AVERAGING__STRUCT_H_
