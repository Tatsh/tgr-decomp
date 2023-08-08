#include "decls.h"

int VideoWindowPutMessageDrain(HWND hwnd) {
    IVideoWindow *vw;
    if (FAILED(gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IVideoWindow, (void **)&vw))) {
        return 0;
    }
    if (SUCCEEDED(vw->lpVtbl->put_MessageDrain(vw, (OAHWND)hwnd))) {
        MessageBox(hwnd, "put_MessageDrain ok", "not error", MB_OK);
        vw->lpVtbl->Release(vw);
        return 1;
    }
    vw->lpVtbl->Release(vw);
    return 0;
}

HRESULT PlayIfStopped(IMediaControl *mediaControl) {
    if (IsPlaybackStateStopped2() &&
        SUCCEEDED(gGraphBuilder->lpVtbl->QueryInterface(
            gGraphBuilder, &IID_IMediaControl, (void **)&mediaControl)) &&
        SUCCEEDED(mediaControl->lpVtbl->Release(mediaControl))) {
        return SetPlaybackState(PLAYBACK_STATE_FAILED);
    }
    return 0;
}

char Buffer[MAX_PATH];
char Destination[511];

static bool SetWindowTitleBarText(HWND hWnd, char *name) {
    char str[532] = "Player - ";
    strcat(str, name);
    return SetWindowText(hWnd, str);
}

static bool RenderFile(const char *lpMultiByteStr) {
    ReleaseIGraphBuilder();
    if (SetupGlobalOAEvent()) {
        wchar_t wcStr[260];
        MultiByteToWideChar(0, 0, lpMultiByteStr, -1, wcStr, 260);
        SetCursor(LoadCursor(0, MAKEINTRESOURCE(IDC_WAIT)));
        HRESULT renderFileRet = gGraphBuilder->lpVtbl->RenderFile(gGraphBuilder, wcStr, NULL);
        SetCursor(LoadCursor(0, MAKEINTRESOURCE(IDC_ARROW)));
        return SUCCEEDED(renderFileRet);
    }
    return false;
}

void RenderFileToWindow(HWND hWnd, const char *lpFileName) {
    LPCSTR lpFileName_1; // esi
    lpFileName_1 = lpFileName;
    if (lpFileName && RenderFile(lpFileName)) {
        GetFullPathName(lpFileName_1, MAX_PATH, Buffer, (LPSTR *)&lpFileName);
        strncpy(Destination, lpFileName, sizeof(Destination));
        gPlaybackState = PLAYBACK_STATE_INIT;
        SetWindowTitleBarText(hWnd, Destination);
        SetPlaybackState(PLAYBACK_STATE_STOPPED);
    }
}
