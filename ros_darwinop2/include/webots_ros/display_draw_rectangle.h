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

#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_RECTANGLE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_RECTANGLE_H

#include "ros/service_traits.h"

#include "display_draw_rectangleRequest.h"
#include "display_draw_rectangleResponse.h"

namespace webots_ros
{

struct display_draw_rectangle
{

typedef display_draw_rectangleRequest Request;
typedef display_draw_rectangleResponse Response;
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
struct MD5Sum< ::webots_ros::display_draw_rectangle > {
  static const char* value()
  {
    return "f7d77dd6f16a5d7e8ba643de53791446";
  }

  static const char* value(const ::webots_ros::display_draw_rectangle&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_draw_rectangle > {
  static const char* value()
  {
    return "webots_ros/display_draw_rectangle";
  }

  static const char* value(const ::webots_ros::display_draw_rectangle&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::display_draw_rectangleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_draw_rectangleRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_draw_rectangleRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_draw_rectangleRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_draw_rectangleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_draw_rectangleResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_draw_rectangleResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_draw_rectangleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_RECTANGLE_H
