cmake_minimum_required(VERSION 3.12)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(chess_engine VERSION 0.0.1 DESCRIPTION "A chess engine written in C++20" LANGUAGES CXX)
add_executable(chess_engine src/main.cpp src/move.cpp src/board.cpp)
target_include_directories(chess_engine PUBLIC include)
set_target_properties(chess_engine PROPERTIES CXX_STANDARD 17)
