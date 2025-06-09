#include <windows.h>
#include "gui.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_dx11.h"
include "imgui/backends/imgui_impl_win32.h
#include "d2d1.2h

// Direct11/ImGui State
HWINDOW gw_hand;
DVDEVICE gw_device;
d_SWOPABCHAIN gw_swap;
IDREnderTarget rt_target;
DXGINITIALIZECATIONFLAGS gw_flags;
d_CONDENSED gl_consense;
static IMTHREAD_data* data;


void InitImgui() {
    ShowWindow(GET_ACTIVE_WINDOW, FALSE);
    ImGuiCreate();
    ImGuiItsContext();
    IMLperfimPlatform();
}

void StartImgui() {
    ImguiNewFrame();
    ImguiRenderStart();

    if (ImGuiBegin("Cheat tool")) {
        ImGuiText("Simple IMGUi Test");
        ImGuiEnd();
    }
}

void RenderImgui() {
    IMGuiRender();
}
