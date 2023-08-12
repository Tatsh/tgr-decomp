#include "types-win32.h"
//----- (1000A540) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseD3D2DDraw2DDraw(unk0008C *this) {
    D3DVALUE d3d2;        // eax
    IDirectDraw2 *ddraw2; // eax
    D3DVALUE ddraw;       // eax

    d3d2 = this->field_8.emissive.g;
    LODWORD(this->field_8.ambient.r) &= 0xFFFFFFFE;
    if (d3d2 != 0.0) {
        (*(void(__stdcall **)(D3DVALUE))(*(_DWORD *)LODWORD(d3d2) + 8))(
            COERCE_D3DVALUE(LODWORD(d3d2)));
        this->field_8.emissive.g = 0.0;
        g_pD3D2 = 0;
    }
    ddraw2 = (IDirectDraw2 *)LODWORD(this->field_8.emissive.r);
    if (ddraw2) {
        ddraw2->lpVtbl->Release((IDirectDraw2 *)LODWORD(this->field_8.emissive.r));
        this->field_8.emissive.r = 0.0;
    }
    ddraw = this->field_8.specular.a;
    if (ddraw != 0.0) {
        (*(void(__stdcall **)(_DWORD))(*(_DWORD *)LODWORD(ddraw) + 8))(
            LODWORD(this->field_8.specular.a));
        this->field_8.specular.a = 0.0;
    }
    return 0;
}
