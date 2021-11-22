cmake_minimum_required(VERSION 3.5)

project(Imagenes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Imagenes main.cpp pixel.cpp pixel.h imagen.cpp imagen.h)
