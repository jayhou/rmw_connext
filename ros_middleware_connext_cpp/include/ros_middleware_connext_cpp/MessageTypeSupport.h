
#ifndef __ros_middleware_connext_cpp__MessageTypeSupport__h__
#define __ros_middleware_connext_cpp__MessageTypeSupport__h__

class DDSDomainParticipant;
class DDSDataWriter;

namespace ros_middleware_interface
{

extern const char * _rti_connext_identifier;

}

namespace ros_middleware_connext_cpp
{

typedef struct MessageTypeSupportCallbacks {
  const char * _package_name;
  const char * _message_name;
  void (*_register_type)(DDSDomainParticipant * participant, const char * type_name);
  void (*_publish)(DDSDataWriter * topic_writer, const void * ros_message);
} MessageTypeSupportCallbacks;

}  // namespace ros_middleware_connext_cpp

#endif  // __ros_middleware_connext_cpp__MessageTypeSupport__h__