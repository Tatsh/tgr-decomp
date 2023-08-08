#include "types-win32.h"
//----- (1000A540) --------------------------------------------------------
int __thiscall ReleaseD3D2_DDraw2_DDraw(unk8C *this) {
    IDirect3D2 *d3d2;     // eax
    IDirectDraw2 *ddraw2; // eax
    IDirectDraw *ddraw;   // eax

    d3d2 = this->lpDirect3D2;
    this->field_1C &= 0xFFFFFFFE;
    if (d3d2) {
        d3d2->lpVtbl->Release(d3d2);
        this->lpDirect3D2 = 0;
        g_pD3D2 = 0;
    }
    ddraw2 = this->lpDirectDraw2;
    if (ddraw2) {
        ddraw2->lpVtbl->Release(this->lpDirectDraw2);
        this->lpDirectDraw2 = 0;
    }
    ddraw = this->lpDirectDraw;
    if (ddraw) {
        ddraw->lpVtbl->Release(this->lpDirectDraw);
        this->lpDirectDraw = 0;
    }
    return 0;
}
