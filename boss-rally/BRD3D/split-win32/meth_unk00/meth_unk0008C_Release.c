#include "types-win32.h"
//----- (1000A1C0) --------------------------------------------------------
int __thiscall meth_unk0008C_Release(unk0008C *this) {
    int result; // eax

    meth_unk0008C_ReleaseDDrawD3D(this);
    result = 0;
    this->field_2C = 0;
    this->field_30 = 0;
    this->u334 = 0;
    this->hwnd = 0;
    this->last = 0;
    return result;
}
