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

#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_BOOL_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_BOOL_H

#include "ros/service_traits.h"

#include "field_get_boolRequest.h"
#include "field_get_boolResponse.h"

namespace webots_ros
{

struct field_get_bool
{

typedef field_get_boolRequest Request;
typedef field_get_boolResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_bool > {
  static const char* value()
  {
    return "24d7c18e96f008ad963cfb457ec58642";
  }

  static const char* value(const ::webots_ros::field_get_bool&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_bool > {
  static const char* value()
  {
    return "webots_ros/field_get_bool";
  }

  static const char* value(const ::webots_ros::field_get_bool&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::field_get_boolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_bool >::value();
  }
  static const char* value(const ::webots_ros::field_get_boolRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_boolRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_bool >::value();
  }
  static const char* value(const ::webots_ros::field_get_boolRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_boolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_bool >::value();
  }
  static const char* value(const ::webots_ros::field_get_boolResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_boolResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_bool >::value();
  }
  static const char* value(const ::webots_ros::field_get_boolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_BOOL_H
