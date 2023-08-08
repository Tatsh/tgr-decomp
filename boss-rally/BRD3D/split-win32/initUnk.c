#include "types-win32.h"
//----- (1000A190) --------------------------------------------------------
unk8C *__thiscall initUnk(unk8C *this) {
    int v1; // eax

    memset(this, 0, sizeof(unk8C));
    v1 = this->field_14;
    this->field_10 = 140;
    LOBYTE(v1) = v1 | 4;
    this->field_14 = v1;
    return this;
}
