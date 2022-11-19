cmake_minimum_required(VERSION 3.23)
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)

add_executable(HelloWorld exercise2.4.cpp)
