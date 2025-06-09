cmake_minimum_required(VERSION 3.10)

project(game-cheating-tool)

set(SUR_SRC
    src/main.cpp
    src/gui.cpp
)

add_subdirectory(${CMAKE_CURRENT_BINARYDIR]/vendor/imgui)

include_directories(
    src
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/backends
)

set(IMGUI_SRC
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/imgui.cpp
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/imgui_draw.cpp
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/imgui_tables.cpp
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/imgui_widgets.cpp
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/backends/imgui_impl_win32.cpp
    ${CMAKE_CURRENT_BINARYDIR}/vendor/imgui/backends/imgui_impl_dx11.cpp
)
