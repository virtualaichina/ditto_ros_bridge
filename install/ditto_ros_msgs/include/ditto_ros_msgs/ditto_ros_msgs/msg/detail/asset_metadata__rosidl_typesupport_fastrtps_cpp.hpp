// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ditto_ros_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ditto_ros_msgs/msg/detail/asset_metadata__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ditto_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
cdr_serialize(
  const ditto_ros_msgs::msg::AssetMetadata & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ditto_ros_msgs::msg::AssetMetadata & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
get_serialized_size(
  const ditto_ros_msgs::msg::AssetMetadata & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
max_serialized_size_AssetMetadata(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
cdr_serialize_key(
  const ditto_ros_msgs::msg::AssetMetadata & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
get_serialized_size_key(
  const ditto_ros_msgs::msg::AssetMetadata & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
max_serialized_size_key_AssetMetadata(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ditto_ros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ditto_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ditto_ros_msgs, msg, AssetMetadata)();

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
