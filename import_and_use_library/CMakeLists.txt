cmake_minimum_required(VERSION 3.10.2)

project(import_use_lib)

add_library(lib_sdk INTERFACE)
target_include_directories(lib_sdk INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib/inc)
target_link_libraries(lib_sdk INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/lib/libmylib.a)

add_executable(import_and_use_lib main.c)
target_link_libraries(import_and_use_lib PRIVATE lib_sdk)