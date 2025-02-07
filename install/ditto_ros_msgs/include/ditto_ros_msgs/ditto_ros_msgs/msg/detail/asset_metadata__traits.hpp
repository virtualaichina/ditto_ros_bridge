// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/asset_metadata.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__TRAITS_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ditto_ros_msgs/msg/detail/asset_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace ditto_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AssetMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: asset_id
  {
    out << "asset_id: ";
    rosidl_generator_traits::value_to_yaml(msg.asset_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AssetMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: asset_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asset_id: ";
    rosidl_generator_traits::value_to_yaml(msg.asset_id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AssetMetadata & msg, bool use_flow_style = false)
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
  const ditto_ros_msgs::msg::AssetMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  ditto_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ditto_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ditto_ros_msgs::msg::AssetMetadata & msg)
{
  return ditto_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ditto_ros_msgs::msg::AssetMetadata>()
{
  return "ditto_ros_msgs::msg::AssetMetadata";
}

template<>
inline const char * name<ditto_ros_msgs::msg::AssetMetadata>()
{
  return "ditto_ros_msgs/msg/AssetMetadata";
}

template<>
struct has_fixed_size<ditto_ros_msgs::msg::AssetMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ditto_ros_msgs::msg::AssetMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ditto_ros_msgs::msg::AssetMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__TRAITS_HPP_
