// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gridfleet_interfaces:msg/RobotPath.idl
// generated code does not contain a copyright notice

#ifndef GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_HPP_
#define GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gridfleet_interfaces__msg__RobotPath __attribute__((deprecated))
#else
# define DEPRECATED__gridfleet_interfaces__msg__RobotPath __declspec(deprecated)
#endif

namespace gridfleet_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotPath_
{
  using Type = RobotPath_<ContainerAllocator>;

  explicit RobotPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
    }
  }

  explicit RobotPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _xs_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _xs_type xs;
  using _ys_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ys_type ys;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__xs(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->xs = _arg;
    return *this;
  }
  Type & set__ys(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ys = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gridfleet_interfaces__msg__RobotPath
    std::shared_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gridfleet_interfaces__msg__RobotPath
    std::shared_ptr<gridfleet_interfaces::msg::RobotPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPath_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->xs != other.xs) {
      return false;
    }
    if (this->ys != other.ys) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPath_

// alias to use template instance with default allocator
using RobotPath =
  gridfleet_interfaces::msg::RobotPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gridfleet_interfaces

#endif  // GRIDFLEET_INTERFACES__MSG__DETAIL__ROBOT_PATH__STRUCT_HPP_
