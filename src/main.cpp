#include <windows.h>
#include "gui.h"

int main() {
    FreeConsole();
    InitImgui();
    StartImgui();

    while (true) {
        RenderImgui();
    }

    return 0;
}