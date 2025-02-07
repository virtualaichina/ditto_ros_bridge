// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/machine_status.h"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
#define DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'machine_id'
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MachineStatus in the package ditto_ros_msgs.
typedef struct ditto_ros_msgs__msg__MachineStatus
{
  rosidl_runtime_c__String machine_id;
  rosidl_runtime_c__String status;
  double uptime;
  double efficiency;
} ditto_ros_msgs__msg__MachineStatus;

// Struct for a sequence of ditto_ros_msgs__msg__MachineStatus.
typedef struct ditto_ros_msgs__msg__MachineStatus__Sequence
{
  ditto_ros_msgs__msg__MachineStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ditto_ros_msgs__msg__MachineStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_H_
