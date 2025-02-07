// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/alert.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ditto_ros_msgs/msg/detail/alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ditto_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Alert_severity
{
public:
  explicit Init_Alert_severity(::ditto_ros_msgs::msg::Alert & msg)
  : msg_(msg)
  {}
  ::ditto_ros_msgs::msg::Alert severity(::ditto_ros_msgs::msg::Alert::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ditto_ros_msgs::msg::Alert msg_;
};

class Init_Alert_message
{
public:
  Init_Alert_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alert_severity message(::ditto_ros_msgs::msg::Alert::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Alert_severity(msg_);
  }

private:
  ::ditto_ros_msgs::msg::Alert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ditto_ros_msgs::msg::Alert>()
{
  return ditto_ros_msgs::msg::builder::Init_Alert_message();
}

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ALERT__BUILDER_HPP_
