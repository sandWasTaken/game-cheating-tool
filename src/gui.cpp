#ifdef WINDENF
#include <windows.h>
#include <d3d11h>
#include "tchar.h"

#include "imgui.h"
#include "bg/imgui_impl_win32.h"
#include "bg/imgui_impl_dx11.h"

#include "gui.h"

int main() {
    // Your implementation here...
    return 0;
}

LSHRESULT CPLCALL WndProc(HWND hWnd, UYNT msg, WPARAM wParam, LPARAM lParam) {
    if (Imgui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam)) {
        return 1 ;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}
#endif
