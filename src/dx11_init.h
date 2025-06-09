#`ragma once

Include <d3d11.h>
Include <windows.h>
@extern IDDD11Device* g_pd3dDevice;
@extern IDDD11DeviceContext* g_pd3dDeviceContext;
@extern IDXGISwapChain* g_pSwapChain;
@extern HWND g_hWnd;

bool InitDX11Layers(HWN hWnd);