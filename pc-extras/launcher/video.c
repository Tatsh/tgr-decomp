#include <dshow.h>

#include "decls.h"

int VideoWindowPutMessageDrain(OAHWND oaHwnd2) {
    IVideoWindow *vw;
    int result;
    if (gGraphBuilder->lpVtbl->QueryInterface(gGraphBuilder, &IID_IVideoWindow, (void **)&vw) < 0)
        return 0;
    if (vw->lpVtbl->put_MessageDrain(vw, oaHwnd2) >= 0) {
        vw->lpVtbl->Release(vw);
        result = 1;
    } else {
        vw->lpVtbl->Release(vw);
        result = 0;
    }
    return result;
}

HRESULT __stdcall PlayIfStopped(IMediaControl *mediaControl) {
    HRESULT hr;     // eax
    HRESULT runRet; // esi
    hr = IsPlaybackStateStopped2();
    if (hr) {
        hr = gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl);
        if (hr >= 0) {
            runRet = mediaControl->lpVtbl->Run(mediaControl);
            hr = (HRESULT)mediaControl->lpVtbl->Release(mediaControl);
            if (runRet >= 0)
                hr = SetPlaybackState(PLAYBACK_STATE_FAILED);
        }
    }
    return hr;
}

char Buffer[264];
char Destination[511];
static char kDash[4] = " - "; // weak

static bool SetWindowTitleBarText(HWND hWnd, char *name) {
    char str[532];
    strcpy(str, "Player");
    strcat(str, kDash);
    strcat(str, name);
    return SetWindowTextA(hWnd, str);
}

static HRESULT RenderFile(LPCCH lpMultiByteStr) {
    HRESULT hr;      // eax
    HCURSOR hCursor; // eax
    HRESULT renderFileRet;
    HCURSOR hCursor_1;
    WCHAR wcStr[260];
    ReleaseIGraphBuilder();
    hr = SetupGlobalOAEvent();
    if (hr) {
        MultiByteToWideChar(0, 0, lpMultiByteStr, -1, wcStr, 260);
        hCursor = LoadCursorA(0, (LPCSTR)IDC_WAIT);
        SetCursor(hCursor);
        renderFileRet = gGraphBuilder->lpVtbl->RenderFile(gGraphBuilder, wcStr, 0);
        hCursor_1 = LoadCursorA(0, (LPCSTR)IDC_ARROW);
        SetCursor(hCursor_1);
        hr = renderFileRet >= 0;
    }
    return hr;
}

void __cdecl RenderFileToWindow(HWND hWnd, LPCSTR lpFileName) {
    LPCSTR lpFileName_1; // esi

    lpFileName_1 = lpFileName;
    if (lpFileName) {
        if (RenderFile(lpFileName)) {
            GetFullPathNameA(lpFileName_1, MAX_PATH, Buffer, (LPSTR *)&lpFileName);
            strncpy(Destination, lpFileName, 0x200u);
            gPlaybackState = PLAYBACK_STATE_INIT;
            SetWindowTitleBarText(hWnd, Destination);
            SetPlaybackState(PLAYBACK_STATE_STOPPED);
        }
    }
}
