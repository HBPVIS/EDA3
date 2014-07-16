#ifndef _controlEvent_h_
#define _controlEvent_h_

#include <types.h>
#include <vector>

namespace boring 
{

enum ControlEvents
{
    NO_OPERATION,
    REGISTER_CLIENT,
    REGISTER_EVENTS,
    REGISTER_USER = 65536
};

class ControlEvent
{
  ControlEvent()
      : uuid_( -1 ),
        eventId_( NO_OPERATION ),
        ack_( false )
  {}
   
  ~ControlEvent()
  {}

  uint32_t uuid() const { return UUID_; }

  uint32_t eventId() const { return eventId_; }

  bool ack() const { return ack_; }

  std::vector<int8_t> & data() { return data_; }

 private:

  //! Unique ID 
  uint32_t uuid_;
  
  //! Event ID
  uint32_t eventId_;

  //! Specifies if the event requires ACK message
  bool ack_;

  //! Message data
  std::vector<int8_t> data_;

};

static ControlEvent EMPTY_EVENT;

}

#endif // _controlEvent_h_
