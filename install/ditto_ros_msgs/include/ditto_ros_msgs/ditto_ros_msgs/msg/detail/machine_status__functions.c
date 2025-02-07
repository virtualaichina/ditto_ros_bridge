// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ditto_ros_msgs:msg/MachineStatus.idl
// generated code does not contain a copyright notice
#include "ditto_ros_msgs/msg/detail/machine_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `machine_id`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
ditto_ros_msgs__msg__MachineStatus__init(ditto_ros_msgs__msg__MachineStatus * msg)
{
  if (!msg) {
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__init(&msg->machine_id)) {
    ditto_ros_msgs__msg__MachineStatus__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    ditto_ros_msgs__msg__MachineStatus__fini(msg);
    return false;
  }
  // uptime
  // efficiency
  return true;
}

void
ditto_ros_msgs__msg__MachineStatus__fini(ditto_ros_msgs__msg__MachineStatus * msg)
{
  if (!msg) {
    return;
  }
  // machine_id
  rosidl_runtime_c__String__fini(&msg->machine_id);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // uptime
  // efficiency
}

bool
ditto_ros_msgs__msg__MachineStatus__are_equal(const ditto_ros_msgs__msg__MachineStatus * lhs, const ditto_ros_msgs__msg__MachineStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->machine_id), &(rhs->machine_id)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // uptime
  if (lhs->uptime != rhs->uptime) {
    return false;
  }
  // efficiency
  if (lhs->efficiency != rhs->efficiency) {
    return false;
  }
  return true;
}

bool
ditto_ros_msgs__msg__MachineStatus__copy(
  const ditto_ros_msgs__msg__MachineStatus * input,
  ditto_ros_msgs__msg__MachineStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // machine_id
  if (!rosidl_runtime_c__String__copy(
      &(input->machine_id), &(output->machine_id)))
  {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // uptime
  output->uptime = input->uptime;
  // efficiency
  output->efficiency = input->efficiency;
  return true;
}

ditto_ros_msgs__msg__MachineStatus *
ditto_ros_msgs__msg__MachineStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__MachineStatus * msg = (ditto_ros_msgs__msg__MachineStatus *)allocator.allocate(sizeof(ditto_ros_msgs__msg__MachineStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ditto_ros_msgs__msg__MachineStatus));
  bool success = ditto_ros_msgs__msg__MachineStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ditto_ros_msgs__msg__MachineStatus__destroy(ditto_ros_msgs__msg__MachineStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ditto_ros_msgs__msg__MachineStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ditto_ros_msgs__msg__MachineStatus__Sequence__init(ditto_ros_msgs__msg__MachineStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__MachineStatus * data = NULL;

  if (size) {
    data = (ditto_ros_msgs__msg__MachineStatus *)allocator.zero_allocate(size, sizeof(ditto_ros_msgs__msg__MachineStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ditto_ros_msgs__msg__MachineStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ditto_ros_msgs__msg__MachineStatus__fini(&data[i - 1]);
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
ditto_ros_msgs__msg__MachineStatus__Sequence__fini(ditto_ros_msgs__msg__MachineStatus__Sequence * array)
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
      ditto_ros_msgs__msg__MachineStatus__fini(&array->data[i]);
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

ditto_ros_msgs__msg__MachineStatus__Sequence *
ditto_ros_msgs__msg__MachineStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ditto_ros_msgs__msg__MachineStatus__Sequence * array = (ditto_ros_msgs__msg__MachineStatus__Sequence *)allocator.allocate(sizeof(ditto_ros_msgs__msg__MachineStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ditto_ros_msgs__msg__MachineStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ditto_ros_msgs__msg__MachineStatus__Sequence__destroy(ditto_ros_msgs__msg__MachineStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ditto_ros_msgs__msg__MachineStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ditto_ros_msgs__msg__MachineStatus__Sequence__are_equal(const ditto_ros_msgs__msg__MachineStatus__Sequence * lhs, const ditto_ros_msgs__msg__MachineStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ditto_ros_msgs__msg__MachineStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ditto_ros_msgs__msg__MachineStatus__Sequence__copy(
  const ditto_ros_msgs__msg__MachineStatus__Sequence * input,
  ditto_ros_msgs__msg__MachineStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ditto_ros_msgs__msg__MachineStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ditto_ros_msgs__msg__MachineStatus * data =
      (ditto_ros_msgs__msg__MachineStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ditto_ros_msgs__msg__MachineStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ditto_ros_msgs__msg__MachineStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ditto_ros_msgs__msg__MachineStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
