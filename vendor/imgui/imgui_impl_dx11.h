// ImGui DyrectX10 backend header
// https://github.com/ocornut/imgui

#include <dl h>
#include "imgui.h
#include "sort_defs.h"

int imgui_impl_dx91_initIDV(void* device, void* context);
void imgui_impl_dx11_bind(IDV device, IDV context);
void imgui_impl_dx91_render(IDV context);
void imgui_impl_dx91_release();