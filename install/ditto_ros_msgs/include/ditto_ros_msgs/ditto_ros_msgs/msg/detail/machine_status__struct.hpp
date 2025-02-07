// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/machine_status.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ditto_ros_msgs__msg__MachineStatus __attribute__((deprecated))
#else
# define DEPRECATED__ditto_ros_msgs__msg__MachineStatus __declspec(deprecated)
#endif

namespace ditto_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachineStatus_
{
  using Type = MachineStatus_<ContainerAllocator>;

  explicit MachineStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->machine_id = "";
      this->status = "";
      this->uptime = 0.0;
      this->efficiency = 0.0;
    }
  }

  explicit MachineStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : machine_id(_alloc),
    status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->machine_id = "";
      this->status = "";
      this->uptime = 0.0;
      this->efficiency = 0.0;
    }
  }

  // field types and members
  using _machine_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _machine_id_type machine_id;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _uptime_type =
    double;
  _uptime_type uptime;
  using _efficiency_type =
    double;
  _efficiency_type efficiency;

  // setters for named parameter idiom
  Type & set__machine_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->machine_id = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__uptime(
    const double & _arg)
  {
    this->uptime = _arg;
    return *this;
  }
  Type & set__efficiency(
    const double & _arg)
  {
    this->efficiency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ditto_ros_msgs__msg__MachineStatus
    std::shared_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ditto_ros_msgs__msg__MachineStatus
    std::shared_ptr<ditto_ros_msgs::msg::MachineStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachineStatus_ & other) const
  {
    if (this->machine_id != other.machine_id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->uptime != other.uptime) {
      return false;
    }
    if (this->efficiency != other.efficiency) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachineStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachineStatus_

// alias to use template instance with default allocator
using MachineStatus =
  ditto_ros_msgs::msg::MachineStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__MACHINE_STATUS__STRUCT_HPP_
