// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice

#include "ditto_ros_msgs/msg/detail/machine_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ditto_ros_msgs
const rosidl_type_hash_t *
ditto_ros_msgs__msg__MachineStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0xbe, 0x14, 0x6e, 0xe0, 0x9e, 0x41, 0x86,
      0x2d, 0x0d, 0x0d, 0x27, 0x1c, 0x7e, 0x95, 0xaa,
      0x25, 0x2d, 0x25, 0xf7, 0xc5, 0x77, 0x9e, 0x0f,
      0xd8, 0xf7, 0x0e, 0x33, 0x42, 0x58, 0x23, 0x14,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ditto_ros_msgs__msg__MachineStatus__TYPE_NAME[] = "ditto_ros_msgs/msg/MachineStatus";

// Define type names, field names, and default values
static char ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__machine_id[] = "machine_id";
static char ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__status[] = "status";
static char ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__uptime[] = "uptime";
static char ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__efficiency[] = "efficiency";

static rosidl_runtime_c__type_description__Field ditto_ros_msgs__msg__MachineStatus__FIELDS[] = {
  {
    {ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__machine_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__uptime, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ditto_ros_msgs__msg__MachineStatus__FIELD_NAME__efficiency, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ditto_ros_msgs__msg__MachineStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ditto_ros_msgs__msg__MachineStatus__TYPE_NAME, 32, 32},
      {ditto_ros_msgs__msg__MachineStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string machine_id\n"
  "string status\n"
  "float64 uptime\n"
  "float64 efficiency";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ditto_ros_msgs__msg__MachineStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ditto_ros_msgs__msg__MachineStatus__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ditto_ros_msgs__msg__MachineStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ditto_ros_msgs__msg__MachineStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
