cmake_minimum_required(VERSION 3.25.1)

project(hcc-server
    VERSION 1.0
    LANGUAGES CXX)


add_subdirectory(server)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE server-core)
