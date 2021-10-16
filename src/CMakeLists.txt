cmake_minimum_required(VERSION 3.20)
project(triple_x_game)

set(CMAKE_CXX_STANDARD 14)

add_executable(triple_x_game
        main.cpp lib/print-story-intro.h lib/print-hack-success.h lib/print-hack-failed.h lib/player-hacks.h lib/generate-matrix.h)
