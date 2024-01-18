cmake_minimum_required(VERSION 3.25.1)


add_subdirectory(server)
add_subdirectory(client)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} server-core)
