// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gridfleet_interfaces:msg/RobotPath.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__BUILDER_HPP_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gridfleet_interfaces/msg/detail/robot_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gridfleet_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotPath_ys
{
public:
  explicit Init_RobotPath_ys(::gridfleet_interfaces::msg::RobotPath & msg)
  : msg_(msg)
  {}
  ::gridfleet_interfaces::msg::RobotPath ys(::gridfleet_interfaces::msg::RobotPath::_ys_type arg)
  {
    msg_.ys = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotPath msg_;
};

class Init_RobotPath_xs
{
public:
  explicit Init_RobotPath_xs(::gridfleet_interfaces::msg::RobotPath & msg)
  : msg_(msg)
  {}
  Init_RobotPath_ys xs(::gridfleet_interfaces::msg::RobotPath::_xs_type arg)
  {
    msg_.xs = std::move(arg);
    return Init_RobotPath_ys(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotPath msg_;
};

class Init_RobotPath_robot_id
{
public:
  Init_RobotPath_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPath_xs robot_id(::gridfleet_interfaces::msg::RobotPath::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotPath_xs(msg_);
  }

private:
  ::gridfleet_interfaces::msg::RobotPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gridfleet_interfaces::msg::RobotPath>()
{
  return gridfleet_interfaces::msg::builder::Init_RobotPath_robot_id();
}

}  // namespace gridfleet_interfaces

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__BUILDER_HPP_
