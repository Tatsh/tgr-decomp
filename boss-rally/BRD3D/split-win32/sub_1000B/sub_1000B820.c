#include "types-win32.h"
//----- (1000B820) --------------------------------------------------------
HRESULT __cdecl sub_1000B820(
    IDirectDrawSurface *ddSurface, HGDIOBJ hGDIOBJ, int xSrc, int ySrc, int wSrc, int hSrc) {
    IDirectDrawSurfaceVtbl *ddSurfaceVtbl; // edi
    HDC hDC;                               // ebx
    int wSrc_1;                            // ebp
    HDC hdcDest;                           // [esp+18h] [ebp-8Ch] BYREF
    HRESULT hr;                            // [esp+1Ch] [ebp-88h]
    BITMAP pv;                             // [esp+20h] [ebp-84h] BYREF
    DDSURFACEDESC ddSurfaceDesc;           // [esp+38h] [ebp-6Ch] BYREF

    if (!hGDIOBJ || !ddSurface)
        return 0x80004005;
    ddSurfaceVtbl = ddSurface->lpVtbl;
    ddSurface->lpVtbl->Restore(ddSurface);
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
    ddSurfaceDesc.dwSize = 108;
    ddSurfaceDesc.dwFlags = 6;
    ddSurfaceVtbl->GetSurfaceDesc(ddSurface, &ddSurfaceDesc);
    hr = ddSurfaceVtbl->GetDC(ddSurface, &hdcDest);
    if (!hr) {
        StretchBlt(hdcDest,
                   0,
                   0,
                   ddSurfaceDesc.dwWidth,
                   ddSurfaceDesc.dwHeight,
                   hDC,
                   xSrc,
                   ySrc,
                   wSrc_1,
                   hSrc,
                   SRCCOPY);
        ddSurfaceVtbl->ReleaseDC(ddSurface, hdcDest);
    }
    DeleteDC(hDC);
    return hr;
}
