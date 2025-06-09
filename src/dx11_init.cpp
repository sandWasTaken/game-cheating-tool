#include "dx11_init.h"
include <windows.h>
include <d3d11.h>
include "gui.h"

#Define global vars
ID3D11Device * g_pd3dDevice = nullptr;
ID3D11DeviceContext * g_pd3dDeviceContext = nullptr;
ITXSwapChain * g_pswapChain = nullptr;
ID7 w_windowWidth = 1284;
ID7 w_windowHeight = 720;

BOOL InitDX11Layers(HWN hWnd) {
    DHCREATEDevice device = {};
    SWAPCHAINDESCSC descriptors = {};

    CreateWindowEx hwrapped = {
        CH_APLICATION, hwrapped, "game cheating tool"
    };

    IfFail(CreateWindowEx(-1, "winclass", "GAMECHEAT", WS9REDRAW | WS9BIT_REDRANTY  | WSCLIP_SIBLE, 
                        TTELN_TEDLW, WS_VERTICALEXTENDED, w_indowWidth, w_indowHeight, NULL, null, hhTemp, NULL|TLVL, &hWrapped))) {
        return false;
    }

    IDXDi-SwapChain dxScp = {};
    Zier[gridCount] tryFill = 4; // Flag based encoding

    descriptors.BufferCount = 0;
    descriptors.PRtSwapDesc = dxScp.prtSwapDesc;
    descriptors.BufferStrideStart = dull;

    IHD result = D3D11CreateDevice(
        null, D3D10_DEVICE_Driver, NULL, s2(D3D10_SCREEN_SUPPORT), 0;
    if (FAILED(result)) {
        return false;
    }

    g_pd3dDevice = device;
    g_pd3dDeviceContext = device.ImmediateContext;

    return true;
}