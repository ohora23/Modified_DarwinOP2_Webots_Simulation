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

#ifndef WEBOTS_ROS_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H
#define WEBOTS_ROS_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H

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
struct speaker_is_sound_playingResponse_
{
  typedef speaker_is_sound_playingResponse_<ContainerAllocator> Type;

  speaker_is_sound_playingResponse_()
    : value(false)  {
    }
  speaker_is_sound_playingResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
    }

   typedef uint8_t  _value_type;
  _value_type value;



  typedef boost::shared_ptr< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::speaker_is_sound_playingResponse_<std::allocator<void> > speaker_is_sound_playingResponse;

typedef boost::shared_ptr< ::webots_ros::speaker_is_sound_playingResponse > speaker_is_sound_playingResponsePtr;
typedef boost::shared_ptr< ::webots_ros::speaker_is_sound_playingResponse const> speaker_is_sound_playingResponseConstPtr;

// constants requiring out of line definition

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : FalseType
  { };

template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e90e3a791904b68b561b7067a8d366b";
  }

  static const char* value(const ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/speaker_is_sound_playingResponse";
  }

  static const char* value(const ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.value);

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
struct Printer< ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::speaker_is_sound_playingResponse_<ContainerAllocator>& v)
  {
        s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H
