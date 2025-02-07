// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ditto_ros_msgs/msg/asset_metadata.hpp"


#ifndef DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_HPP_
#define DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ditto_ros_msgs__msg__AssetMetadata __attribute__((deprecated))
#else
# define DEPRECATED__ditto_ros_msgs__msg__AssetMetadata __declspec(deprecated)
#endif

namespace ditto_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssetMetadata_
{
  using Type = AssetMetadata_<ContainerAllocator>;

  explicit AssetMetadata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asset_id = "";
      this->type = "";
    }
  }

  explicit AssetMetadata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : asset_id(_alloc),
    type(_alloc),
    location(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asset_id = "";
      this->type = "";
    }
  }

  // field types and members
  using _asset_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _asset_id_type asset_id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _location_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__asset_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->asset_id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__location(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> *;
  using ConstRawPtr =
    const ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ditto_ros_msgs__msg__AssetMetadata
    std::shared_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ditto_ros_msgs__msg__AssetMetadata
    std::shared_ptr<ditto_ros_msgs::msg::AssetMetadata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssetMetadata_ & other) const
  {
    if (this->asset_id != other.asset_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssetMetadata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssetMetadata_

// alias to use template instance with default allocator
using AssetMetadata =
  ditto_ros_msgs::msg::AssetMetadata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ditto_ros_msgs

#endif  // DITTO_ROS_MSGS__MSG__DETAIL__ASSET_METADATA__STRUCT_HPP_
