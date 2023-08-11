#include "types-win32.h"
//----- (1000A190) --------------------------------------------------------
unk0008C *__thiscall meth_unk0008C_init(unk0008C *this) {
    int v1; // eax

    memset(this, 0, sizeof(unk0008C));
    v1 = this->? ;
    this->     ? = 140;
    LOBYTE(v1) = v1 | 4;
    this->? = v1;
    return this;
}
