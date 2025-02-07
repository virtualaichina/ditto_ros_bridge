// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice
#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define DITTO_ROS_MSGS__MSG__DETAIL__ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ditto_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ditto_ros_msgs/msg/detail/alert__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
bool cdr_serialize_ditto_ros_msgs__msg__Alert(
  const ditto_ros_msgs__msg__Alert * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
bool cdr_deserialize_ditto_ros_msgs__msg__Alert(
  eprosima::fastcdr::Cdr &,
  ditto_ros_msgs__msg__Alert * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
size_t get_serialized_size_ditto_ros_msgs__msg__Alert(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
size_t max_serialized_size_ditto_ros_msgs__msg__Alert(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
bool cdr_serialize_key_ditto_ros_msgs__msg__Alert(
  const ditto_ros_msgs__msg__Alert * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
size_t get_serialized_size_key_ditto_ros_msgs__msg__Alert(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
size_t max_serialized_size_key_ditto_ros_msgs__msg__Alert(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ditto_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ditto_ros_msgs, msg, Alert)();

#ifdef __cplusplus
}
#endif

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ALERT__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
