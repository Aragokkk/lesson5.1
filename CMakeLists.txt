project(test)

cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)

add_executable(test main.cpp foo.cpp foo.h)