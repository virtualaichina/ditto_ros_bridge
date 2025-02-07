// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ditto_ros_msgs/msg/detail/relationship__functions.h"
#include "ditto_ros_msgs/msg/detail/relationship__struct.hpp"
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

void Relationship_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ditto_ros_msgs::msg::Relationship(_init);
}

void Relationship_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ditto_ros_msgs::msg::Relationship *>(message_memory);
  typed_message->~Relationship();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Relationship_message_member_array[3] = {
  {
    "parent_thing_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::Relationship, parent_thing_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_thing_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::Relationship, child_thing_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relationship_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ditto_ros_msgs::msg::Relationship, relationship_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Relationship_message_members = {
  "ditto_ros_msgs::msg",  // message namespace
  "Relationship",  // message name
  3,  // number of fields
  sizeof(ditto_ros_msgs::msg::Relationship),
  false,  // has_any_key_member_
  Relationship_message_member_array,  // message members
  Relationship_init_function,  // function to initialize message memory (memory has to be allocated)
  Relationship_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Relationship_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Relationship_message_members,
  get_message_typesupport_handle_function,
  &ditto_ros_msgs__msg__Relationship__get_type_hash,
  &ditto_ros_msgs__msg__Relationship__get_type_description,
  &ditto_ros_msgs__msg__Relationship__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ditto_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ditto_ros_msgs::msg::Relationship>()
{
  return &::ditto_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Relationship_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ditto_ros_msgs, msg, Relationship)() {
  return &::ditto_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Relationship_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
