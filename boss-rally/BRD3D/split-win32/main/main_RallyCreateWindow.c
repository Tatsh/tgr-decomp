#include "types-win32.h"
//----- (10079A90) --------------------------------------------------------
HRESULT __cdecl main_RallyCreateWindow(DWORD dwExStyle,
                                       LPCSTR lpClassName,
                                       LPCSTR lpWindowName,
                                       DWORD dwStyle,
                                       int X,
                                       int Y,
                                       int nWidth,
                                       int nHeight,
                                       HWND hWndParent,
                                       HMENU hMenu,
                                       HINSTANCE hInstance,
                                       LPVOID lpParam,
                                       int a3,
                                       int a14,
                                       HWND *wnd2,
                                       unk00334 *a16) {
    unk0008C *unk8C_0; // edi
    HRESULT result;    // eax
    HINSTANCE hInst;   // ebx
    HWND wnd1;         // esi
    unk0008C *unk8C_1; // eax
    HWND wnd;          // eax
    HWND wnd0;         // esi
    HRESULT v23;       // ebx

    unk8C_0 = 0;
    if (!lpClassName)
        return -2147024809;
    hInst = hInstance;
    if (!hInstance)
        hInst = GetModuleHandleA(0);
    wnd1 = hWndParent;
    if (!hWndParent)
        wnd1 = GetDesktopWindow();
    unk8C_1 = (unk0008C *)malloc(0x8Cu);
    if (unk8C_1)
        unk8C_0 = meth_unk0008C_init(unk8C_1);
    if (!unk8C_0)
        return -2147024882;
    wnd = CreateWindowExA(dwExStyle,
                          lpClassName,
                          lpWindowName,
                          dwStyle,
                          X,
                          Y,
                          nWidth,
                          nHeight,
                          wnd1,
                          hMenu,
                          hInst,
                          lpParam);
    wnd0 = wnd;
    if (wnd) {
        ShowWindow(wnd, WM_ENABLE);
        UpdateWindow(wnd0);
        if (gPlayMusic == PLAYMUSIC_EAR)
            pm_setupEAR(wnd0);
        v23 = meth_unk0008C_np_1000A1E0(unk8C_0, wnd0, a3, 0, 0, 0, 0, 0, 1);
        if (v23 >= 0) {
            if (wnd2)
                *wnd2 = wnd0;
            if (a16)
                a16->ddCapsFlags = (DWORD)unk8C_0;
            result = 0;
        } else {
            meth_unk0008C_Release(unk8C_0);
            free(unk8C_0);
            MessageBoxA(wnd0, aUnableToInitia, gMessageBoxCaption, MB_ICONSTOP);
            DestroyWindow(wnd0);
            result = v23;
        }
    } else {
        meth_unk0008C_Release(unk8C_0);
        free(unk8C_0);
        result = 0x80004005;
    }
    return result;
}
// 100940A4: using guessed type int gPlayMusic;
