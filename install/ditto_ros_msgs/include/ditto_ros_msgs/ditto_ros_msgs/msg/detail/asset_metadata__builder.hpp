// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/asset_metadata.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__BUILDER_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ditto_ros_msgs/msg/detail/asset_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ditto_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_AssetMetadata_location
{
public:
  explicit Init_AssetMetadata_location(::ditto_ros_msgs::msg::AssetMetadata & msg)
  : msg_(msg)
  {}
  ::ditto_ros_msgs::msg::AssetMetadata location(::ditto_ros_msgs::msg::AssetMetadata::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ditto_ros_msgs::msg::AssetMetadata msg_;
};

class Init_AssetMetadata_type
{
public:
  explicit Init_AssetMetadata_type(::ditto_ros_msgs::msg::AssetMetadata & msg)
  : msg_(msg)
  {}
  Init_AssetMetadata_location type(::ditto_ros_msgs::msg::AssetMetadata::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AssetMetadata_location(msg_);
  }

private:
  ::ditto_ros_msgs::msg::AssetMetadata msg_;
};

class Init_AssetMetadata_asset_id
{
public:
  Init_AssetMetadata_asset_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssetMetadata_type asset_id(::ditto_ros_msgs::msg::AssetMetadata::_asset_id_type arg)
  {
    msg_.asset_id = std::move(arg);
    return Init_AssetMetadata_type(msg_);
  }

private:
  ::ditto_ros_msgs::msg::AssetMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ditto_ros_msgs::msg::AssetMetadata>()
{
  return ditto_ros_msgs::msg::builder::Init_AssetMetadata_asset_id();
}

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__BUILDER_HPP_
