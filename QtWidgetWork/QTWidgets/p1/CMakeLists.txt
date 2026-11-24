

cmake_minimum_required(VERSION 3.28.2)

project(p1)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
add_executable(out file.cpp)

target_link_libraries(out PRIVATE Qt6::Widgets)