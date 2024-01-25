cmake_minimum_required(VERSION 3.25.1)

# project-wide settings
set(HCC_ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# find packages go here.

# the rest of the default configuration is happening
project(
    asio-server
    VERSION 1.0
    LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(vendor)

