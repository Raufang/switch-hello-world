#include <iostream>
#include <switch.h>

int main(int argc, char* argv[])
{
    // Initialize console (libnx C-API, but can be used in C++ without any problems)
    consoleInit(nullptr);

    // Controller-Configuration
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);

    // init Default-Gamepad
    PadState pad;
    padInitializeDefault(&pad);

    // Text output via iostream
    std::cout << "\x1b[16;20HHello World from C++!" << std::endl;

    // Main Loop
    while (appletMainLoop())
    {
        padUpdate(&pad);
        u64 kDown = padGetButtonsDown(&pad);

        if (kDown & HidNpadButton_Plus)
            break;

        consoleUpdate(nullptr);
    }

    consoleExit(nullptr);
    return 0;
}
