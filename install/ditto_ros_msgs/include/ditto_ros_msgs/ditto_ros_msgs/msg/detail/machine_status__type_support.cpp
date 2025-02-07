// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ditto_ros_msgs/msg/detail/machine_status__functions.h"
#include "ditto_ros_msgs/msg/detail/machine_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ditto_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MachineStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ditto_ros_msgs::msg::MachineStatus(_init);
}

void MachineStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ditto_ros_msgs::msg::MachineStatus *>(message_memory);
  typed_message->~MachineStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MachineStatus_message_member_array[4] = {
  {
    "machine_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::MachineStatus, machine_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::MachineStatus, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uptime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::MachineStatus, uptime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "efficiency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::MachineStatus, efficiency),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MachineStatus_message_members = {
  "ditto_ros_msgs::msg",  // message namespace
  "MachineStatus",  // message name
  4,  // number of fields
  sizeof(ditto_ros_msgs::msg::MachineStatus),
  false,  // has_any_key_member_
  MachineStatus_message_member_array,  // message members
  MachineStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MachineStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MachineStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MachineStatus_message_members,
  get_message_typesupport_handle_function,
  &ditto_ros_msgs__msg__MachineStatus__get_type_hash,
  &ditto_ros_msgs__msg__MachineStatus__get_type_description,
  &ditto_ros_msgs__msg__MachineStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ditto_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ditto_ros_msgs::msg::MachineStatus>()
{
  return &::ditto_ros_msgs::msg::rosidl_typesupport_introspection_cpp::MachineStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ditto_ros_msgs, msg, MachineStatus)() {
  return &::ditto_ros_msgs::msg::rosidl_typesupport_introspection_cpp::MachineStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
