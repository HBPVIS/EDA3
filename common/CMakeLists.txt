
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(commonLib SHARED clientProxy.cpp connection.cpp)
