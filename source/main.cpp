#include <iostream>
#include <switch.h>

int main(int argc, char* argv[])
{
    // Konsole initialisieren (libnx C-API, kann aber problemlos in C++ genutzt werden)
    consoleInit(nullptr);

    // Controller-Konfiguration
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);

    // Standard-Gamepad initialisieren
    PadState pad;
    padInitializeDefault(&pad);

    // Textausgabe per iostream
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
