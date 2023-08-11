#include "types-win32.h"
//----- (1000B680) --------------------------------------------------------
IDirectDrawSurface *__cdecl DDrawCreateSurface(
    IDirectDraw2 *ddraw2, LPCSTR filepath, int cx_, int cy, LPDDSURFACEDESC a5) {
    HINSTANCE hInst;                   // eax
    void *result_1;                    // ebx
    IDirectDrawSurface *result;        // eax
    IDirectDraw2Vtbl *ddrawVtbl;       // ecx
    IDirectDrawSurface *ddrawSurface0; // [esp-18h] [ebp-B0h]
    IDirectDrawSurface *ddrawSurface1; // [esp+10h] [ebp-88h] BYREF
    BITMAP bitmap;                     // [esp+14h] [ebp-84h] BYREF
    DDSURFACEDESC surfaceDesc;         // [esp+2Ch] [ebp-6Ch] BYREF

    hInst = GetModuleHandleA(0);
    result_1 = LoadImageA(hInst, filepath, 0, cx_, cy, LR_CREATEDIBSECTION);
    if (result_1 || (result = (IDirectDrawSurface *)LoadImageA(0, filepath, 0, cx_, cy, 0x2010u),
                     (result_1 = result) != 0)) {
        GetObjectA(result_1, 24, &bitmap);
        memset(&surfaceDesc, 0, sizeof(surfaceDesc));
        surfaceDesc.dwHeight = bitmap.bmHeight;
        surfaceDesc.dwWidth = bitmap.bmWidth;
        ddrawVtbl = ddraw2->lpVtbl;
        surfaceDesc.dwSize = 108;
        surfaceDesc.dwFlags = 7;
        surfaceDesc.ddsCaps.dwCaps = 64;
        if (ddrawVtbl->CreateSurface(ddraw2, &surfaceDesc, &ddrawSurface1, 0)) {
            result = 0;
        } else {
            ddrawSurface0 = ddrawSurface1;
            qmemcpy(a5, &surfaceDesc, sizeof(_DDSURFACEDESC));
            graphics_1000B820(ddrawSurface0, result_1, 0, 0, 0, 0);
            DeleteObject(result_1);
            result = ddrawSurface1;
        }
    }
    return result;
}
