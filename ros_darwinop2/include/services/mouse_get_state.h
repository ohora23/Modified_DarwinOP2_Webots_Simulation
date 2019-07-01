/*
 * Copyright 1996-2018 Cyberbotics Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WEBOTS_ROS_MESSAGE_MOUSE_GET_STATE_H
#define WEBOTS_ROS_MESSAGE_MOUSE_GET_STATE_H

#include "ros/service_traits.h"

#include "mouse_get_stateRequest.h"
#include "mouse_get_stateResponse.h"

namespace webots_ros
{

struct mouse_get_state
{

typedef mouse_get_stateRequest Request;
typedef mouse_get_stateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros

namespace ros
{
namespace service_traits
{

template<>
struct MD5Sum< ::webots_ros::mouse_get_state > {
  static const char* value()
  {
    return "f4314fc92ab9c1f74ef71e42c0634a99";
  }

  static const char* value(const ::webots_ros::mouse_get_state&) { return value(); }
};

template<>
struct DataType< ::webots_ros::mouse_get_state > {
  static const char* value()
  {
    return "webots_ros/mouse_get_state";
  }

  static const char* value(const ::webots_ros::mouse_get_state&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::mouse_get_stateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::mouse_get_state >::value();
  }
  static const char* value(const ::webots_ros::mouse_get_stateRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::mouse_get_stateRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::mouse_get_state >::value();
  }
  static const char* value(const ::webots_ros::mouse_get_stateRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::mouse_get_stateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::mouse_get_state >::value();
  }
  static const char* value(const ::webots_ros::mouse_get_stateResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::mouse_get_stateResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::mouse_get_state >::value();
  }
  static const char* value(const ::webots_ros::mouse_get_stateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOUSE_GET_STATE_H
