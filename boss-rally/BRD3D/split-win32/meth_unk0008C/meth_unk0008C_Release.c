#include "types-win32.h"
//----- (1000A1C0) --------------------------------------------------------
int __thiscall meth_unk0008C_Release(unk0008C *this) {
    int result; // eax

    meth_unk0008C_ReleaseDDrawD3D(this);
    result = 0;
    this->field_8.specular.r = 0.0;
    this->field_8.specular.g = 0.0;
    this->field_8.specular.b = 0.0;
    this->field_8.ambient.g = 0.0;
    this->last = 0;
    return result;
}
