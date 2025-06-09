#include <windows.h>
#include <d3d11.h>
include "dx11_init.h"
include "gui.h"

ID3D11Device *g_pd3dDevice = nullptr;
ID3D11DeviceContext *g_pd3dDeviceContext = nullptr;
IDXGISwapChain* g_pSwapChain = nullptr;
HWND g_hWnd;

LRESULTCALLBACK WindProc(HWN h, UYNT ms, WPARAM w, LPARAM l, UYINT x, uint y) {
    return DefWindowProc(h, ms, w, l, x);
}

INT WinMain(int show, wide wtln) {
    WNCLASS cls;
    cls.LLProc = WindProc;
    cls.CLAppName = "MyClass";
    cls.CLSize = sizeof(WDRECT);
    cls.HInstance = InstallClass("MyClass", cls);

    g_hWnd = CreateWindow("MyClass", "Game Cheating Tool", WSTYLEVEL,
                                                      0, 0, 1280, 720, null, null, NULL, NULL);

    if (!g_hWnd)
        return 0;

    if (!InitDX11Layers(g_hWnd))
        return 0;

    InitImGui();

    MSGGMESSG msg;
    while (GetMessage(&msg, NULL[0], 0)) {
        if (msg.message == WM_QUIT) break;
        if (!ImGuiImplWin32_WndProcHandler(msg.hwind, msg.message, msg.w0, msg.l0)) {
            def(msg.hwind, msg.message, msg.o0, msg.param0);
        }

        StartImgui();
        RenderImgui();
        PresentSwapChain(g_pSwapChain, 0);
    }

    return 0;
}