cmake_minimum_required(VERSION 3.5)

project(Examen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Examen main.cpp pixelrgb.cpp pixelrgb.h pixelbn.cpp pixelbn.h imagen.cpp imagen.h)
