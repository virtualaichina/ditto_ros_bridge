// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/relationship.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ditto_ros_msgs__msg__Relationship __attribute__((deprecated))
#else
# define DEPRECATED__ditto_ros_msgs__msg__Relationship __declspec(deprecated)
#endif

namespace ditto_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Relationship_
{
  using Type = Relationship_<ContainerAllocator>;

  explicit Relationship_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_thing_id = "";
      this->child_thing_id = "";
      this->relationship_type = "";
    }
  }

  explicit Relationship_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parent_thing_id(_alloc),
    child_thing_id(_alloc),
    relationship_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parent_thing_id = "";
      this->child_thing_id = "";
      this->relationship_type = "";
    }
  }

  // field types and members
  using _parent_thing_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_thing_id_type parent_thing_id;
  using _child_thing_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_thing_id_type child_thing_id;
  using _relationship_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _relationship_type_type relationship_type;

  // setters for named parameter idiom
  Type & set__parent_thing_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_thing_id = _arg;
    return *this;
  }
  Type & set__child_thing_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_thing_id = _arg;
    return *this;
  }
  Type & set__relationship_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->relationship_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ditto_ros_msgs::msg::Relationship_<ContainerAllocator> *;
  using ConstRawPtr =
    const ditto_ros_msgs::msg::Relationship_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::Relationship_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::Relationship_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ditto_ros_msgs__msg__Relationship
    std::shared_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ditto_ros_msgs__msg__Relationship
    std::shared_ptr<ditto_ros_msgs::msg::Relationship_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Relationship_ & other) const
  {
    if (this->parent_thing_id != other.parent_thing_id) {
      return false;
    }
    if (this->child_thing_id != other.child_thing_id) {
      return false;
    }
    if (this->relationship_type != other.relationship_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Relationship_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Relationship_

// alias to use template instance with default allocator
using Relationship =
  ditto_ros_msgs::msg::Relationship_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__RELATIONSHIP__STRUCT_HPP_
