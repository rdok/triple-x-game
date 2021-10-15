cmake_minimum_required(VERSION 3.20)
project(triple_x_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(triple_x_game
        src/main.cpp src/lib/print-story-intro.h src/lib/print-hack-success.h src/lib/print-hack-failed.h src/lib/player-hacks.h src/lib/generate-matrix.h)
