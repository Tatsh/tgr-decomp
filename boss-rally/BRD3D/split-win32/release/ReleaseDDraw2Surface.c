#include "../types-win32.h"
//----- (1000A8A0) --------------------------------------------------------
int __thiscall ReleaseDDraw2Surface(unk8C *this) {
    LPDIRECTDRAWSURFACE ddrawSurface; // eax

    this->field_1C &= 0xFFFFFFFB;
    resetPalette(this);
    ddrawSurface = this->lpDirectDrawSurface0;
    if (ddrawSurface) {
        ddrawSurface->lpVtbl->Release(this->lpDirectDrawSurface0);
        this->lpDirectDrawSurface0 = 0;
    }
    return 0;
}
