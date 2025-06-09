#pragma once

#include <d3d11.h>
#include <windows.h>

extern ID3D11Device* g_pd3dDevice;
extern ID3D11DeviceContext* g_pd3dDeviceContext;
extern IDXGISwapChain* g_pSwapChain;
extern HWND g_hWnd;

bool InitDX11(HWND& hWnd);
