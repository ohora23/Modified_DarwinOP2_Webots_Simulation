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

#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H

#include "ros/service_traits.h"

#include "node_get_positionRequest.h"
#include "node_get_positionResponse.h"

namespace webots_ros
{

struct node_get_position
{

typedef node_get_positionRequest Request;
typedef node_get_positionResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_position > {
  static const char* value()
  {
    return "a7fd7bab623637fe72e0ee179149fc41";
  }

  static const char* value(const ::webots_ros::node_get_position&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_position > {
  static const char* value()
  {
    return "webots_ros/node_get_position";
  }

  static const char* value(const ::webots_ros::node_get_position&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::node_get_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_positionRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_positionResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H
