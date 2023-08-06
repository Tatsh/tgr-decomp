#include <string.h>

#include <control.h>
#include <process.h>

#include "decls.h"

static const char kClassName[] = "Player"; // idb
static const char kBrallyExe[] = "brally.exe";
static HINSTANCE gHInstance;
HWND oaHwnd;
IGraphBuilder *gGraphBuilder;
enum MACRO_PLAYBACK_STATE gPlaybackState;
OAEVENT gOAEvent;

#define APP_EXIT 0xE141
#define WS_UNKNOWN_E0000 0xE0000

static LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg <= WM_CHAR) {
        if (uMsg != WM_CHAR) {
            if (uMsg == WM_DESTROY) {
            quit:
                PostQuitMessage(0);
                return 0;
            }
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }
        if (wParam == WM_DEVMODECHANGE) {
            goto quit;
        }
        return 0;
    }
    if (uMsg == WM_SYSKEYDOWN) {
        return 0;
    }
    if (uMsg != WM_COMMAND) {
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    if (wParam != APP_EXIT) {
        return DefWindowProc(hwnd, WM_COMMAND, wParam, lParam);
    }
    PostQuitMessage(0);
    return 0;
}

static int RegisterMainWindowClass(HINSTANCE hInstance, HINSTANCE hPrevInstance) {
    WNDCLASS WndClass; // [esp+0h] [ebp-28h] BYREF
    if (!hPrevInstance) {
        WndClass.style = CS_HREDRAW | CS_VREDRAW;
        WndClass.lpfnWndProc = WindowProc;
        WndClass.cbClsExtra = 0;
        WndClass.cbWndExtra = 0;
        WndClass.hInstance = hInstance;
        WndClass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(0x80));
        WndClass.hCursor = LoadCursor(0, MAKEINTRESOURCE(IDC_ARROW));
        WndClass.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
        WndClass.lpszMenuName = MAKEINTRESOURCE(0x80);
        WndClass.lpszClassName = kClassName;
        RegisterClass(&WndClass);
    }
    return 1;
}

int WinMain(HINSTANCE hInstance,
            HINSTANCE hPrevInstance,
            __attribute__((unused)) LPSTR lpCmdLine,
            __attribute__((unused)) int nShowCmd) {
    IMediaControl *mediaControl;
    if (SUCCEEDED(CoInitialize(0)) && RegisterMainWindowClass(hInstance, hPrevInstance)) {
        oaHwnd = CreateWindowEx(WS_EX_LTRREADING,
                                kClassName,
                                "Player - Untitled",
                                WS_CAPTION | WS_UNKNOWN_E0000,
                                CW_USEDEFAULT,
                                CW_USEDEFAULT,
                                0,
                                0x41,
                                0,
                                0,
                                hInstance,
                                0);
        UpdateWindow(oaHwnd);
        if (SetInitialStates()) {
            RenderFileToWindow(oaHwnd, "brally.avi");
            if (IsPlaybackInitialized() && !IsPlaybackStateStopped2()) {
            event_loop:
                sub_401230();
                if (IsPlaybackStateFailed()) {
                    HandleIMediaEventComplete();
                }
                ReleaseIGraphBuilder();
                goto start_game;
            }
            if (VideoWindowPutMessageDrain((OAHWND)oaHwnd) && HandleIMediaEventFullscreenLost()) {
                PlayIfStopped(mediaControl);
                goto event_loop;
            }
        }
    start_game:
        ReleaseIGraphBuilder();
        CoUninitialize();
        _execl(kBrallyExe, kBrallyExe, 0);
    }
    return 0;
}
