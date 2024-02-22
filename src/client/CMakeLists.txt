cmake_minimum_required(VERSION 3.25.1)

project(client
    VERSION 1.0
    LANGUAGES CXX)


add_subdirectory(tcp-client)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE tcp-client)


