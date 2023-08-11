#include "types-win32.h"
//----- (1000A190) --------------------------------------------------------
unk0008C *__thiscall meth_unk0008C_init(unk0008C *this) {
    int v1; // eax

    memset(this, 0, sizeof(unk0008C));
    v1 = this->field_14;
    this->field_10 = 140;
    LOBYTE(v1) = v1 | 4;
    this->field_14 = v1;
    return this;
}
