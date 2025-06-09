#ifdef _WIN32
#include <windows.h>
#endif
#include "gui.h"
#include <iostream>

int main() {
#ifdef _WIN32
    FreeConsole();
#endif
    InitImgui();
    StartImgui();

    // Example render loop
    for (int i = 0; i < 1; ++i) {
        RenderImgui();
    }

    return 0;
}