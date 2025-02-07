// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ditto_ros_msgs:msg/AssetMetadata.idl
// generated code does not contain a copyright notice
#include "ditto_ros_msgs/msg/detail/asset_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `asset_id`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ditto_ros_msgs__msg__AssetMetadata__init(ditto_ros_msgs__msg__AssetMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // asset_id
  if (!rosidl_runtime_c__String__init(&msg->asset_id)) {
    ditto_ros_msgs__msg__AssetMetadata__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ditto_ros_msgs__msg__AssetMetadata__fini(msg);
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__init(&msg->location)) {
    ditto_ros_msgs__msg__AssetMetadata__fini(msg);
    return false;
  }
  return true;
}

void
ditto_ros_msgs__msg__AssetMetadata__fini(ditto_ros_msgs__msg__AssetMetadata * msg)
{
  if (!msg) {
    return;
  }
  // asset_id
  rosidl_runtime_c__String__fini(&msg->asset_id);
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // location
  geometry_msgs__msg__Point__fini(&msg->location);
}

bool
ditto_ros_msgs__msg__AssetMetadata__are_equal(const ditto_ros_msgs__msg__AssetMetadata * lhs, const ditto_ros_msgs__msg__AssetMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // asset_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->asset_id), &(rhs->asset_id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
ditto_ros_msgs__msg__AssetMetadata__copy(
  const ditto_ros_msgs__msg__AssetMetadata * input,
  ditto_ros_msgs__msg__AssetMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // asset_id
  if (!rosidl_runtime_c__String__copy(
      &(input->asset_id), &(output->asset_id)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // location
  if (!geometry_msgs__msg__Point__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

ditto_ros_msgs__msg__AssetMetadata *
ditto_ros_msgs__msg__AssetMetadata__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__AssetMetadata * msg = (ditto_ros_msgs__msg__AssetMetadata *)allocator.allocate(sizeof(ditto_ros_msgs__msg__AssetMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ditto_ros_msgs__msg__AssetMetadata));
  bool success = ditto_ros_msgs__msg__AssetMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ditto_ros_msgs__msg__AssetMetadata__destroy(ditto_ros_msgs__msg__AssetMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ditto_ros_msgs__msg__AssetMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ditto_ros_msgs__msg__AssetMetadata__Sequence__init(ditto_ros_msgs__msg__AssetMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__AssetMetadata * data = NULL;

  if (size) {
    data = (ditto_ros_msgs__msg__AssetMetadata *)allocator.zero_allocate(size, sizeof(ditto_ros_msgs__msg__AssetMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ditto_ros_msgs__msg__AssetMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ditto_ros_msgs__msg__AssetMetadata__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ditto_ros_msgs__msg__AssetMetadata__Sequence__fini(ditto_ros_msgs__msg__AssetMetadata__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ditto_ros_msgs__msg__AssetMetadata__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ditto_ros_msgs__msg__AssetMetadata__Sequence *
ditto_ros_msgs__msg__AssetMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__AssetMetadata__Sequence * array = (ditto_ros_msgs__msg__AssetMetadata__Sequence *)allocator.allocate(sizeof(ditto_ros_msgs__msg__AssetMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ditto_ros_msgs__msg__AssetMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ditto_ros_msgs__msg__AssetMetadata__Sequence__destroy(ditto_ros_msgs__msg__AssetMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ditto_ros_msgs__msg__AssetMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ditto_ros_msgs__msg__AssetMetadata__Sequence__are_equal(const ditto_ros_msgs__msg__AssetMetadata__Sequence * lhs, const ditto_ros_msgs__msg__AssetMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ditto_ros_msgs__msg__AssetMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ditto_ros_msgs__msg__AssetMetadata__Sequence__copy(
  const ditto_ros_msgs__msg__AssetMetadata__Sequence * input,
  ditto_ros_msgs__msg__AssetMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ditto_ros_msgs__msg__AssetMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ditto_ros_msgs__msg__AssetMetadata * data =
      (ditto_ros_msgs__msg__AssetMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ditto_ros_msgs__msg__AssetMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ditto_ros_msgs__msg__AssetMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ditto_ros_msgs__msg__AssetMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
