cmake_minimum_required(VERSION 3.28)
project(logger LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_library(vendor_log STATIC vendor_log.cpp)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE vendor_log)
