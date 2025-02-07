// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ditto_ros_msgs:msg/Alert.idl
// generated code does not contain a copyright notice
#include "ditto_ros_msgs/msg/detail/alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
ditto_ros_msgs__msg__Alert__init(ditto_ros_msgs__msg__Alert * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ditto_ros_msgs__msg__Alert__fini(msg);
    return false;
  }
  // severity
  return true;
}

void
ditto_ros_msgs__msg__Alert__fini(ditto_ros_msgs__msg__Alert * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // severity
}

bool
ditto_ros_msgs__msg__Alert__are_equal(const ditto_ros_msgs__msg__Alert * lhs, const ditto_ros_msgs__msg__Alert * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // severity
  if (lhs->severity != rhs->severity) {
    return false;
  }
  return true;
}

bool
ditto_ros_msgs__msg__Alert__copy(
  const ditto_ros_msgs__msg__Alert * input,
  ditto_ros_msgs__msg__Alert * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // severity
  output->severity = input->severity;
  return true;
}

ditto_ros_msgs__msg__Alert *
ditto_ros_msgs__msg__Alert__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__Alert * msg = (ditto_ros_msgs__msg__Alert *)allocator.allocate(sizeof(ditto_ros_msgs__msg__Alert), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ditto_ros_msgs__msg__Alert));
  bool success = ditto_ros_msgs__msg__Alert__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ditto_ros_msgs__msg__Alert__destroy(ditto_ros_msgs__msg__Alert * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ditto_ros_msgs__msg__Alert__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ditto_ros_msgs__msg__Alert__Sequence__init(ditto_ros_msgs__msg__Alert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__Alert * data = NULL;

  if (size) {
    data = (ditto_ros_msgs__msg__Alert *)allocator.zero_allocate(size, sizeof(ditto_ros_msgs__msg__Alert), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ditto_ros_msgs__msg__Alert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ditto_ros_msgs__msg__Alert__fini(&data[i - 1]);
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
ditto_ros_msgs__msg__Alert__Sequence__fini(ditto_ros_msgs__msg__Alert__Sequence * array)
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
      ditto_ros_msgs__msg__Alert__fini(&array->data[i]);
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

ditto_ros_msgs__msg__Alert__Sequence *
ditto_ros_msgs__msg__Alert__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__Alert__Sequence * array = (ditto_ros_msgs__msg__Alert__Sequence *)allocator.allocate(sizeof(ditto_ros_msgs__msg__Alert__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ditto_ros_msgs__msg__Alert__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ditto_ros_msgs__msg__Alert__Sequence__destroy(ditto_ros_msgs__msg__Alert__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ditto_ros_msgs__msg__Alert__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ditto_ros_msgs__msg__Alert__Sequence__are_equal(const ditto_ros_msgs__msg__Alert__Sequence * lhs, const ditto_ros_msgs__msg__Alert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ditto_ros_msgs__msg__Alert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ditto_ros_msgs__msg__Alert__Sequence__copy(
  const ditto_ros_msgs__msg__Alert__Sequence * input,
  ditto_ros_msgs__msg__Alert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ditto_ros_msgs__msg__Alert);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ditto_ros_msgs__msg__Alert * data =
      (ditto_ros_msgs__msg__Alert *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ditto_ros_msgs__msg__Alert__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ditto_ros_msgs__msg__Alert__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ditto_ros_msgs__msg__Alert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
