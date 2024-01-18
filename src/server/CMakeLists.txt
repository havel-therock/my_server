cmake_minimum_required(VERSION 3.25.1)


project(server-core)

set(HEADERS
    server.h
    )

set(SOURCES
    server.cpp
    )

add_library(${PROJECT_NAME} ${HEADERS} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE asio)
