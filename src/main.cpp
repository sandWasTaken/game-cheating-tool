#ifdef _WIN32
#include <windows.h>
#include <d3d11.h>
#endif
#include "gui.h"
#include "dx11_init.h"
#include <iostream>

int main() {
    // Make sure window and device are setup before ImGui init
    if (!InitDX11(g_hWnd))
    {
        return -1;
    }

    InitImGui();
    StartImGui();

    for (int i = 0; i < 1; ++i) {
        RenderImGui();
    }

    return 0;
}
