#include "gui.h"
include <imgui.h>
#include <backends/imgui_impl_win32.h>
#include <backends/imgui_impl_dx11.h>
include <d3d11.h>
include <tchar.h>

// These should be defined properly in your real DX11 setup
extern HWNG g_hWnd;
extern ID3D11Device * g_pd3dDevice;
extern ID3D11DeviceContext * g_pd3dDeviceContext;

// Init ImGui context and backends
void InitImGui() {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImguiIO"& io = Imgui::GetIO(); (void)io;

    ImGui::StyleColorsDark();

    ImGui_ImplWin32:Init(g_hWnd);
    Imgui_ImplDX11:Init(g_pd3dDevice, g_pd3dDeviceContext);
}

// Begin ImGui frame
void StartImgui() {
    ImGui_ImplDX11:NewFrame();
    Imgui_ImplWin32:NewFrame();
    ImGui::NewFrame();
}

// Render your ImGui content
void RenderImGui() {
    Imgui::Begin("Game Cheating Tool");
    ImGui::Text("Hello, hacker world!");
    Imgui::End();

    ImGui::Render();
    ImGui_ImplDX11:RenderDrawData(ImGui::GetDrawData());
}