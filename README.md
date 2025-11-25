# Switch Hello World (C++)

This project is a minimal **Nintendo Switch Homebrew Hello-World demo in C++**, set up to work with **Visual Studio Code** and the **devkitPro / libnx toolchain**.  
Testet with the following Environment:
- **Visual Studio Code:** v1.106.2
- **devkitProUpdater:** v3.0.3

It serves as a reference for creating a working project with VS Code IntelliSense configured for Switch development.

---

## Prerequisites

- Windows
- **devkitPro** installed at `C:\devkitPro`
- Switch Development components (can be choosed when installing devkitPro via devkitProUpdater) 
- Visual Studio Code

---

## Project Structure

```
HELLO_WORLD
│   Makefile
│   README.md
│
+---.vscode
│       c_cpp_properties.json
│       settings.json
│
\---source
        main.cpp
```

- `Makefile` – build script for the Switch toolchain (copied from devkitPro examples)  
- `source/main.cpp` – C++ Hello-World example  
- `.vscode/` – VS Code configuration files for IntelliSense and build tasks  

---

## Build Instructions

1. Open the project root in **Visual Studio Code**.
2. Press CTRL + SHIFT + B
3. Select: **Build Switch Homebrew**

This will generate the following files in the project root:

- `HELLO_WORLD.elf` – ELF executable (debug/for further processing)  
- `HELLO_WORLD.nro` – homebrew file to run on the Switch  
- `HELLO_WORLD.nacp` – metadata file for the NRO  

---

## Running on the Switch

1. Copy the generated `.nro` file to your Switch homebrew folder on the SD card.  
2. Launch via **HBMenu**.  
3. You should see "Hello World from C++!" printed on the console.
4. Press + to exit from the App

---

## Notes

- The project is configured for **C++**, using `main.cpp`.  
- The Makefile automatically detects C++ files and links with `aarch64-none-elf-g++`.  
- VS Code IntelliSense works out of the box with `.vscode/c_cpp_properties.json` if devkitPro is installed in `C:\devkitPro`.

---

## References

- [devkitPro installer](https://github.com/devkitPro/installer/releases)  
- [Switch Homebrew Development Examples](https://github.com/switchbrew/switch-examples)

