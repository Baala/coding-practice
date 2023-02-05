cmake_minimum_required(VERSION 3.25)

set( CMAKE_CXX_COMPILER g++)
set( CMAKE_C_COMPILER gcc)
project(RunningAverage)

add_executable(RunningAverage RunningAverage.cpp)