
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

<<<<<<< Updated upstream
add_library(commonLib SHARED application.cpp application.h clientProxy.cpp clientProxy.h connection.cpp connection.h client.cpp client.h controlEvent.h eventTransmitter types.h zeromqConnection.h serializer.h)
=======
add_library(commonLib SHARED application.cpp client.cpp clientProxy.cpp connection.cpp)
>>>>>>> Stashed changes
