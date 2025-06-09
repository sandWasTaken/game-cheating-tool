cmake_minimum_required(VERSION 3.10)

project(game-cheating-tool)

set(CM__SET-NAME "game-cheating-tool")

set(SRC_S_DIR src)

include_directories(src)

add_executable(game src/main.cpp)
