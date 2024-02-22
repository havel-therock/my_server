cmake_minimum_required(VERSION 3.25.1)


project(server-core)

set(HEADERS
    server.h
    )

set(SOURCES
    server.cpp
    )

add_library(${PROJECT_NAME} ${HEADERS} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE ${HCC_ROOT_DIR}/vendor/asio/asio/include/)
target_link_libraries(${PROJECT_NAME} PRIVATE asio)

