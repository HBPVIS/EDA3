


#ifndef _controlevent_h_
#define _controlevent_h_


namespace boring 
{

class ControlEvent
{


  ControlEVent() 
  {
  }
   
  ~ControlEvent()
  {
  }

  size_t & UUID() 
  { 
    return _UUID;
  }

  size_t & eventId() 
  { 
    return _eventId;
  }

  bool & ack() 
  { 
    return _ack;
  }




 private:

  //! Unique ID 
  size_t UUID_;
  
  //! Event ID
  size_t eventId_;

  //! Specifies if the event requires ACK message
  bool ack_;

  //! Message data
  char *data_;

}


}

#endif // _controlevent_h_
