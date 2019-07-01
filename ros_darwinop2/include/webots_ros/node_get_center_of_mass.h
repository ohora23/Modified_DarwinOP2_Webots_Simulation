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

#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H

#include "ros/service_traits.h"

#include "node_get_center_of_massRequest.h"
#include "node_get_center_of_massResponse.h"

namespace webots_ros
{

struct node_get_center_of_mass
{

typedef node_get_center_of_massRequest Request;
typedef node_get_center_of_massResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_center_of_mass > {
  static const char* value()
  {
    return "08baa9a118e7086ad4f02f73fae3dd80";
  }

  static const char* value(const ::webots_ros::node_get_center_of_mass&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_center_of_mass > {
  static const char* value()
  {
    return "webots_ros/node_get_center_of_mass";
  }

  static const char* value(const ::webots_ros::node_get_center_of_mass&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::node_get_center_of_massRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_center_of_massRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_center_of_massResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_center_of_massResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H
