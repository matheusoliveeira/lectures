cmake_minimum_required(VERSION 3.26)
project(lectures)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-static")

add_executable(echo echo/main.cpp echo/echo_application.cpp)
