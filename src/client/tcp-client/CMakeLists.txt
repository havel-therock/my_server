cmake_minimum_required(VERSION 3.25.1)

project(tcp-client)


set(HEADERS
    client.h
    )

set(SOURCES
    client.cpp
    )

add_library(${PROJECT_NAME}
    ${HEADERS}
    ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HCC_ROOT_DIR}/vendor/asio/asio/include/)
target_link_libraries(${PROJECT_NAME} PRIVATE asio)


