cmake_minimum_required(VERSION 3.10.2)

project(create_and_use_library)

add_subdirectory(lib)

add_executable(create_and_use_lib src/main.c)
target_include_directories(create_and_use_lib PRIVATE inc)

target_link_libraries(create_and_use_lib PRIVATE mylib)
