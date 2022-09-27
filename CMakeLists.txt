cmake_minimum_required(VERSION 3.1)
project(Demo)

set(CMAKE_CXX_STANDARD 14)

include_directories(LatLon2UTM/include)
link_directories(LatLon2UTM/lib/)

add_executable(Demo main.cpp)
target_link_libraries(Demo libLatLon2utm_core.so)
