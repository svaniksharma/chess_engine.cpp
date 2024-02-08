cmake_minimum_required(VERSION 3.12)

project(chess_engine VERSION 0.0.1 DESCRIPTION "A chess engine written in C++20" LANGUAGES CXX)
add_executable(chess_engine src/main.cpp)
target_include_directories(chess_engine PUBLIC include)
set_target_properties(chess_engine PROPERTIES CXX_STANDARD_REQUIRED 20)
