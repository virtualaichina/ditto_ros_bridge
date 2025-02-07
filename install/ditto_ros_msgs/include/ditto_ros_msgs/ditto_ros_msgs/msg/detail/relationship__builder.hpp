// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/relationship.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__BUILDER_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ditto_ros_msgs/msg/detail/relationship__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ditto_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Relationship_relationship_type
{
public:
  explicit Init_Relationship_relationship_type(::ditto_ros_msgs::msg::Relationship & msg)
  : msg_(msg)
  {}
  ::ditto_ros_msgs::msg::Relationship relationship_type(::ditto_ros_msgs::msg::Relationship::_relationship_type_type arg)
  {
    msg_.relationship_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ditto_ros_msgs::msg::Relationship msg_;
};

class Init_Relationship_child_thing_id
{
public:
  explicit Init_Relationship_child_thing_id(::ditto_ros_msgs::msg::Relationship & msg)
  : msg_(msg)
  {}
  Init_Relationship_relationship_type child_thing_id(::ditto_ros_msgs::msg::Relationship::_child_thing_id_type arg)
  {
    msg_.child_thing_id = std::move(arg);
    return Init_Relationship_relationship_type(msg_);
  }

private:
  ::ditto_ros_msgs::msg::Relationship msg_;
};

class Init_Relationship_parent_thing_id
{
public:
  Init_Relationship_parent_thing_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Relationship_child_thing_id parent_thing_id(::ditto_ros_msgs::msg::Relationship::_parent_thing_id_type arg)
  {
    msg_.parent_thing_id = std::move(arg);
    return Init_Relationship_child_thing_id(msg_);
  }

private:
  ::ditto_ros_msgs::msg::Relationship msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ditto_ros_msgs::msg::Relationship>()
{
  return ditto_ros_msgs::msg::builder::Init_Relationship_parent_thing_id();
}

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__BUILDER_HPP_
