#include "types-win32.h"
//----- (1001B320) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001B320(unk00334 *this, IDirectDraw2 *ddraw) {
    HRESULT result;              // eax
    IDirectDraw2Vtbl *ddrawVtbl; // ecx
    unk0008C *v5;                // eax
    int v6;                      // [esp+14h] [ebp-Ch] BYREF
    int v7;                      // [esp+18h] [ebp-8h]
    unk00334 *this_1;            // [esp+1Ch] [ebp-4h]

    if (((int)this->u8c & 8) != 0)
        return 0;
    if (!ddraw)
        return -2005522670;
    ddrawVtbl = ddraw->lpVtbl;
    v6 = 1;
    this_1 = this;
    v7 = 0;
    result = ddrawVtbl->EnumDisplayModes(ddraw, 0, 0, &v6, enumModesCallback);
    if (result >= 0) {
        if (v6 && v7 && this->field_314 == v7) {
            v5 = this->u8c;
            LOBYTE(v5) = (int)this->u8c | 8;
            this->u8c = v5;
            result = 0;
        } else {
            result = -2005522671;
        }
    }
    return result;
}
