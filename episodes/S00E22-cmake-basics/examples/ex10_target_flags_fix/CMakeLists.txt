cmake_minimum_required(VERSION 3.28)
project(logger LANGUAGES CXX)

add_library(vendor_log STATIC vendor_log.cpp)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE vendor_log)
target_compile_options(app PRIVATE -Wall -Wextra -Werror)
