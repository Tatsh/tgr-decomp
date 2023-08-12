#include "types-win32.h"
//----- (1001B280) --------------------------------------------------------
char __thiscall meth_unk00334_1001B280(unk00334 *this) {
    DWORD v2; // eax

    meth_unk00334_1001B5A0(this);
    meth_unk00334_1001B3B0(this);
    if (this->field_19) {
        free(this->field_19);
        this->field_19 = 0;
    }
    if (this->field_14) {
        free(this->field_14);
        this->field_14 = 0;
    }
    v2 = this->ddCapsFlags;
    this->field_32C = 0;
    LOBYTE(v2) = v2 & 0xFE;
    this->last = 0;
    this->ddCapsFlags = v2;
    return v2;
}
