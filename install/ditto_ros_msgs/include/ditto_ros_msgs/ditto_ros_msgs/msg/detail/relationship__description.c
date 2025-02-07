// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ditto_ros_msgs:msg/Relationship.idl
// generated code does not contain a copyright notice

#include "ditto_ros_msgs/msg/detail/relationship__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ditto_ros_msgs
const rosidl_type_hash_t *
ditto_ros_msgs__msg__Relationship__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0x89, 0x8a, 0x13, 0x2e, 0x17, 0xb6, 0x01,
      0x8d, 0x8d, 0x2d, 0x81, 0xc0, 0xe8, 0x38, 0x27,
      0x8a, 0x0b, 0x7e, 0x66, 0xdc, 0x90, 0x11, 0x2c,
      0x96, 0xcc, 0x71, 0xba, 0xa2, 0xe0, 0x68, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ditto_ros_msgs__msg__Relationship__TYPE_NAME[] = "ditto_ros_msgs/msg/Relationship";

// Define type names, field names, and default values
static char ditto_ros_msgs__msg__Relationship__FIELD_NAME__parent_thing_id[] = "parent_thing_id";
static char ditto_ros_msgs__msg__Relationship__FIELD_NAME__child_thing_id[] = "child_thing_id";
static char ditto_ros_msgs__msg__Relationship__FIELD_NAME__relationship_type[] = "relationship_type";

static rosidl_runtime_c__type_description__Field ditto_ros_msgs__msg__Relationship__FIELDS[] = {
  {
    {ditto_ros_msgs__msg__Relationship__FIELD_NAME__parent_thing_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__Relationship__FIELD_NAME__child_thing_id, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__Relationship__FIELD_NAME__relationship_type, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ditto_ros_msgs__msg__Relationship__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ditto_ros_msgs__msg__Relationship__TYPE_NAME, 31, 31},
      {ditto_ros_msgs__msg__Relationship__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string parent_thing_id\n"
  "string child_thing_id\n"
  "string relationship_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ditto_ros_msgs__msg__Relationship__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ditto_ros_msgs__msg__Relationship__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 69, 69},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ditto_ros_msgs__msg__Relationship__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ditto_ros_msgs__msg__Relationship__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
