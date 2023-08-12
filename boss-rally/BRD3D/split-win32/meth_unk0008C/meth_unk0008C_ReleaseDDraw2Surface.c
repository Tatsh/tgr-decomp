#include "types-win32.h"
//----- (1000A8A0) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseDDraw2Surface(unk0008C *this) {
    D3DVALUE ddrawSurface; // eax

    LODWORD(this->field_8.ambient.r) &= 0xFFFFFFFB;
    meth_unk0008C_ResetPalette(this);
    ddrawSurface = this->field_8.emissive.b;
    if (ddrawSurface != 0.0) {
        (*(void(__stdcall **)(_DWORD))(*(_DWORD *)LODWORD(ddrawSurface) + 8))(
            LODWORD(this->field_8.emissive.b));
        this->field_8.emissive.b = 0.0;
    }
    return 0;
}
