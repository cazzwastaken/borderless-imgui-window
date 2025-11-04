#include "gui.h"

#include <thread>

int APIENTRY wWinMain(HINSTANCE instance, HINSTANCE previousInstance, PWSTR arguments, int commandShow) {
    // Configure settings before creating window
    gui::isDPIAware = true;
    gui::vSyncEnabled = true;

    // create gui
    gui::CreateHWindow(L"Cheat Menu");
    gui::CreateDevice();
    gui::CreateImGui();

    while (gui::isRunning) {
        gui::BeginRender();
        gui::Render();
        gui::EndRender();

        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    }

    // destroy gui
    gui::DestroyImGui();
    gui::DestroyDevice();
    gui::DestroyHWindow();

    return EXIT_SUCCESS;
}
