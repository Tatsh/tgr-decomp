#include "types-win32.h"
//----- (1000A540) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseD3D2DDraw2DDraw(unk0008C *this) {
    IDirect3D2 *d3d2;     // eax
    IDirectDraw2 *ddraw2; // eax
    IDirectDraw *ddraw;   // eax

    d3d2 = this->? ;
    this->       ? &= 0xFFFFFFFE;
    if (d3d2) {
        d3d2->lpVtbl->Release(d3d2);
        this->? = 0;
        g_pD3D2 = 0;
    }
    ddraw2 = this->? ;
    if (ddraw2) {
    ddraw2->lpVtbl->Release(this->?);
    this->? = 0;
    }
    ddraw = this->? ;
    if (ddraw) {
    ddraw->lpVtbl->Release(this->?);
    this->? = 0;
    }
    return 0;
}