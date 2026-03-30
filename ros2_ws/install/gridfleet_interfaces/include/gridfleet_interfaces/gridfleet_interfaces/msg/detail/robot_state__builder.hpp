// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gridfleet_interfaces:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gridfleet_interfaces/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gridfleet_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotState_reached_goal
{
public:
  explicit Init_RobotState_reached_goal(::gridfleet_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::gridfleet_interfaces::msg::RobotState reached_goal(::gridfleet_interfaces::msg::RobotState::_reached_goal_type arg)
  {
    msg_.reached_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

class Init_RobotState_goal_y
{
public:
  explicit Init_RobotState_goal_y(::gridfleet_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_reached_goal goal_y(::gridfleet_interfaces::msg::RobotState::_goal_y_type arg)
  {
    msg_.goal_y = std::move(arg);
    return Init_RobotState_reached_goal(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

class Init_RobotState_goal_x
{
public:
  explicit Init_RobotState_goal_x(::gridfleet_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_goal_y goal_x(::gridfleet_interfaces::msg::RobotState::_goal_x_type arg)
  {
    msg_.goal_x = std::move(arg);
    return Init_RobotState_goal_y(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

class Init_RobotState_y
{
public:
  explicit Init_RobotState_y(::gridfleet_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_goal_x y(::gridfleet_interfaces::msg::RobotState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RobotState_goal_x(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

class Init_RobotState_x
{
public:
  explicit Init_RobotState_x(::gridfleet_interfaces::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_y x(::gridfleet_interfaces::msg::RobotState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RobotState_y(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

class Init_RobotState_robot_id
{
public:
  Init_RobotState_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_x robot_id(::gridfleet_interfaces::msg::RobotState::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotState_x(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gridfleet_interfaces::msg::RobotState>()
{
  return gridfleet_interfaces::msg::builder::Init_RobotState_robot_id();
}

}  // namespace gridfleet_interfaces

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
