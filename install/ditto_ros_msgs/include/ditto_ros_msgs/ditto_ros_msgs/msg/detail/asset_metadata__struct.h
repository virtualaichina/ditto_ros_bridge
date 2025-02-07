// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/asset_metadata.h"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_H_
#define DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'asset_id'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/AssetMetadata in the package ditto_ros_msgs.
typedef struct ditto_ros_msgs__msg__AssetMetadata
{
  rosidl_runtime_c__String asset_id;
  rosidl_runtime_c__String type;
  geometry_msgs__msg__Point location;
} ditto_ros_msgs__msg__AssetMetadata;

// Struct for a sequence of ditto_ros_msgs__msg__AssetMetadata.
typedef struct ditto_ros_msgs__msg__AssetMetadata__Sequence
{
  ditto_ros_msgs__msg__AssetMetadata * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ditto_ros_msgs__msg__AssetMetadata__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_H_
