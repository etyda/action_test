// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from action_test_msgs:action/Averaging.idl
// generated code does not contain a copyright notice

#ifndef ACTION_TEST_MSGS__ACTION__AVERAGING__TRAITS_HPP_
#define ACTION_TEST_MSGS__ACTION__AVERAGING__TRAITS_HPP_

#include "action_test_msgs/action/averaging__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_Goal>()
{
  return "action_test_msgs::action::Averaging_Goal";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_test_msgs::action::Averaging_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_Result>()
{
  return "action_test_msgs::action::Averaging_Result";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_test_msgs::action::Averaging_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_Feedback>()
{
  return "action_test_msgs::action::Averaging_Feedback";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<action_test_msgs::action::Averaging_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "action_test_msgs/action/averaging__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_SendGoal_Request>()
{
  return "action_test_msgs::action::Averaging_SendGoal_Request";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<action_test_msgs::action::Averaging_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<action_test_msgs::action::Averaging_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_test_msgs::action::Averaging_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_SendGoal_Response>()
{
  return "action_test_msgs::action::Averaging_SendGoal_Response";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<action_test_msgs::action::Averaging_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_SendGoal>()
{
  return "action_test_msgs::action::Averaging_SendGoal";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<action_test_msgs::action::Averaging_SendGoal_Request>::value &&
    has_fixed_size<action_test_msgs::action::Averaging_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<action_test_msgs::action::Averaging_SendGoal_Request>::value &&
    has_bounded_size<action_test_msgs::action::Averaging_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<action_test_msgs::action::Averaging_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<action_test_msgs::action::Averaging_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_test_msgs::action::Averaging_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_GetResult_Request>()
{
  return "action_test_msgs::action::Averaging_GetResult_Request";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_test_msgs::action::Averaging_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "action_test_msgs/action/averaging__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_GetResult_Response>()
{
  return "action_test_msgs::action::Averaging_GetResult_Response";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<action_test_msgs::action::Averaging_Result>::value> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<action_test_msgs::action::Averaging_Result>::value> {};

template<>
struct is_message<action_test_msgs::action::Averaging_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_GetResult>()
{
  return "action_test_msgs::action::Averaging_GetResult";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<action_test_msgs::action::Averaging_GetResult_Request>::value &&
    has_fixed_size<action_test_msgs::action::Averaging_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<action_test_msgs::action::Averaging_GetResult_Request>::value &&
    has_bounded_size<action_test_msgs::action::Averaging_GetResult_Response>::value
  >
{
};

template<>
struct is_service<action_test_msgs::action::Averaging_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<action_test_msgs::action::Averaging_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<action_test_msgs::action::Averaging_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "action_test_msgs/action/averaging__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<action_test_msgs::action::Averaging_FeedbackMessage>()
{
  return "action_test_msgs::action::Averaging_FeedbackMessage";
}

template<>
struct has_fixed_size<action_test_msgs::action::Averaging_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<action_test_msgs::action::Averaging_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<action_test_msgs::action::Averaging_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<action_test_msgs::action::Averaging_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<action_test_msgs::action::Averaging_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<action_test_msgs::action::Averaging>
  : std::true_type
{
};

template<>
struct is_action_goal<action_test_msgs::action::Averaging_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<action_test_msgs::action::Averaging_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<action_test_msgs::action::Averaging_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTION_TEST_MSGS__ACTION__AVERAGING__TRAITS_HPP_
