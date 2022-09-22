project(task_3)

cmake_minimum_required (VERSION 3.8)

add_library (binary STATIC binary.cpp)

add_executable(main main.cpp)

target_link_libraries(main binary)