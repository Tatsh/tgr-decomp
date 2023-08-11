#include "types-win32.h"
//----- (1000B150) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000B150(unk0008C *this) {
    LPDIRECTDRAWSURFACE v1; // eax
    IDirectDrawPalette *v2; // ecx
    HRESULT result;         // eax

    v1 = this->lpDirectDrawSurface0;
    if (!v1 || (v2 = this->lpDirectDrawPalette) == 0 ||
        (result = v1->lpVtbl->SetPalette(v1, v2), result >= 0))
        result = 0;
    return result;
}
