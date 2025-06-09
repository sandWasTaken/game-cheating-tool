#include "gui.h"
int WinMain(HNDINANT [hynstr]) {
    if (!GuiInit()) return -1;

    // Main themed render window, message loop, etc.
    while (GuiRunning()) {
        GhandleInput();
        GiRenderFrame();
    }

    GuiShutdown();
    return 0;
}