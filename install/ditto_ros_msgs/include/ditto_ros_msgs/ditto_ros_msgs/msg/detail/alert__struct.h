// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/alert.h"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_H_
#define DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Alert in the package ditto_ros_msgs.
typedef struct ditto_ros_msgs__msg__Alert
{
  rosidl_runtime_c__String message;
  uint8_t severity;
} ditto_ros_msgs__msg__Alert;

// Struct for a sequence of ditto_ros_msgs__msg__Alert.
typedef struct ditto_ros_msgs__msg__Alert__Sequence
{
  ditto_ros_msgs__msg__Alert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ditto_ros_msgs__msg__Alert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_H_
