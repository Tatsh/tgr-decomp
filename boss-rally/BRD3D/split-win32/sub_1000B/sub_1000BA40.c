#include "types-win32.h"
//----- (1000BA40) --------------------------------------------------------
HRESULT __cdecl sub_1000BA40(LPDIRECTDRAWSURFACE surface, COLORREF color) {
    DWORD colorSpaceValue;               // eax
    IDirectDrawSurfaceVtbl *surfaceVtbl; // ecx
    DDCOLORKEY v5;                       // [esp+4h] [ebp-8h] BYREF

    colorSpaceValue = CalcColorSpaceValue(surface, color);
    surfaceVtbl = surface->lpVtbl;
    v5.dwColorSpaceLowValue = colorSpaceValue;
    v5.dwColorSpaceHighValue = colorSpaceValue;
    return surfaceVtbl->SetColorKey(surface, 8, &v5);
}
