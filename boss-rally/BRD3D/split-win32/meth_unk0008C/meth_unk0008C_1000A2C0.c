#include "types-win32.h"
//----- (1000A2C0) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A2C0(unk0008C *this) {
    HRESULT result; // eax
    int v3;         // esi

    if (!LODWORD(this->field_8.ambient.g) || !IsWindow((HWND)LODWORD(this->field_8.ambient.g)))
        return -2005522669;
    result = meth_unk0008C_1000A390(this);
    if (result >= 0) {
        v3 = meth_unk0008C_1000A480(this);
        if (v3 >= 0 && (v3 = meth_unk0008C_SetCooperativeLevel(this), v3 >= 0) &&
            (v3 = meth_unk0008C_1000A5D0(this), v3 >= 0) &&
            (v3 = meth_unk0008C_1000A820(this), v3 >= 0) &&
            (v3 = meth_unk0008C_1000AB70(this), v3 >= 0)) {
            SendMessageA((HWND)LODWORD(this->field_8.ambient.g), 0xBD0u, 0, (LPARAM)this);
            result = 0;
        } else {
            meth_unk0008C_ReleaseDDrawD3D(this);
            result = v3;
        }
    }
    return result;
}
