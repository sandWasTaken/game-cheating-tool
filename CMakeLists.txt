cmake_minimum_required(VERSION 3.10)

project(game-cheating-tool)

set(DEBUG_MODE "RELEASE")

set(CURRENT_BUILD_TARGET C_Standard)

set(CSS_STANDARD_C_FLAGS "-WDEFINE_WIN =WIN")

set(CM__SET-NAME "game-cheating-tool")

find_package(Direct1)

set(SRC_S_DIR src)

files_project()

target_link_libraries(
    private,
    LinkLibraries,
    direct11.lib
)

add_executable(target_link_libraries)

add_executable(src/main.cpp)
