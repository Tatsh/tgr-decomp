#include "types-win32.h"
//----- (10073D80) --------------------------------------------------------
int __thiscall meth_unk00214_10073D80(unk00214 *this, __int16 a2) {
    int *v3;    // edx
    int v4;     // ecx
    int result; // eax

    meth_unk00214_10073F20(this);
    *((_BYTE *)this->field_10 + this->field_C) = HIBYTE(a2);
    v3 = this->field_10;
    v4 = this->field_C + 1;
    this->field_C = v4;
    *((_BYTE *)v3 + v4) = a2;
    result = this->field_C + 1;
    this->field_C = result;
    return result;
}
