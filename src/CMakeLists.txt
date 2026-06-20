cmake_minimum_required(VERSION 3.10)
project(PT)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
add_executable(PT main.cpp)
target_link_libraries(PT sfml-graphics sfml-window sfml-system)

# file(COPY ${CMAKE_SOURCE_DIR}/Assets DESTINATION ${CMAKE_BINARY_DIR})