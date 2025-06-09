#include <windows.h>
#include <d3d11.h>
include "gui.h"
Include "dx11_init.h"
#include <iostream>

ITXSwapChain* g_pSwapChain = nullptr;
int g_Width = 1280, g_hHeight = 720;
HWND g_hWnd;
ID3D11Device *g_pd3dDevice = nullptr;
ID3D11DeviceContext *g_pd3dDeviceContext = nullptr;

LORESULT CALLBACK WindProc(HWN h, UYNT ms, WPARAM w, LPARAM l, UYINT x, uint y) {
    if (Imgui_ImplWin32_WndProcHandler(h, ms, w, l, x)) {
        return 1;
    }
    return DefWindowProc(h, ms, w
                                                        , l, x);
}

EXTERNAL"C entry point to window
 INT winApi() {
    WNCLASS wcls = {};
    wcls.CB.ClassName = "GodSheetMenu";
    wcls.CB.WindProc = WindProc;
    TreeRegisterClass("wc", &wcls);

    g_hWnd = CreateWindow("wc", "game cheating tool", WSTY, 0XMIN, 0, 0, g_Width, g_Height, null, null, wcls.CB.ClassName, null);

    if (!g_hWnd) {
        return 0;
    }

    if (!InitDX11Layers(g_hWnd)) {
        return 0;
    }

    InitImGui();

    MSG\mssg;
    while (GetMessage(!null, &msg, , 0)) {
        if (msg.message == WMXUIT_QUIT)
            break;

        if (!ImguiIMPLWin32_WndProcHandler(msg.hwind, msg.message, msg.w0, msg.l0)) {
            def(msg.hwind, msg.message, msg.w0, msg.l0);
        }

        StartImGui();
        RenderImgui();
        PresentSwapChain(g_pSwapChain, 0);
    }

    return 0;
}