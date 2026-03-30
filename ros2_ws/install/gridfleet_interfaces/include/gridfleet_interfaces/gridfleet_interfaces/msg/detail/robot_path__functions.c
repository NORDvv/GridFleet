// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gridfleet_interfaces:msg/RobotPath.idl
// generated code does not contain a copyright notice
#include "gridfleet_interfaces/msg/detail/robot_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `xs`
// Member `ys`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gridfleet_interfaces__msg__RobotPath__init(gridfleet_interfaces__msg__RobotPath * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    gridfleet_interfaces__msg__RobotPath__fini(msg);
    return false;
  }
  // xs
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->xs, 0)) {
    gridfleet_interfaces__msg__RobotPath__fini(msg);
    return false;
  }
  // ys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ys, 0)) {
    gridfleet_interfaces__msg__RobotPath__fini(msg);
    return false;
  }
  return true;
}

void
gridfleet_interfaces__msg__RobotPath__fini(gridfleet_interfaces__msg__RobotPath * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // xs
  rosidl_runtime_c__int32__Sequence__fini(&msg->xs);
  // ys
  rosidl_runtime_c__int32__Sequence__fini(&msg->ys);
}

bool
gridfleet_interfaces__msg__RobotPath__are_equal(const gridfleet_interfaces__msg__RobotPath * lhs, const gridfleet_interfaces__msg__RobotPath * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // xs
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->xs), &(rhs->xs)))
  {
    return false;
  }
  // ys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ys), &(rhs->ys)))
  {
    return false;
  }
  return true;
}

bool
gridfleet_interfaces__msg__RobotPath__copy(
  const gridfleet_interfaces__msg__RobotPath * input,
  gridfleet_interfaces__msg__RobotPath * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // xs
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->xs), &(output->xs)))
  {
    return false;
  }
  // ys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ys), &(output->ys)))
  {
    return false;
  }
  return true;
}

gridfleet_interfaces__msg__RobotPath *
gridfleet_interfaces__msg__RobotPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotPath * msg = (gridfleet_interfaces__msg__RobotPath *)allocator.allocate(sizeof(gridfleet_interfaces__msg__RobotPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gridfleet_interfaces__msg__RobotPath));
  bool success = gridfleet_interfaces__msg__RobotPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gridfleet_interfaces__msg__RobotPath__destroy(gridfleet_interfaces__msg__RobotPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gridfleet_interfaces__msg__RobotPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gridfleet_interfaces__msg__RobotPath__Sequence__init(gridfleet_interfaces__msg__RobotPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotPath * data = NULL;

  if (size) {
    data = (gridfleet_interfaces__msg__RobotPath *)allocator.zero_allocate(size, sizeof(gridfleet_interfaces__msg__RobotPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gridfleet_interfaces__msg__RobotPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gridfleet_interfaces__msg__RobotPath__fini(&data[i - 1]);
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
gridfleet_interfaces__msg__RobotPath__Sequence__fini(gridfleet_interfaces__msg__RobotPath__Sequence * array)
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
      gridfleet_interfaces__msg__RobotPath__fini(&array->data[i]);
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

gridfleet_interfaces__msg__RobotPath__Sequence *
gridfleet_interfaces__msg__RobotPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotPath__Sequence * array = (gridfleet_interfaces__msg__RobotPath__Sequence *)allocator.allocate(sizeof(gridfleet_interfaces__msg__RobotPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gridfleet_interfaces__msg__RobotPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gridfleet_interfaces__msg__RobotPath__Sequence__destroy(gridfleet_interfaces__msg__RobotPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gridfleet_interfaces__msg__RobotPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gridfleet_interfaces__msg__RobotPath__Sequence__are_equal(const gridfleet_interfaces__msg__RobotPath__Sequence * lhs, const gridfleet_interfaces__msg__RobotPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gridfleet_interfaces__msg__RobotPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gridfleet_interfaces__msg__RobotPath__Sequence__copy(
  const gridfleet_interfaces__msg__RobotPath__Sequence * input,
  gridfleet_interfaces__msg__RobotPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gridfleet_interfaces__msg__RobotPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gridfleet_interfaces__msg__RobotPath * data =
      (gridfleet_interfaces__msg__RobotPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gridfleet_interfaces__msg__RobotPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gridfleet_interfaces__msg__RobotPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gridfleet_interfaces__msg__RobotPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
