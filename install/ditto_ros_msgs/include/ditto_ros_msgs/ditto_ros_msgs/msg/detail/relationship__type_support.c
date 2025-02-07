// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ditto_ros_msgs/msg/detail/relationship__rosidl_typesupport_introspection_c.h"
#include "ditto_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ditto_ros_msgs/msg/detail/relationship__functions.h"
#include "ditto_ros_msgs/msg/detail/relationship__struct.h"


// Include directives for member types
// Member `parent_thing_id`
// Member `child_thing_id`
// Member `relationship_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ditto_ros_msgs__msg__Relationship__init(message_memory);
}

void ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_fini_function(void * message_memory)
{
  ditto_ros_msgs__msg__Relationship__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_member_array[3] = {
  {
    "parent_thing_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs__msg__Relationship, parent_thing_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_thing_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs__msg__Relationship, child_thing_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relationship_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs__msg__Relationship, relationship_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_members = {
  "ditto_ros_msgs__msg",  // message namespace
  "Relationship",  // message name
  3,  // number of fields
  sizeof(ditto_ros_msgs__msg__Relationship),
  false,  // has_any_key_member_
  ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_member_array,  // message members
  ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_init_function,  // function to initialize message memory (memory has to be allocated)
  ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_type_support_handle = {
  0,
  &ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_members,
  get_message_typesupport_handle_function,
  &ditto_ros_msgs__msg__Relationship__get_type_hash,
  &ditto_ros_msgs__msg__Relationship__get_type_description,
  &ditto_ros_msgs__msg__Relationship__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ditto_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ditto_ros_msgs, msg, Relationship)() {
  if (!ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_type_support_handle.typesupport_identifier) {
    ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ditto_ros_msgs__msg__Relationship__rosidl_typesupport_introspection_c__Relationship_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
