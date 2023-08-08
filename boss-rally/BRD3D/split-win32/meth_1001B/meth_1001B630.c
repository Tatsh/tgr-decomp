#include "../types-win32.h"
//----- (1001B630) --------------------------------------------------------
int __thiscall meth_1001B630(unk334 *this, unk228 *a2) {
    int v3; // edx
    int v4; // edx
    int v5; // edx

    if (!a2)
        return -2147024809;
    v3 = this->field_328;
    a2->last = 0;
    a2->field_220 = v3;
    v4 = this->field_328;
    if (v4)
        *(_DWORD *)(v4 + 548) = a2;
    v5 = this->field_324;
    this->field_328 = (int)a2;
    if (!v5)
        this->field_324 = (int)a2;
    ++this->field_320;
    return 0;
}
