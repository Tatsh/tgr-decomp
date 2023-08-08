#include "types-win32.h"
//----- (1001B280) --------------------------------------------------------
char __thiscall meth_1001B280(unk334 *this) {
    void *v2; // eax

    meth_1001B5A0((int *)this);
    meth_1001B3B0((int *)this);
    if (this->field_19) {
        free((void *)this->field_19);
        this->field_19 = 0;
    }
    if (this->unkMeth1) {
        free((void *)this->unkMeth1);
        this->unkMeth1 = 0;
    }
    v2 = this->field_27;
    this[5].? = 0;
    LOBYTE(v2) = (unsigned __int8)v2 & 0xFE;
    this[5].? = 0;
    this->field_27 = v2;
    return (char)v2;
}
