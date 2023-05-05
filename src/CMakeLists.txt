cmake_minimum_required(VERSION 3.0.0)

add_executable(27_2_shapes main.cpp ${MY_INCLUDE_DIR}/shapes.h shapes.cpp)

target_include_directories(27_2_shapes PUBLIC ${MY_INCLUDE_DIR})