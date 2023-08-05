#include <stdbool.h>
#include <string.h>

#include <control.h>
#include <process.h>
#include <windows.h>

#include "decls.h"

static char ClassName[6]; // idb
static char kBrallyExe[] = "brally.exe";
static const char kBrallyAvi[] = "brally.avi";
static char aUntitled[12] = " - Untitled"; // weak
static HINSTANCE gHInstance;
HWND oaHwnd;
IGraphBuilder *gGraphBuilder;
enum MACRO_PLAYBACK_STATE gPlaybackState;
OAEVENT gOAEvent;

#define APP_EXIT 0xE141
#define WS_UNKNOWN_E0000 0xE0000

static bool SetupClassNameCOM() {
    strcpy(ClassName, "Player");
    return CoInitialize(0) >= 0;
}

static LRESULT QuitIfAppExitParam(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    if (wParam != APP_EXIT)
        return DefWindowProcA(hWnd, WM_COMMAND, wParam, lParam);
    PostQuitMessage(0);
    return 0;
}

//----- (00401030) --------------------------------------------------------
static LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg <= WM_CHAR) {
        if (uMsg != WM_CHAR) {
            if (uMsg == WM_DESTROY) {
            LABEL_4:
                PostQuitMessage(0);
                return 0;
            }
            return DefWindowProcA(hwnd, uMsg, wParam, lParam);
        }
        if (wParam == WM_DEVMODECHANGE)
            goto LABEL_4;
        return 0;
    }
    if (uMsg == WM_SYSKEYDOWN)
        return 0;
    if (uMsg != WM_COMMAND)
        return DefWindowProcA(hwnd, uMsg, wParam, lParam);
    return QuitIfAppExitParam(hwnd, wParam, lParam);
}

static int RegisterMainWindowClass(HINSTANCE hInstance, HINSTANCE hPrevInstance) {
    WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

    gHInstance = hInstance;
    if (!hPrevInstance) {
        WndClass.style = CS_HREDRAW | CS_VREDRAW;
        WndClass.lpfnWndProc = WindowProc;
        WndClass.cbClsExtra = 0;
        WndClass.cbWndExtra = 0;
        WndClass.hInstance = hInstance;
        WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x80);
        WndClass.hCursor = LoadCursorA(0, (LPCSTR)IDC_ARROW);
        WndClass.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
        WndClass.lpszMenuName = (LPCSTR)0x80;
        WndClass.lpszClassName = ClassName;
        RegisterClassA(&WndClass);
    }
    return 1;
}

static int CreateMainWindow() {
    char WindowName[32]; // [esp+Ch] [ebp-20h] BYREF
    strcpy(WindowName, "Player");
    strcat(WindowName, aUntitled);
    oaHwnd = CreateWindowExA(WS_EX_LTRREADING,
                             ClassName,
                             WindowName,
                             WS_CAPTION | WS_UNKNOWN_E0000,
                             CW_USEDEFAULT,
                             CW_USEDEFAULT,
                             0,
                             0x41,
                             0,
                             0,
                             gHInstance,
                             0);
    UpdateWindow(oaHwnd);
    return 1;
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
    IMediaControl *mediaControl;
    int result;
    (void)lpCmdLine;
    (void)nShowCmd;
    result = SetupClassNameCOM();
    if (result) {
        if (RegisterMainWindowClass(hInstance, hPrevInstance)) {
            if (CreateMainWindow()) {
                if (SetInitialStates()) {
                    RenderFileToWindow(oaHwnd, kBrallyAvi);
                    if (IsPlaybackInitialized()) {
                        if (!IsPlaybackStateStopped2()) {
                        LABEL_10:
                            sub_401230();
                            if (IsPlaybackStateFailed())
                                HandleIMediaEventComplete();
                            ReleaseIGraphBuilder();
                            goto LABEL_14;
                        }
                        if (VideoWindowPutMessageDrain((OAHWND)oaHwnd) &&
                            HandleIMediaEventFullscreenLost()) {
                            PlayIfStopped(mediaControl);
                            goto LABEL_10;
                        }
                    }
                }
            }
        }
    LABEL_14:
        ReleaseIGraphBuilder();
        CoUninitialize();
        _execl(kBrallyExe, kBrallyExe, 0);
        result = 0;
    }
    return result;
}
