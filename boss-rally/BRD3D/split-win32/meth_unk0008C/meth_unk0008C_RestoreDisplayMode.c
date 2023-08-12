#include "types-win32.h"
//----- (1000A800) --------------------------------------------------------
int __thiscall meth_unk0008C_RestoreDisplayMode(unk0008C *this) {
    IDirectDraw2 *ddraw2; // ecx

    LODWORD(this->field_8.ambient.r) &= 0xFFFFFFFD;
    ddraw2 = (IDirectDraw2 *)LODWORD(this->field_8.emissive.r);
    if (ddraw2)
        ddraw2->lpVtbl->RestoreDisplayMode(ddraw2);
    return 0;
}
