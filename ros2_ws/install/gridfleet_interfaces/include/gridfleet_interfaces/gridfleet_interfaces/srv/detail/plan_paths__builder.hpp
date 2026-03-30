// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gridfleet_interfaces:srv/PlanPaths.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__BUILDER_HPP_
#define GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gridfleet_interfaces/srv/detail/plan_paths__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gridfleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlanPaths_Request_goal_ys
{
public:
  explicit Init_PlanPaths_Request_goal_ys(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  ::gridfleet_interfaces::srv::PlanPaths_Request goal_ys(::gridfleet_interfaces::srv::PlanPaths_Request::_goal_ys_type arg)
  {
    msg_.goal_ys = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_goal_xs
{
public:
  explicit Init_PlanPaths_Request_goal_xs(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_goal_ys goal_xs(::gridfleet_interfaces::srv::PlanPaths_Request::_goal_xs_type arg)
  {
    msg_.goal_xs = std::move(arg);
    return Init_PlanPaths_Request_goal_ys(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_start_ys
{
public:
  explicit Init_PlanPaths_Request_start_ys(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_goal_xs start_ys(::gridfleet_interfaces::srv::PlanPaths_Request::_start_ys_type arg)
  {
    msg_.start_ys = std::move(arg);
    return Init_PlanPaths_Request_goal_xs(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_start_xs
{
public:
  explicit Init_PlanPaths_Request_start_xs(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_start_ys start_xs(::gridfleet_interfaces::srv::PlanPaths_Request::_start_xs_type arg)
  {
    msg_.start_xs = std::move(arg);
    return Init_PlanPaths_Request_start_ys(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_robot_ids
{
public:
  explicit Init_PlanPaths_Request_robot_ids(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_start_xs robot_ids(::gridfleet_interfaces::srv::PlanPaths_Request::_robot_ids_type arg)
  {
    msg_.robot_ids = std::move(arg);
    return Init_PlanPaths_Request_start_xs(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_obstacle_ys
{
public:
  explicit Init_PlanPaths_Request_obstacle_ys(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_robot_ids obstacle_ys(::gridfleet_interfaces::srv::PlanPaths_Request::_obstacle_ys_type arg)
  {
    msg_.obstacle_ys = std::move(arg);
    return Init_PlanPaths_Request_robot_ids(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_obstacle_xs
{
public:
  explicit Init_PlanPaths_Request_obstacle_xs(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_obstacle_ys obstacle_xs(::gridfleet_interfaces::srv::PlanPaths_Request::_obstacle_xs_type arg)
  {
    msg_.obstacle_xs = std::move(arg);
    return Init_PlanPaths_Request_obstacle_ys(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_map_height
{
public:
  explicit Init_PlanPaths_Request_map_height(::gridfleet_interfaces::srv::PlanPaths_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Request_obstacle_xs map_height(::gridfleet_interfaces::srv::PlanPaths_Request::_map_height_type arg)
  {
    msg_.map_height = std::move(arg);
    return Init_PlanPaths_Request_obstacle_xs(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

class Init_PlanPaths_Request_map_width
{
public:
  Init_PlanPaths_Request_map_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPaths_Request_map_height map_width(::gridfleet_interfaces::srv::PlanPaths_Request::_map_width_type arg)
  {
    msg_.map_width = std::move(arg);
    return Init_PlanPaths_Request_map_height(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gridfleet_interfaces::srv::PlanPaths_Request>()
{
  return gridfleet_interfaces::srv::builder::Init_PlanPaths_Request_map_width();
}

}  // namespace gridfleet_interfaces


namespace gridfleet_interfaces
{

namespace srv
{

namespace builder
{

class Init_PlanPaths_Response_paths
{
public:
  explicit Init_PlanPaths_Response_paths(::gridfleet_interfaces::srv::PlanPaths_Response & msg)
  : msg_(msg)
  {}
  ::gridfleet_interfaces::srv::PlanPaths_Response paths(::gridfleet_interfaces::srv::PlanPaths_Response::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Response msg_;
};

class Init_PlanPaths_Response_error_message
{
public:
  explicit Init_PlanPaths_Response_error_message(::gridfleet_interfaces::srv::PlanPaths_Response & msg)
  : msg_(msg)
  {}
  Init_PlanPaths_Response_paths error_message(::gridfleet_interfaces::srv::PlanPaths_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_PlanPaths_Response_paths(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Response msg_;
};

class Init_PlanPaths_Response_success
{
public:
  Init_PlanPaths_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPaths_Response_error_message success(::gridfleet_interfaces::srv::PlanPaths_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanPaths_Response_error_message(msg_);
  }

private:
  ::gridfleet_interfaces::srv::PlanPaths_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gridfleet_interfaces::srv::PlanPaths_Response>()
{
  return gridfleet_interfaces::srv::builder::Init_PlanPaths_Response_success();
}

}  // namespace gridfleet_interfaces

#endif  // GRIDFLEET_INTERFACES__SRV__DETAIL__PLAN_PATHS__BUILDER_HPP_
