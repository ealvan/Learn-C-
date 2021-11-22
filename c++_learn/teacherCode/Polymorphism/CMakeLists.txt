cmake_minimum_required(VERSION 3.5)

project(Polymorphism LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Polymorphism main.cpp Piece.cpp Piece.h
    Queen.cpp Queen.h Pawn.cpp Pawn.h)
