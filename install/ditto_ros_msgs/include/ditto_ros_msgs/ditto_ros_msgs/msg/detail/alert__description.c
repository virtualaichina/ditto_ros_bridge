// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice

#include "ditto_ros_msgs/msg/detail/alert__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ditto_ros_msgs
const rosidl_type_hash_t *
ditto_ros_msgs__msg__Alert__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x54, 0x9d, 0xf2, 0x71, 0x03, 0xf5, 0x02,
      0xa9, 0x59, 0x84, 0xf1, 0x56, 0xd7, 0xcb, 0x4f,
      0x3a, 0x30, 0x30, 0xa4, 0x2e, 0xf2, 0x5b, 0xf2,
      0x89, 0x0e, 0x4e, 0x2e, 0xb3, 0xdc, 0x14, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ditto_ros_msgs__msg__Alert__TYPE_NAME[] = "ditto_ros_msgs/msg/Alert";

// Define type names, field names, and default values
static char ditto_ros_msgs__msg__Alert__FIELD_NAME__message[] = "message";
static char ditto_ros_msgs__msg__Alert__FIELD_NAME__severity[] = "severity";

static rosidl_runtime_c__type_description__Field ditto_ros_msgs__msg__Alert__FIELDS[] = {
  {
    {ditto_ros_msgs__msg__Alert__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__Alert__FIELD_NAME__severity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ditto_ros_msgs__msg__Alert__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ditto_ros_msgs__msg__Alert__TYPE_NAME, 24, 24},
      {ditto_ros_msgs__msg__Alert__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string message\n"
  "uint8 severity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ditto_ros_msgs__msg__Alert__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ditto_ros_msgs__msg__Alert__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ditto_ros_msgs__msg__Alert__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ditto_ros_msgs__msg__Alert__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
