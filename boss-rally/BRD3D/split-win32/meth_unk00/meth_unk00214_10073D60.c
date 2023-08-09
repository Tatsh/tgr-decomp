#include "types-win32.h"
//----- (10073D60) --------------------------------------------------------
int __thiscall meth_unk00214_10073D60(unk00214 *this, char a2) {
    int result; // eax

    meth_unk00214_10073F20(this);
    *((_BYTE *)this->field_10 + this->field_C) = a2;
    result = this->field_C + 1;
    this->field_C = result;
    return result;
}
