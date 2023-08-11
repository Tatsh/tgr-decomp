#include "types-win32.h"
//----- (100798F0) --------------------------------------------------------
int sub_100798F0() {
    int result;         // eax
    _DWORD *dw;         // eax
    HWND wnd;           // [esp+0h] [ebp-3Ch] BYREF
    _DWORD *dw1;        // [esp+4h] [ebp-38h]
    WNDCLASSA WndClass; // [esp+8h] [ebp-34h] BYREF
    int v5;             // [esp+38h] [ebp-4h]

    hCursor = LoadCursorA(0, (LPCSTR)0x7F00); // MAKEINTRESOURCE(...)
    WndClass.style = CS_DBLCLKS;
    WndClass.lpfnWndProc = windowProc;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 4; // for storing a pointer after this
    WndClass.hInstance = hInstance;
    WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x65); // MAKEINTRESOURCE(...)
    WndClass.hCursor = hCursor;
    WndClass.hbrBackground = (HBRUSH)GetStockObject(0);
    WndClass.lpszMenuName = (LPCSTR)102; // MAKEINTRESOURCE(...)
    WndClass.lpszClassName = lpClassName;
    if (!RegisterClassA(&WndClass))
        return 0;
    if (RallyCreateWindow(WS_EX_APPWINDOW,
                          lpClassName,
                          lpWindowName,
                          0x80C20000, // dwStyle, WS_EX_STATICEDGE | WS_EX_NOACTIVATE | WS_CAPTION
                          0,
                          0,
                          640,
                          480,
                          0,
                          0,
                          hInstance,
                          0,
                          (int)&gGUID,
                          1,
                          &wnd,
                          (unk00334 *)&gUnk8C) < 0)
        return 0;
    gHwnd = wnd;
    dw = (_DWORD *)malloc(4u);
    dw1 = dw;
    v5 = 0;
    if (dw)
        result = (int)unknown_libname_1(dw);
    else
        result = 0;
    v5 = -1;
    gUnk334 = (unk00334 *)result;
    if (result) {
        ShowStaticImage(gUnk8C, aSplashImg, 0x2AC7E58B);
        result = meth_unk0008C_1000B280(gUnk8C, gUnk334) >= 0;
    }
    return result;
}
// 10B4E6F8: using guessed type int dword_10B4E6F8;
