cmake_minimum_required(VERSION 3.10)

project(game-cheating-tool)

set(SUR_SRC
    src/main.cpp
    src/gui.cpp
)

set(IMGUI_SRC
    vendor/imgui/imgui.cpp
    vendor/imgui/imgui_draw.cpp
    vendor/imgui/imgui_tables.cpp
    vendor/imgui/imgui_widgets.cpp
    vendor/imgui/imgui_impl_win32.cpp
    vendor/imgui/imgui_impl_dx11.cpp
)

Include_directories(
    src
    vendor/imgui
)

add_executable(game
    ${SUR_SRC}
    ${IMGUI_SRC}
)
