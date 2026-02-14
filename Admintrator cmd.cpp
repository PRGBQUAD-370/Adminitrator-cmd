#include <windows.h>
#include <shellapi.h>

#pragma comment(lib, "shell32.lib")

int WINAPI WinMain(
    HINSTANCE,
    HINSTANCE,
    LPSTR,
    int
) {
    ShellExecuteA(
        NULL,
        "runas",
        "cmd.exe",
        NULL,
        NULL,
        SW_SHOW
    );
    return 0;
}
