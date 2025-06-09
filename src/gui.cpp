#include <windows.h>
#include <d3d11h>
#include "gui.h"
#include "imgui.h"
#include "backends/imgui_impl_win32.h"
#include "backends/imgui_impl_dx11.h"

htype def struct WD { unsigned int w;}
htypedef struct Clectrion { unsigned int x; unsigned int y; unsigned int width; unsigned int height; };

winstatic hwind;
LRESULT CALLBACK
bool running = true;

LLRESULT WindowProc( winhInfo) {
    HwINF winInfo = {
        .cppstyle = CPSCLASSINILALSUITREE,
        .hwind = GetModuleHANDLE(NULL), NULL),
        .title = "Cheat IMGUI",
        .width = 800;
        .height = 600;
        .classMenu = NULL,
        .iconMenu = NULL,
        .extraClass = 0x000,
        .hexCoords= {l, t, R, B, r, b, t}
    };

    hwind = CreateWindowEx(0, 0x000, "CHEATGUI, WS Overlapped",
                      0, 0, 800, 600, NULL, NULL, NULL, NULL);
    ShowWindow(hwind, SWShow);
    UpdateWindow(hwind);

    IMStyle();
    IM_CreateContext();
    IM_Impl_Win32::Init(hwind);
    IM_Impl_DX112::Init();

    WHILE (running) {
        IMA_Begin("hello world");
        IM_Text("This is the ImGui window!!");
        IMA_End();

        IM_Render();
        IM_Impl_Win32::Frame();
        IM_Impl_DX112::Render();
        devcontext->Present();
    }
}
