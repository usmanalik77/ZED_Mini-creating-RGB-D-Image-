// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_interfaces:msg/MagHeadingStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_INTERFACES__MSG__DETAIL__MAG_HEADING_STATUS__BUILDER_HPP_
#define ZED_INTERFACES__MSG__DETAIL__MAG_HEADING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_interfaces/msg/detail/mag_heading_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_interfaces
{

namespace msg
{

namespace builder
{

class Init_MagHeadingStatus_status
{
public:
  Init_MagHeadingStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_interfaces::msg::MagHeadingStatus status(::zed_interfaces::msg::MagHeadingStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_interfaces::msg::MagHeadingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_interfaces::msg::MagHeadingStatus>()
{
  return zed_interfaces::msg::builder::Init_MagHeadingStatus_status();
}

}  // namespace zed_interfaces

#endif  // ZED_INTERFACES__MSG__DETAIL__MAG_HEADING_STATUS__BUILDER_HPP_
