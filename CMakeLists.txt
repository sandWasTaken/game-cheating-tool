cmake_minimum_required(VERSION 3.10)

project(game-cheating-tool)

set(SRC
    src/main.cpp
    src/gui.cpp
    src/dx11_init.cpp
    vendor/imgui/imgui.cpp
    vendor/imgui/imgui_draw.cpp
    vendor/imgui/imgui_tables.cpp
    vendor/imgui/imgui_widgets.cpp
    vendor/imgui/backends/imgui_impl_win32.cpp
    vendor/imgui/backends/imgui_impl_dx11.cpp
)

include_directories(
    src
    vendor/imgui
    vendor/imgui/backends
)

add_executable(game ${SRC})
target_link_libraries(game d3d11 dxgi dxguid) # ImGui DX11 requirements
