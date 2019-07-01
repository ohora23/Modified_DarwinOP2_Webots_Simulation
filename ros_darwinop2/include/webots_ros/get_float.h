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

#ifndef WEBOTS_ROS_MESSAGE_GET_FLOAT_H
#define WEBOTS_ROS_MESSAGE_GET_FLOAT_H

#include "ros/service_traits.h"

#include "get_floatRequest.h"
#include "get_floatResponse.h"

namespace webots_ros
{

struct get_float
{

typedef get_floatRequest Request;
typedef get_floatResponse Response;
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
struct MD5Sum< ::webots_ros::get_float > {
  static const char* value()
  {
    return "896e758cc9f93e6fc99057486a02ac6a";
  }

  static const char* value(const ::webots_ros::get_float&) { return value(); }
};

template<>
struct DataType< ::webots_ros::get_float > {
  static const char* value()
  {
    return "webots_ros/get_float";
  }

  static const char* value(const ::webots_ros::get_float&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::get_floatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::get_float >::value();
  }
  static const char* value(const ::webots_ros::get_floatRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::get_floatRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::get_float >::value();
  }
  static const char* value(const ::webots_ros::get_floatRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::get_floatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::get_float >::value();
  }
  static const char* value(const ::webots_ros::get_floatResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::get_floatResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::get_float >::value();
  }
  static const char* value(const ::webots_ros::get_floatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_GET_FLOAT_H
