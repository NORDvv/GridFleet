// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gridfleet_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "gridfleet_interfaces/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"

bool
gridfleet_interfaces__msg__RobotState__init(gridfleet_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    gridfleet_interfaces__msg__RobotState__fini(msg);
    return false;
  }
  // x
  // y
  // goal_x
  // goal_y
  // reached_goal
  return true;
}

void
gridfleet_interfaces__msg__RobotState__fini(gridfleet_interfaces__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // x
  // y
  // goal_x
  // goal_y
  // reached_goal
}

bool
gridfleet_interfaces__msg__RobotState__are_equal(const gridfleet_interfaces__msg__RobotState * lhs, const gridfleet_interfaces__msg__RobotState * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // goal_x
  if (lhs->goal_x != rhs->goal_x) {
    return false;
  }
  // goal_y
  if (lhs->goal_y != rhs->goal_y) {
    return false;
  }
  // reached_goal
  if (lhs->reached_goal != rhs->reached_goal) {
    return false;
  }
  return true;
}

bool
gridfleet_interfaces__msg__RobotState__copy(
  const gridfleet_interfaces__msg__RobotState * input,
  gridfleet_interfaces__msg__RobotState * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // goal_x
  output->goal_x = input->goal_x;
  // goal_y
  output->goal_y = input->goal_y;
  // reached_goal
  output->reached_goal = input->reached_goal;
  return true;
}

gridfleet_interfaces__msg__RobotState *
gridfleet_interfaces__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotState * msg = (gridfleet_interfaces__msg__RobotState *)allocator.allocate(sizeof(gridfleet_interfaces__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gridfleet_interfaces__msg__RobotState));
  bool success = gridfleet_interfaces__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gridfleet_interfaces__msg__RobotState__destroy(gridfleet_interfaces__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gridfleet_interfaces__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gridfleet_interfaces__msg__RobotState__Sequence__init(gridfleet_interfaces__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotState * data = NULL;

  if (size) {
    data = (gridfleet_interfaces__msg__RobotState *)allocator.zero_allocate(size, sizeof(gridfleet_interfaces__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gridfleet_interfaces__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gridfleet_interfaces__msg__RobotState__fini(&data[i - 1]);
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
gridfleet_interfaces__msg__RobotState__Sequence__fini(gridfleet_interfaces__msg__RobotState__Sequence * array)
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
      gridfleet_interfaces__msg__RobotState__fini(&array->data[i]);
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

gridfleet_interfaces__msg__RobotState__Sequence *
gridfleet_interfaces__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__msg__RobotState__Sequence * array = (gridfleet_interfaces__msg__RobotState__Sequence *)allocator.allocate(sizeof(gridfleet_interfaces__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gridfleet_interfaces__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gridfleet_interfaces__msg__RobotState__Sequence__destroy(gridfleet_interfaces__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gridfleet_interfaces__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gridfleet_interfaces__msg__RobotState__Sequence__are_equal(const gridfleet_interfaces__msg__RobotState__Sequence * lhs, const gridfleet_interfaces__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gridfleet_interfaces__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gridfleet_interfaces__msg__RobotState__Sequence__copy(
  const gridfleet_interfaces__msg__RobotState__Sequence * input,
  gridfleet_interfaces__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gridfleet_interfaces__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gridfleet_interfaces__msg__RobotState * data =
      (gridfleet_interfaces__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gridfleet_interfaces__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gridfleet_interfaces__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gridfleet_interfaces__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
