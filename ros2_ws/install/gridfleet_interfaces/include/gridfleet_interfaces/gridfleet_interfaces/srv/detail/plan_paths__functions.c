// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice
#include "gridfleet_interfaces/srv/detail/plan_paths__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `obstacle_xs`
// Member `obstacle_ys`
// Member `start_xs`
// Member `start_ys`
// Member `goal_xs`
// Member `goal_ys`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `robot_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
gridfleet_interfaces__srv__PlanPaths_Request__init(gridfleet_interfaces__srv__PlanPaths_Request * msg)
{
  if (!msg) {
    return false;
  }
  // map_width
  // map_height
  // obstacle_xs
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->obstacle_xs, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // obstacle_ys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->obstacle_ys, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->robot_ids, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // start_xs
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->start_xs, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // start_ys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->start_ys, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // goal_xs
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->goal_xs, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  // goal_ys
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->goal_ys, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
    return false;
  }
  return true;
}

void
gridfleet_interfaces__srv__PlanPaths_Request__fini(gridfleet_interfaces__srv__PlanPaths_Request * msg)
{
  if (!msg) {
    return;
  }
  // map_width
  // map_height
  // obstacle_xs
  rosidl_runtime_c__int32__Sequence__fini(&msg->obstacle_xs);
  // obstacle_ys
  rosidl_runtime_c__int32__Sequence__fini(&msg->obstacle_ys);
  // robot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->robot_ids);
  // start_xs
  rosidl_runtime_c__int32__Sequence__fini(&msg->start_xs);
  // start_ys
  rosidl_runtime_c__int32__Sequence__fini(&msg->start_ys);
  // goal_xs
  rosidl_runtime_c__int32__Sequence__fini(&msg->goal_xs);
  // goal_ys
  rosidl_runtime_c__int32__Sequence__fini(&msg->goal_ys);
}

bool
gridfleet_interfaces__srv__PlanPaths_Request__are_equal(const gridfleet_interfaces__srv__PlanPaths_Request * lhs, const gridfleet_interfaces__srv__PlanPaths_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_width
  if (lhs->map_width != rhs->map_width) {
    return false;
  }
  // map_height
  if (lhs->map_height != rhs->map_height) {
    return false;
  }
  // obstacle_xs
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->obstacle_xs), &(rhs->obstacle_xs)))
  {
    return false;
  }
  // obstacle_ys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->obstacle_ys), &(rhs->obstacle_ys)))
  {
    return false;
  }
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->robot_ids), &(rhs->robot_ids)))
  {
    return false;
  }
  // start_xs
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->start_xs), &(rhs->start_xs)))
  {
    return false;
  }
  // start_ys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->start_ys), &(rhs->start_ys)))
  {
    return false;
  }
  // goal_xs
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->goal_xs), &(rhs->goal_xs)))
  {
    return false;
  }
  // goal_ys
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->goal_ys), &(rhs->goal_ys)))
  {
    return false;
  }
  return true;
}

bool
gridfleet_interfaces__srv__PlanPaths_Request__copy(
  const gridfleet_interfaces__srv__PlanPaths_Request * input,
  gridfleet_interfaces__srv__PlanPaths_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // map_width
  output->map_width = input->map_width;
  // map_height
  output->map_height = input->map_height;
  // obstacle_xs
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->obstacle_xs), &(output->obstacle_xs)))
  {
    return false;
  }
  // obstacle_ys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->obstacle_ys), &(output->obstacle_ys)))
  {
    return false;
  }
  // robot_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->robot_ids), &(output->robot_ids)))
  {
    return false;
  }
  // start_xs
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->start_xs), &(output->start_xs)))
  {
    return false;
  }
  // start_ys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->start_ys), &(output->start_ys)))
  {
    return false;
  }
  // goal_xs
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->goal_xs), &(output->goal_xs)))
  {
    return false;
  }
  // goal_ys
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->goal_ys), &(output->goal_ys)))
  {
    return false;
  }
  return true;
}

gridfleet_interfaces__srv__PlanPaths_Request *
gridfleet_interfaces__srv__PlanPaths_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Request * msg = (gridfleet_interfaces__srv__PlanPaths_Request *)allocator.allocate(sizeof(gridfleet_interfaces__srv__PlanPaths_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gridfleet_interfaces__srv__PlanPaths_Request));
  bool success = gridfleet_interfaces__srv__PlanPaths_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gridfleet_interfaces__srv__PlanPaths_Request__destroy(gridfleet_interfaces__srv__PlanPaths_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gridfleet_interfaces__srv__PlanPaths_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__init(gridfleet_interfaces__srv__PlanPaths_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Request * data = NULL;

  if (size) {
    data = (gridfleet_interfaces__srv__PlanPaths_Request *)allocator.zero_allocate(size, sizeof(gridfleet_interfaces__srv__PlanPaths_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gridfleet_interfaces__srv__PlanPaths_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gridfleet_interfaces__srv__PlanPaths_Request__fini(&data[i - 1]);
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
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__fini(gridfleet_interfaces__srv__PlanPaths_Request__Sequence * array)
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
      gridfleet_interfaces__srv__PlanPaths_Request__fini(&array->data[i]);
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

gridfleet_interfaces__srv__PlanPaths_Request__Sequence *
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Request__Sequence * array = (gridfleet_interfaces__srv__PlanPaths_Request__Sequence *)allocator.allocate(sizeof(gridfleet_interfaces__srv__PlanPaths_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gridfleet_interfaces__srv__PlanPaths_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__destroy(gridfleet_interfaces__srv__PlanPaths_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gridfleet_interfaces__srv__PlanPaths_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__are_equal(const gridfleet_interfaces__srv__PlanPaths_Request__Sequence * lhs, const gridfleet_interfaces__srv__PlanPaths_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gridfleet_interfaces__srv__PlanPaths_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gridfleet_interfaces__srv__PlanPaths_Request__Sequence__copy(
  const gridfleet_interfaces__srv__PlanPaths_Request__Sequence * input,
  gridfleet_interfaces__srv__PlanPaths_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gridfleet_interfaces__srv__PlanPaths_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gridfleet_interfaces__srv__PlanPaths_Request * data =
      (gridfleet_interfaces__srv__PlanPaths_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gridfleet_interfaces__srv__PlanPaths_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gridfleet_interfaces__srv__PlanPaths_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gridfleet_interfaces__srv__PlanPaths_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `paths`
#include "gridfleet_interfaces/msg/detail/robot_path__functions.h"

bool
gridfleet_interfaces__srv__PlanPaths_Response__init(gridfleet_interfaces__srv__PlanPaths_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    gridfleet_interfaces__srv__PlanPaths_Response__fini(msg);
    return false;
  }
  // paths
  if (!gridfleet_interfaces__msg__RobotPath__Sequence__init(&msg->paths, 0)) {
    gridfleet_interfaces__srv__PlanPaths_Response__fini(msg);
    return false;
  }
  return true;
}

void
gridfleet_interfaces__srv__PlanPaths_Response__fini(gridfleet_interfaces__srv__PlanPaths_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // paths
  gridfleet_interfaces__msg__RobotPath__Sequence__fini(&msg->paths);
}

bool
gridfleet_interfaces__srv__PlanPaths_Response__are_equal(const gridfleet_interfaces__srv__PlanPaths_Response * lhs, const gridfleet_interfaces__srv__PlanPaths_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // paths
  if (!gridfleet_interfaces__msg__RobotPath__Sequence__are_equal(
      &(lhs->paths), &(rhs->paths)))
  {
    return false;
  }
  return true;
}

bool
gridfleet_interfaces__srv__PlanPaths_Response__copy(
  const gridfleet_interfaces__srv__PlanPaths_Response * input,
  gridfleet_interfaces__srv__PlanPaths_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // paths
  if (!gridfleet_interfaces__msg__RobotPath__Sequence__copy(
      &(input->paths), &(output->paths)))
  {
    return false;
  }
  return true;
}

gridfleet_interfaces__srv__PlanPaths_Response *
gridfleet_interfaces__srv__PlanPaths_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Response * msg = (gridfleet_interfaces__srv__PlanPaths_Response *)allocator.allocate(sizeof(gridfleet_interfaces__srv__PlanPaths_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gridfleet_interfaces__srv__PlanPaths_Response));
  bool success = gridfleet_interfaces__srv__PlanPaths_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gridfleet_interfaces__srv__PlanPaths_Response__destroy(gridfleet_interfaces__srv__PlanPaths_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gridfleet_interfaces__srv__PlanPaths_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__init(gridfleet_interfaces__srv__PlanPaths_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Response * data = NULL;

  if (size) {
    data = (gridfleet_interfaces__srv__PlanPaths_Response *)allocator.zero_allocate(size, sizeof(gridfleet_interfaces__srv__PlanPaths_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gridfleet_interfaces__srv__PlanPaths_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gridfleet_interfaces__srv__PlanPaths_Response__fini(&data[i - 1]);
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
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__fini(gridfleet_interfaces__srv__PlanPaths_Response__Sequence * array)
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
      gridfleet_interfaces__srv__PlanPaths_Response__fini(&array->data[i]);
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

gridfleet_interfaces__srv__PlanPaths_Response__Sequence *
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gridfleet_interfaces__srv__PlanPaths_Response__Sequence * array = (gridfleet_interfaces__srv__PlanPaths_Response__Sequence *)allocator.allocate(sizeof(gridfleet_interfaces__srv__PlanPaths_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gridfleet_interfaces__srv__PlanPaths_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__destroy(gridfleet_interfaces__srv__PlanPaths_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gridfleet_interfaces__srv__PlanPaths_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__are_equal(const gridfleet_interfaces__srv__PlanPaths_Response__Sequence * lhs, const gridfleet_interfaces__srv__PlanPaths_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gridfleet_interfaces__srv__PlanPaths_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gridfleet_interfaces__srv__PlanPaths_Response__Sequence__copy(
  const gridfleet_interfaces__srv__PlanPaths_Response__Sequence * input,
  gridfleet_interfaces__srv__PlanPaths_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gridfleet_interfaces__srv__PlanPaths_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gridfleet_interfaces__srv__PlanPaths_Response * data =
      (gridfleet_interfaces__srv__PlanPaths_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gridfleet_interfaces__srv__PlanPaths_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gridfleet_interfaces__srv__PlanPaths_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gridfleet_interfaces__srv__PlanPaths_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
