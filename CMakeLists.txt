cmake_minimum_required(VERSION 3.30)
project(chess)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        chess
        main.cpp
        src/Board.cpp
)
