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

#ifndef WEBOTS_ROS_MESSAGE_SET_STRING_H
#define WEBOTS_ROS_MESSAGE_SET_STRING_H

#include "ros/service_traits.h"

#include "set_stringRequest.h"
#include "set_stringResponse.h"

namespace webots_ros
{

struct set_string
{

typedef set_stringRequest Request;
typedef set_stringResponse Response;
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
struct MD5Sum< ::webots_ros::set_string > {
  static const char* value()
  {
    return "0462bc0e878964615c49ad8ef45df667";
  }

  static const char* value(const ::webots_ros::set_string&) { return value(); }
};

template<>
struct DataType< ::webots_ros::set_string > {
  static const char* value()
  {
    return "webots_ros/set_string";
  }

  static const char* value(const ::webots_ros::set_string&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::set_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::set_string >::value();
  }
  static const char* value(const ::webots_ros::set_stringRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::set_stringRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::set_string >::value();
  }
  static const char* value(const ::webots_ros::set_stringRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::set_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::set_string >::value();
  }
  static const char* value(const ::webots_ros::set_stringResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::set_stringResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::set_string >::value();
  }
  static const char* value(const ::webots_ros::set_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SET_STRING_H
