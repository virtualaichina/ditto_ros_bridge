// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice

#include "ditto_ros_msgs/msg/detail/asset_metadata__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ditto_ros_msgs
const rosidl_type_hash_t *
ditto_ros_msgs__msg__AssetMetadata__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x68, 0x36, 0x4f, 0xdd, 0xe8, 0x19, 0xc9,
      0xe3, 0x72, 0x61, 0x45, 0x93, 0x3e, 0x91, 0x69,
      0x7b, 0xa2, 0x41, 0x77, 0xab, 0x2f, 0x02, 0x91,
      0x0b, 0x0a, 0xbf, 0x56, 0xac, 0x2f, 0x6c, 0x32,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char ditto_ros_msgs__msg__AssetMetadata__TYPE_NAME[] = "ditto_ros_msgs/msg/AssetMetadata";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__asset_id[] = "asset_id";
static char ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__type[] = "type";
static char ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__location[] = "location";

static rosidl_runtime_c__type_description__Field ditto_ros_msgs__msg__AssetMetadata__FIELDS[] = {
  {
    {ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__asset_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__AssetMetadata__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ditto_ros_msgs__msg__AssetMetadata__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ditto_ros_msgs__msg__AssetMetadata__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ditto_ros_msgs__msg__AssetMetadata__TYPE_NAME, 32, 32},
      {ditto_ros_msgs__msg__AssetMetadata__FIELDS, 3, 3},
    },
    {ditto_ros_msgs__msg__AssetMetadata__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string asset_id\n"
  "string type\n"
  "geometry_msgs/Point location";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ditto_ros_msgs__msg__AssetMetadata__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ditto_ros_msgs__msg__AssetMetadata__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ditto_ros_msgs__msg__AssetMetadata__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ditto_ros_msgs__msg__AssetMetadata__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
