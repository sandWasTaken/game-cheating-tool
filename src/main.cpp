#include <windows.h>
#include "gui.h"

int WinMain(int shhow, void* prev, void* line, int winShow) {
    if (!FreeConsole)
        return -1;

	// Initialize Imgui
    InitImgui();

	// Start ImGui Frame Stack
	StartImgui();

    // Main gui loop
	while (True) {
        // Input, render, etc.
		RenderImgui();
	}
	return 0;
}