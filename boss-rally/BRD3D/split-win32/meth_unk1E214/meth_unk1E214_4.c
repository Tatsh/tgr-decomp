#include "types-win32.h"
//----- (10047A10) --------------------------------------------------------
int __thiscall meth_unk1E214_4(unk1E214 *this) {
    int v2; // eax
    int v3; // esi

    if (this->field_296C) {
        v2 = this->field_128;
        v3 = this->last;
        this->field_3838.field_1A99C[28] = *(_WORD *)&this->field_2A40[2 * v2];
        this->lpVtbl->meth6(this, (int *)(16 * v2 + v3));
    } else {
        this->lpVtbl->meth7(this);
    }
    return 1;
}
