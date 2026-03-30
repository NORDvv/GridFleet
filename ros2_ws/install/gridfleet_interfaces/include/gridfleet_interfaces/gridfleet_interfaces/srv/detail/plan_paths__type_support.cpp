// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gridfleet_interfaces/srv/detail/plan_paths__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gridfleet_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PlanPaths_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gridfleet_interfaces::srv::PlanPaths_Request(_init);
}

void PlanPaths_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gridfleet_interfaces::srv::PlanPaths_Request *>(message_memory);
  typed_message->~PlanPaths_Request();
}

size_t size_function__PlanPaths_Request__obstacle_xs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__obstacle_xs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__obstacle_xs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__obstacle_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__obstacle_xs(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__obstacle_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__obstacle_xs(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__obstacle_xs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__obstacle_ys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__obstacle_ys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__obstacle_ys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__obstacle_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__obstacle_ys(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__obstacle_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__obstacle_ys(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__obstacle_ys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__robot_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__robot_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__robot_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__robot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__PlanPaths_Request__robot_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__robot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__PlanPaths_Request__robot_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__robot_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__start_xs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__start_xs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__start_xs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__start_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__start_xs(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__start_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__start_xs(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__start_xs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__start_ys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__start_ys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__start_ys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__start_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__start_ys(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__start_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__start_ys(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__start_ys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__goal_xs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__goal_xs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__goal_xs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__goal_xs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__goal_xs(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__goal_xs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__goal_xs(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__goal_xs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanPaths_Request__goal_ys(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Request__goal_ys(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Request__goal_ys(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Request__goal_ys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__PlanPaths_Request__goal_ys(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Request__goal_ys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__PlanPaths_Request__goal_ys(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Request__goal_ys(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanPaths_Request_message_member_array[9] = {
  {
    "map_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, map_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, map_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obstacle_xs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, obstacle_xs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__obstacle_xs,  // size() function pointer
    get_const_function__PlanPaths_Request__obstacle_xs,  // get_const(index) function pointer
    get_function__PlanPaths_Request__obstacle_xs,  // get(index) function pointer
    fetch_function__PlanPaths_Request__obstacle_xs,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__obstacle_xs,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__obstacle_xs  // resize(index) function pointer
  },
  {
    "obstacle_ys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, obstacle_ys),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__obstacle_ys,  // size() function pointer
    get_const_function__PlanPaths_Request__obstacle_ys,  // get_const(index) function pointer
    get_function__PlanPaths_Request__obstacle_ys,  // get(index) function pointer
    fetch_function__PlanPaths_Request__obstacle_ys,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__obstacle_ys,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__obstacle_ys  // resize(index) function pointer
  },
  {
    "robot_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, robot_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__robot_ids,  // size() function pointer
    get_const_function__PlanPaths_Request__robot_ids,  // get_const(index) function pointer
    get_function__PlanPaths_Request__robot_ids,  // get(index) function pointer
    fetch_function__PlanPaths_Request__robot_ids,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__robot_ids,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__robot_ids  // resize(index) function pointer
  },
  {
    "start_xs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, start_xs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__start_xs,  // size() function pointer
    get_const_function__PlanPaths_Request__start_xs,  // get_const(index) function pointer
    get_function__PlanPaths_Request__start_xs,  // get(index) function pointer
    fetch_function__PlanPaths_Request__start_xs,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__start_xs,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__start_xs  // resize(index) function pointer
  },
  {
    "start_ys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, start_ys),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__start_ys,  // size() function pointer
    get_const_function__PlanPaths_Request__start_ys,  // get_const(index) function pointer
    get_function__PlanPaths_Request__start_ys,  // get(index) function pointer
    fetch_function__PlanPaths_Request__start_ys,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__start_ys,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__start_ys  // resize(index) function pointer
  },
  {
    "goal_xs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, goal_xs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__goal_xs,  // size() function pointer
    get_const_function__PlanPaths_Request__goal_xs,  // get_const(index) function pointer
    get_function__PlanPaths_Request__goal_xs,  // get(index) function pointer
    fetch_function__PlanPaths_Request__goal_xs,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__goal_xs,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__goal_xs  // resize(index) function pointer
  },
  {
    "goal_ys",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Request, goal_ys),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Request__goal_ys,  // size() function pointer
    get_const_function__PlanPaths_Request__goal_ys,  // get_const(index) function pointer
    get_function__PlanPaths_Request__goal_ys,  // get(index) function pointer
    fetch_function__PlanPaths_Request__goal_ys,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Request__goal_ys,  // assign(index, value) function pointer
    resize_function__PlanPaths_Request__goal_ys  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanPaths_Request_message_members = {
  "gridfleet_interfaces::srv",  // message namespace
  "PlanPaths_Request",  // message name
  9,  // number of fields
  sizeof(gridfleet_interfaces::srv::PlanPaths_Request),
  PlanPaths_Request_message_member_array,  // message members
  PlanPaths_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanPaths_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanPaths_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanPaths_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gridfleet_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gridfleet_interfaces::srv::PlanPaths_Request>()
{
  return &::gridfleet_interfaces::srv::rosidl_typesupport_introspection_cpp::PlanPaths_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gridfleet_interfaces, srv, PlanPaths_Request)() {
  return &::gridfleet_interfaces::srv::rosidl_typesupport_introspection_cpp::PlanPaths_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gridfleet_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PlanPaths_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gridfleet_interfaces::srv::PlanPaths_Response(_init);
}

void PlanPaths_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gridfleet_interfaces::srv::PlanPaths_Response *>(message_memory);
  typed_message->~PlanPaths_Response();
}

size_t size_function__PlanPaths_Response__paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gridfleet_interfaces::msg::RobotPath> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanPaths_Response__paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gridfleet_interfaces::msg::RobotPath> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanPaths_Response__paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gridfleet_interfaces::msg::RobotPath> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanPaths_Response__paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gridfleet_interfaces::msg::RobotPath *>(
    get_const_function__PlanPaths_Response__paths(untyped_member, index));
  auto & value = *reinterpret_cast<gridfleet_interfaces::msg::RobotPath *>(untyped_value);
  value = item;
}

void assign_function__PlanPaths_Response__paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gridfleet_interfaces::msg::RobotPath *>(
    get_function__PlanPaths_Response__paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const gridfleet_interfaces::msg::RobotPath *>(untyped_value);
  item = value;
}

void resize_function__PlanPaths_Response__paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gridfleet_interfaces::msg::RobotPath> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanPaths_Response_message_member_array[3] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Response, error_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gridfleet_interfaces::msg::RobotPath>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gridfleet_interfaces::srv::PlanPaths_Response, paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanPaths_Response__paths,  // size() function pointer
    get_const_function__PlanPaths_Response__paths,  // get_const(index) function pointer
    get_function__PlanPaths_Response__paths,  // get(index) function pointer
    fetch_function__PlanPaths_Response__paths,  // fetch(index, &value) function pointer
    assign_function__PlanPaths_Response__paths,  // assign(index, value) function pointer
    resize_function__PlanPaths_Response__paths  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanPaths_Response_message_members = {
  "gridfleet_interfaces::srv",  // message namespace
  "PlanPaths_Response",  // message name
  3,  // number of fields
  sizeof(gridfleet_interfaces::srv::PlanPaths_Response),
  PlanPaths_Response_message_member_array,  // message members
  PlanPaths_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanPaths_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanPaths_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanPaths_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gridfleet_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gridfleet_interfaces::srv::PlanPaths_Response>()
{
  return &::gridfleet_interfaces::srv::rosidl_typesupport_introspection_cpp::PlanPaths_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gridfleet_interfaces, srv, PlanPaths_Response)() {
  return &::gridfleet_interfaces::srv::rosidl_typesupport_introspection_cpp::PlanPaths_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "gridfleet_interfaces/srv/detail/plan_paths__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace gridfleet_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PlanPaths_service_members = {
  "gridfleet_interfaces::srv",  // service namespace
  "PlanPaths",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gridfleet_interfaces::srv::PlanPaths>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t PlanPaths_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanPaths_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gridfleet_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gridfleet_interfaces::srv::PlanPaths>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gridfleet_interfaces::srv::rosidl_typesupport_introspection_cpp::PlanPaths_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gridfleet_interfaces::srv::PlanPaths_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gridfleet_interfaces::srv::PlanPaths_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gridfleet_interfaces, srv, PlanPaths)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gridfleet_interfaces::srv::PlanPaths>();
}

#ifdef __cplusplus
}
#endif
