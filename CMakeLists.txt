cmake_minimum_required(VERSION 3.0.0)
project(27_2_shapes VERSION 0.1.0)

add_executable(27_2_shapes main.cpp shapes.cpp shapes.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
