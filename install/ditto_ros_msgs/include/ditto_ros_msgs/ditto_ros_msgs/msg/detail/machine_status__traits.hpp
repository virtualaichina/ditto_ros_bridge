// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/machine_status.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ditto_ros_msgs/msg/detail/machine_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ditto_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachineStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: machine_id
  {
    out << "machine_id: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: uptime
  {
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << ", ";
  }

  // member: efficiency
  {
    out << "efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.efficiency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachineStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: machine_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "machine_id: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_id, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: uptime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uptime: ";
    rosidl_generator_traits::value_to_yaml(msg.uptime, out);
    out << "\n";
  }

  // member: efficiency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "efficiency: ";
    rosidl_generator_traits::value_to_yaml(msg.efficiency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachineStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ditto_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ditto_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ditto_ros_msgs::msg::MachineStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ditto_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ditto_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ditto_ros_msgs::msg::MachineStatus & msg)
{
  return ditto_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ditto_ros_msgs::msg::MachineStatus>()
{
  return "ditto_ros_msgs::msg::MachineStatus";
}

template<>
inline const char * name<ditto_ros_msgs::msg::MachineStatus>()
{
  return "ditto_ros_msgs/msg/MachineStatus";
}

template<>
struct has_fixed_size<ditto_ros_msgs::msg::MachineStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ditto_ros_msgs::msg::MachineStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ditto_ros_msgs::msg::MachineStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__TRAITS_HPP_
