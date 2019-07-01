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

#ifndef WEBOTS_ROS_MESSAGE_CAMERA_GET_INFORESPONSE_H
#define WEBOTS_ROS_MESSAGE_CAMERA_GET_INFORESPONSE_H

#include <string>
#include <vector>
#include <map>

#include "ros/types.h"
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"



namespace webots_ros
{
template <class ContainerAllocator>
struct camera_get_infoResponse_
{
  typedef camera_get_infoResponse_<ContainerAllocator> Type;

  camera_get_infoResponse_()
    : width(0)
    , height(0)
    , Fov(0.0)
    , nearRange(0.0)  {
    }
  camera_get_infoResponse_(const ContainerAllocator& _alloc)
    : width(0)
    , height(0)
    , Fov(0.0)
    , nearRange(0.0)  {
    }

   typedef uint32_t  _width_type;
  _width_type width;

   typedef uint32_t  _height_type;
  _height_type height;

   typedef double  _Fov_type;
  _Fov_type Fov;

   typedef double  _nearRange_type;
  _nearRange_type nearRange;



  typedef boost::shared_ptr< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::camera_get_infoResponse_<std::allocator<void> > camera_get_infoResponse;

typedef boost::shared_ptr< ::webots_ros::camera_get_infoResponse > camera_get_infoResponsePtr;
typedef boost::shared_ptr< ::webots_ros::camera_get_infoResponse const> camera_get_infoResponseConstPtr;

// constants requiring out of line definition

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::camera_get_infoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{

// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros': ['/home/simon/my_Webots_Projects/controllers/ros_controller/catkin_ws/src/webots_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> const>
  : FalseType
  { };

template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "27c62b916852ab73ab27a40703fb9ea5";
  }

  static const char* value(const ::webots_ros::camera_get_infoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/camera_get_infoResponse";
  }

  static const char* value(const ::webots_ros::camera_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 width\n\
uint32 height\n\
float64 Fov\n\
float64 nearRange\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::camera_get_infoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.width);
      stream.next(m.height);
      stream.next(m.Fov);
      stream.next(m.nearRange);

    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  };

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::camera_get_infoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::camera_get_infoResponse_<ContainerAllocator>& v)
  {
        s << indent << "width: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.height);
    s << indent << "Fov: ";
    Printer<double>::stream(s, indent + "  ", v.Fov);
    s << indent << "nearRange: ";
    Printer<double>::stream(s, indent + "  ", v.nearRange);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CAMERA_GET_INFORESPONSE_H
