#include "types-win32.h"
//----- (1000B820) --------------------------------------------------------
int __cdecl sub_1000B820(int a1, HGDIOBJ hGDIOBJ, int xSrc, int ySrc, int wSrc, int hSrc) {
    int v6;      // edi
    HDC hDC;     // ebx
    int wSrc_1;  // ebp
    HDC hdcDest; // [esp+18h] [ebp-8Ch] BYREF
    int v11;     // [esp+1Ch] [ebp-88h]
    BITMAP pv;   // [esp+20h] [ebp-84h] BYREF
    int v13[27]; // [esp+38h] [ebp-6Ch] BYREF

    if (!hGDIOBJ || !a1)
        return -2147467259;
    v6 = *(_DWORD *)a1;
    (*(void(__stdcall **)(int))(*(_DWORD *)a1 + 108))(a1);
    hDC = CreateCompatibleDC(0);
    if (!hDC)
        OutputDebugStringA(aCreatecompatib);
    SelectObject(hDC, hGDIOBJ);
    GetObjectA(hGDIOBJ, 24, &pv);
    wSrc_1 = wSrc;
    if (!wSrc)
        wSrc_1 = pv.bmWidth;
    if (!hSrc)
        hSrc = pv.bmHeight;
    v13[0] = 108;
    v13[1] = 6;
    (*(void(__stdcall **)(int, int *))(v6 + 88))(a1, v13);
    v11 = (*(int(__stdcall **)(int, HDC *))(v6 + 68))(a1, &hdcDest);
    if (!v11) {
        StretchBlt(hdcDest, 0, 0, v13[3], v13[2], hDC, xSrc, ySrc, wSrc_1, hSrc, SRCCOPY);
        (*(void(__stdcall **)(int, HDC))(v6 + 104))(a1, hdcDest);
    }
    DeleteDC(hDC);
    return v11;
}
