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

#ifndef WEBOTS_ROS_MESSAGE_GET_FLOATARRAY_H
#define WEBOTS_ROS_MESSAGE_GET_FLOATARRAY_H

#include "ros/service_traits.h"

#include "get_floatarrayRequest.h"
#include "get_floatarrayResponse.h"

namespace webots_ros
{

struct get_floatarray
{

typedef get_floatarrayRequest Request;
typedef get_floatarrayResponse Response;
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
struct MD5Sum< ::webots_ros::get_floatarray > {
  static const char* value()
  {
    return "5220e57a6c864c1d8d91996a17c8f805";
  }

  static const char* value(const ::webots_ros::get_floatarray&) { return value(); }
};

template<>
struct DataType< ::webots_ros::get_floatarray > {
  static const char* value()
  {
    return "webots_ros/get_floatarray";
  }

  static const char* value(const ::webots_ros::get_floatarray&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::get_floatarrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::get_floatarray >::value();
  }
  static const char* value(const ::webots_ros::get_floatarrayRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::get_floatarrayRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::get_floatarray >::value();
  }
  static const char* value(const ::webots_ros::get_floatarrayRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::get_floatarrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::get_floatarray >::value();
  }
  static const char* value(const ::webots_ros::get_floatarrayResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::get_floatarrayResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::get_floatarray >::value();
  }
  static const char* value(const ::webots_ros::get_floatarrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_GET_FLOATARRAY_H
