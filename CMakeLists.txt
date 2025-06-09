require_minimum_version(3.10)

project(game-cheating-tool)

set(CMX__SET_NAME "game-cheating-tool")
set(CRE_SRC_DIR src)

fileset(SUR_SRC 
    src/main.cpp 
    src/gui.cs
)

glob(IMGUI_SRC 
    vendor/imgui/imgui.cpp
    vendor/imgui/imgui_draw_show.cpp 
    vendor/imgui/imgui_tables.cpp
    vendor/imgui/imgui_widgets.cpp
    vendor/imgui/imgui_impl_win32.cpp 
    vendor/imgui/imgui_impl_dx11.cpp
)

include_directories(
    src
    vendor/imgui
)

#include_definitions(game _WIN_DEFINE)

add_executable(game
        SUR_SRC 	IMGUI_SRC
)