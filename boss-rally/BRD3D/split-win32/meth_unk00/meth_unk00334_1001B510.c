#include "types-win32.h"
//----- (1001B510) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001B510(unk00334 *this, IDirect3D2 *a2) {
    HRESULT result;     // eax
    IDirect3D2Vtbl *v4; // ecx
    unk0008C *v5;       // eax
    int v6;             // [esp+Ch] [ebp-Ch] BYREF
    int v7;             // [esp+10h] [ebp-8h]
    unk00334 *v8;       // [esp+14h] [ebp-4h]

    if (((int)this->u8c & 0x10) != 0)
        return 0;
    if (!a2)
        return -2005522670;
    v4 = a2->lpVtbl;
    v6 = 1;
    v8 = this;
    v7 = 0;
    result = v4->EnumDevices(a2, d3d2enumDevicesCallback, &v6);
    if (result >= 0) {
        if (v6 && v7 && this->field_320 == v7) {
            v5 = this->u8c;
            LOBYTE(v5) = (int)this->u8c | 0x10;
            this->u8c = v5;
            result = 0;
        } else {
            result = -2005522671;
        }
    }
    return result;
}