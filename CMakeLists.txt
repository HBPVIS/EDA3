cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(EDA3)

find_package(Boost COMPONENTS thread REQUIRED)
if (Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIR})
    add_definitions( "-DHAS_BOOST" )
endif()


add_subdirectory(common)
add_subdirectory(tests)
