cmake_minimum_required (VERSION 3.28.3)

project(QTWidgets)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
add_executable(out p1.cpp )

target_link_libraries(out PRIVATE Qt6::Widgets)