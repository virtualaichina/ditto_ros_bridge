// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/relationship.h"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_H_
#define DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'parent_thing_id'
// Member 'child_thing_id'
// Member 'relationship_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Relationship in the package ditto_ros_msgs.
typedef struct ditto_ros_msgs__msg__Relationship
{
  rosidl_runtime_c__String parent_thing_id;
  rosidl_runtime_c__String child_thing_id;
  rosidl_runtime_c__String relationship_type;
} ditto_ros_msgs__msg__Relationship;

// Struct for a sequence of ditto_ros_msgs__msg__Relationship.
typedef struct ditto_ros_msgs__msg__Relationship__Sequence
{
  ditto_ros_msgs__msg__Relationship * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ditto_ros_msgs__msg__Relationship__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_H_
