#include "types-win32.h"
//----- (10073F20) --------------------------------------------------------
int __thiscall meth_unk00214_10073F20(unk00214 *this) {
    int result; // eax
    int v2;     // eax

    result = this->field_8;
    if (result) {
        v2 = this->field_C;
        this->field_8 = 0;
        result = v2 + 1;
        this->field_C = result;
    }
    return result;
}
