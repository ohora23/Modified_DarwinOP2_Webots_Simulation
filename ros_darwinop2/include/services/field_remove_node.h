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

#ifndef WEBOTS_ROS_MESSAGE_FIELD_REMOVE_NODE_H
#define WEBOTS_ROS_MESSAGE_FIELD_REMOVE_NODE_H

#include "ros/service_traits.h"

#include "field_remove_nodeRequest.h"
#include "field_remove_nodeResponse.h"

namespace webots_ros
{

struct field_remove_node
{

typedef field_remove_nodeRequest Request;
typedef field_remove_nodeResponse Response;
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
struct MD5Sum< ::webots_ros::field_remove_node > {
  static const char* value()
  {
    return "0a2fec1b08c5be36310a1f9e7c2e36de";
  }

  static const char* value(const ::webots_ros::field_remove_node&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_remove_node > {
  static const char* value()
  {
    return "webots_ros/field_remove_node";
  }

  static const char* value(const ::webots_ros::field_remove_node&) { return value(); }
};

template<>
struct MD5Sum< ::webots_ros::field_remove_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_remove_node >::value();
  }
  static const char* value(const ::webots_ros::field_remove_nodeRequest&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_remove_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_remove_node >::value();
  }
  static const char* value(const ::webots_ros::field_remove_nodeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_remove_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_remove_node >::value();
  }
  static const char* value(const ::webots_ros::field_remove_nodeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_remove_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_remove_node >::value();
  }
  static const char* value(const ::webots_ros::field_remove_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_REMOVE_NODE_H
