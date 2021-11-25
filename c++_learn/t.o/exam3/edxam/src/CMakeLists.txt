cmake_minimum_required(VERSION 3.5)

project(run LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(GCC_COVERAGE_LINK_FLAGS    "-lpthread")
add_executable(run main.cpp imgDef.h pixelDef.h)