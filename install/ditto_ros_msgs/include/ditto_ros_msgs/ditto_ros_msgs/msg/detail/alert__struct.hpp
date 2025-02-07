// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/alert.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ditto_ros_msgs__msg__Alert __attribute__((deprecated))
#else
# define DEPRECATED__ditto_ros_msgs__msg__Alert __declspec(deprecated)
#endif

namespace ditto_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Alert_
{
  using Type = Alert_<ContainerAllocator>;

  explicit Alert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->severity = 0;
    }
  }

  explicit Alert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->severity = 0;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _severity_type =
    uint8_t;
  _severity_type severity;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__severity(
    const uint8_t & _arg)
  {
    this->severity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ditto_ros_msgs::msg::Alert_<ContainerAllocator> *;
  using ConstRawPtr =
    const ditto_ros_msgs::msg::Alert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::Alert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::Alert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ditto_ros_msgs__msg__Alert
    std::shared_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ditto_ros_msgs__msg__Alert
    std::shared_ptr<ditto_ros_msgs::msg::Alert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alert_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alert_

// alias to use template instance with default allocator
using Alert =
  ditto_ros_msgs::msg::Alert_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ALERT__STRUCT_HPP_
