// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/machine_status.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ditto_ros_msgs/msg/detail/machine_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ditto_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_MachineStatus_efficiency
{
public:
  explicit Init_MachineStatus_efficiency(::ditto_ros_msgs::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  ::ditto_ros_msgs::msg::MachineStatus efficiency(::ditto_ros_msgs::msg::MachineStatus::_efficiency_type arg)
  {
    msg_.efficiency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ditto_ros_msgs::msg::MachineStatus msg_;
};

class Init_MachineStatus_uptime
{
public:
  explicit Init_MachineStatus_uptime(::ditto_ros_msgs::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_efficiency uptime(::ditto_ros_msgs::msg::MachineStatus::_uptime_type arg)
  {
    msg_.uptime = std::move(arg);
    return Init_MachineStatus_efficiency(msg_);
  }

private:
  ::ditto_ros_msgs::msg::MachineStatus msg_;
};

class Init_MachineStatus_status
{
public:
  explicit Init_MachineStatus_status(::ditto_ros_msgs::msg::MachineStatus & msg)
  : msg_(msg)
  {}
  Init_MachineStatus_uptime status(::ditto_ros_msgs::msg::MachineStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MachineStatus_uptime(msg_);
  }

private:
  ::ditto_ros_msgs::msg::MachineStatus msg_;
};

class Init_MachineStatus_machine_id
{
public:
  Init_MachineStatus_machine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachineStatus_status machine_id(::ditto_ros_msgs::msg::MachineStatus::_machine_id_type arg)
  {
    msg_.machine_id = std::move(arg);
    return Init_MachineStatus_status(msg_);
  }

private:
  ::ditto_ros_msgs::msg::MachineStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ditto_ros_msgs::msg::MachineStatus>()
{
  return ditto_ros_msgs::msg::builder::Init_MachineStatus_machine_id();
}

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__BUILDER_HPP_
