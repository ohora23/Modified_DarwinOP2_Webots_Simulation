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

#ifndef WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H
#define WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H

#include "ros/service_traits.h"

#include "node_set_velocityRequest.h"
#include "node_set_velocityResponse.h"

namespace webots_ros
{

struct node_set_velocity
{

typedef node_set_velocityRequest Request;
typedef node_set_velocityResponse Response;
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
struct MD5Sum< ::webots_ros::node_set_velocity > {
  static const char* value()
  {
    return "bbe5d1dd420b6f268ed5aee8db339832";
  }

  static const char* value(const ::webots_ros::node_set_velocity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_set_velocity > {
  static const char* value()
  {
    return "webots_ros/node_set_velocity";
  }

  static const char* value(const ::webots_ros::node_set_velocity&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::node_set_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_set_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_set_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_set_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H
