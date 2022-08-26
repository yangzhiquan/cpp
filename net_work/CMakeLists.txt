cmake_minimum_required(VERSION 3.0)

project(MYDemo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

add_executable(app main.cpp)