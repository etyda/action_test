// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_test_msgs:action/Averaging.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
#include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_test_msgs/action/averaging__functions.h"
#include "action_test_msgs/action/averaging__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_Goal__init(message_memory);
}

void Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_member_array[1] = {
  {
    "samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Goal, samples),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_Goal",  // message name
  1,  // number of fields
  sizeof(action_test_msgs__action__Averaging_Goal),
  Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_member_array,  // message members
  Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_type_support_handle = {
  0,
  &Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Goal)() {
  if (!Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_type_support_handle.typesupport_identifier) {
    Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_Goal__rosidl_typesupport_introspection_c__Averaging_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_Result__init(message_memory);
}

void Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_member_array[2] = {
  {
    "mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Result, mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "std_dev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Result, std_dev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_Result",  // message name
  2,  // number of fields
  sizeof(action_test_msgs__action__Averaging_Result),
  Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_member_array,  // message members
  Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_type_support_handle = {
  0,
  &Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Result)() {
  if (!Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_type_support_handle.typesupport_identifier) {
    Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_Result__rosidl_typesupport_introspection_c__Averaging_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_Feedback__init(message_memory);
}

void Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_member_array[4] = {
  {
    "sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Feedback, sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Feedback, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Feedback, mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "std_dev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_Feedback, std_dev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_Feedback",  // message name
  4,  // number of fields
  sizeof(action_test_msgs__action__Averaging_Feedback),
  Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_member_array,  // message members
  Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_type_support_handle = {
  0,
  &Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Feedback)() {
  if (!Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_type_support_handle.typesupport_identifier) {
    Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_Feedback__rosidl_typesupport_introspection_c__Averaging_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "action_test_msgs/action/averaging.h"
// Member `goal`
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_SendGoal_Request__init(message_memory);
}

void Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(action_test_msgs__action__Averaging_SendGoal_Request),
  Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_member_array,  // message members
  Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_type_support_handle = {
  0,
  &Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Request)() {
  Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Goal)();
  if (!Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_SendGoal_Request__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_SendGoal_Response__init(message_memory);
}

void Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(action_test_msgs__action__Averaging_SendGoal_Response),
  Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_member_array,  // message members
  Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_type_support_handle = {
  0,
  &Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Response)() {
  Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_SendGoal_Response__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_members = {
  "action_test_msgs__action",  // service namespace
  "Averaging_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_type_support_handle = {
  0,
  &action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal)() {
  if (!action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_type_support_handle.typesupport_identifier) {
    action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_SendGoal_Response)()->data;
  }

  return &action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_GetResult_Request__init(message_memory);
}

void Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(action_test_msgs__action__Averaging_GetResult_Request),
  Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_member_array,  // message members
  Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_type_support_handle = {
  0,
  &Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Request)() {
  Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_GetResult_Request__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "action_test_msgs/action/averaging.h"
// Member `result`
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_GetResult_Response__init(message_memory);
}

void Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(action_test_msgs__action__Averaging_GetResult_Response),
  Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_member_array,  // message members
  Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_type_support_handle = {
  0,
  &Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Response)() {
  Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Result)();
  if (!Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_GetResult_Response__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_members = {
  "action_test_msgs__action",  // service namespace
  "Averaging_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_type_support_handle = {
  0,
  &action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult)() {
  if (!action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_type_support_handle.typesupport_identifier) {
    action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_GetResult_Response)()->data;
  }

  return &action_test_msgs__action__averaging__rosidl_typesupport_introspection_c__Averaging_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_test_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_test_msgs/action/averaging__functions.h"
// already included above
// #include "action_test_msgs/action/averaging__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "action_test_msgs/action/averaging.h"
// Member `feedback`
// already included above
// #include "action_test_msgs/action/averaging__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_test_msgs__action__Averaging_FeedbackMessage__init(message_memory);
}

void Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_fini_function(void * message_memory)
{
  action_test_msgs__action__Averaging_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_test_msgs__action__Averaging_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_members = {
  "action_test_msgs__action",  // message namespace
  "Averaging_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(action_test_msgs__action__Averaging_FeedbackMessage),
  Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_member_array,  // message members
  Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_type_support_handle = {
  0,
  &Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_test_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_FeedbackMessage)() {
  Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_test_msgs, action, Averaging_Feedback)();
  if (!Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Averaging_FeedbackMessage__rosidl_typesupport_introspection_c__Averaging_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
