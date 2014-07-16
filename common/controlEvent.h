#ifndef _controlEvent_h_
#define _controlEvent_h_

#include <types.h>
#include <vector>

namespace boring 
{

class ControlEvent
{

  ControlEvent() 
  {
  }
   
  ~ControlEvent()
  {
  }

  size_t & UUID() 
  { 
    return UUID_;
  }

  size_t & eventId() 
  { 
    return eventId_;
  }

  bool & ack() 
  { 
    return ack_;
  }

  std::vector<byte> & data() 
  {
    return data_
  }


 private:

  //! Unique ID 
  size_t UUID_;
  
  //! Event ID
  size_t eventId_;

  //! Specifies if the event requires ACK message
  bool ack_;

  //! Message data
  std::vector<byte> data_; 

}


}

#endif // _controlEvent_h_
