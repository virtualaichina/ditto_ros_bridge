// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/relationship.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__TRAITS_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ditto_ros_msgs/msg/detail/relationship__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ditto_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Relationship & msg,
  std::ostream & out)
{
  out << "{";
  // member: parent_thing_id
  {
    out << "parent_thing_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_thing_id, out);
    out << ", ";
  }

  // member: child_thing_id
  {
    out << "child_thing_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_thing_id, out);
    out << ", ";
  }

  // member: relationship_type
  {
    out << "relationship_type: ";
    rosidl_generator_traits::value_to_yaml(msg.relationship_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Relationship & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parent_thing_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_thing_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_thing_id, out);
    out << "\n";
  }

  // member: child_thing_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "child_thing_id: ";
    rosidl_generator_traits::value_to_yaml(msg.child_thing_id, out);
    out << "\n";
  }

  // member: relationship_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relationship_type: ";
    rosidl_generator_traits::value_to_yaml(msg.relationship_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Relationship & msg, bool use_flow_style = false)
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
  const ditto_ros_msgs::msg::Relationship & msg,
  std::ostream & out, size_t indentation = 0)
{
  ditto_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ditto_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ditto_ros_msgs::msg::Relationship & msg)
{
  return ditto_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ditto_ros_msgs::msg::Relationship>()
{
  return "ditto_ros_msgs::msg::Relationship";
}

template<>
inline const char * name<ditto_ros_msgs::msg::Relationship>()
{
  return "ditto_ros_msgs/msg/Relationship";
}

template<>
struct has_fixed_size<ditto_ros_msgs::msg::Relationship>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ditto_ros_msgs::msg::Relationship>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ditto_ros_msgs::msg::Relationship>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__TRAITS_HPP_
