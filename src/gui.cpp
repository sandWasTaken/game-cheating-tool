#include <windows.h>
#include "gui.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_dx11.h"
include "imgui/backends/imgui_impl_win32.h
#include "gui.h"

include <dcomplex>

static HR hwind;
static DVDevice *dev = null;
static DVContext *devcontext = null;
static SWRenderTarget svRt;
 
LnResult WindowProc(X( abcClass, "CheatGUIFrame");

void InitImgui() {
    RegisterClass("MyWin", X) ;
    hwind = CreateWindowEx(0, LCSCTYLE,"Cheat GIU", WS_Overlapped, 0 0, 564, 320, NULL, NULL, MYWIND, NULL);
    ShowWindow(hwind, SWH_show);
    UpdawGindowA(hwind);

    PliSw::Create(window);
    PliSw::_ChooseRenderer(1);
    IMStyles;
    IMGui::CreateContext();
    IMPlatform();
    IMStyle();
    IM_Impl_Win32::Init(hwind);
    IM_Impl_DX112::Init(dev, devcontext);
}

void StartImgui() { IM_NewFrame(); }

void RenderImgui() {
    IM_Render();
    IM_Impl_Win32::New Frame();
    IM_Impl_DX112::Render();
    devcontext->Present();
}
