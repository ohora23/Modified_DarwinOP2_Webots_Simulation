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

// Generated by gencpp from file webots_ros/RecognitionObject.msg
// DO NOT EDIT!

#ifndef WEBOTS_ROS_MESSAGE_RECOGNITIONOBJECT_H
#define WEBOTS_ROS_MESSAGE_RECOGNITIONOBJECT_H

#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace webots_ros
{
template <class ContainerAllocator>
struct RecognitionObject_
{
  typedef RecognitionObject_<ContainerAllocator> Type;

  RecognitionObject_()
    : header()
    , position()
    , orientation()
    , position_on_image()
    , size_on_image()
    , number_of_colors(0)
    , colors()
    , model()  {
    }
  RecognitionObject_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position(_alloc)
    , orientation(_alloc)
    , position_on_image(_alloc)
    , size_on_image(_alloc)
    , number_of_colors(0)
    , colors(_alloc)
    , model(_alloc)  {
    }

   typedef ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _position_on_image_type;
  _position_on_image_type position_on_image;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _size_on_image_type;
  _size_on_image_type size_on_image;

   typedef int32_t  _number_of_colors_type;
  _number_of_colors_type number_of_colors;

   typedef std::vector< ::geometry_msgs::Vector3_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Vector3_<ContainerAllocator> >::other >  _colors_type;
  _colors_type colors;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >   _model_type;
  _model_type model;



  typedef boost::shared_ptr< ::webots_ros::RecognitionObject_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::RecognitionObject_<ContainerAllocator> const> ConstPtr;

}; // struct RecognitionObject_

typedef ::webots_ros::RecognitionObject_<std::allocator<void> > RecognitionObject;

typedef boost::shared_ptr< ::webots_ros::RecognitionObject > RecognitionObjectPtr;
typedef boost::shared_ptr< ::webots_ros::RecognitionObject const> RecognitionObjectConstPtr;

// constants requiring out of line definition

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::RecognitionObject_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::RecognitionObject_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::RecognitionObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::RecognitionObject_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::RecognitionObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::RecognitionObject_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::RecognitionObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::RecognitionObject_<ContainerAllocator> const>
  : FalseType
  { };

template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::RecognitionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5fbdb3fa12c730ad0890580a5b73ea91";
  }

  static const char* value(const ::webots_ros::RecognitionObject_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::RecognitionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/RecognitionObject";
  }

  static const char* value(const ::webots_ros::RecognitionObject_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::RecognitionObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
geometry_msgs/Vector3 position\n\
geometry_msgs/Quaternion orientation\n\
geometry_msgs/Vector3 position_on_image\n\
geometry_msgs/Vector3 size_on_image\n\
int32 number_of_colors\n\
geometry_msgs/Vector3[] colors\n\
string model\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::RecognitionObject_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::RecognitionObject_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.position_on_image);
      stream.next(m.size_on_image);
      stream.next(m.number_of_colors);
      stream.next(m.colors);
      stream.next(m.model);

    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecognitionObject_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::RecognitionObject_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::RecognitionObject_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "position_on_image: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.position_on_image);
    s << indent << "size_on_image: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.size_on_image);
    s << indent << "number_of_colors: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_colors);
    s << indent << "colors[]" << std::endl;
    for (size_t i = 0; i < v.colors.size(); ++i)
    {
    	s << indent << "  colors[" << i << "]: ";
    	s << std::endl;
    	s << indent;
    	Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "    ", v.colors[i]);
    }
    s << indent << "model: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECOGNITIONOBJECT_H
