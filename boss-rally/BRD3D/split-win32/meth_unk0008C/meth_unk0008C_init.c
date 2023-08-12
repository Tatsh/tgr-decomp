#include "types-win32.h"
//----- (1000A190) --------------------------------------------------------
unk0008C *__thiscall meth_unk0008C_init(unk0008C *this) {
    int v1; // eax

    memset(this, 0, sizeof(unk0008C));
    v1 = LODWORD(this->field_8.diffuse.b);
    LODWORD(this->field_8.diffuse.g) = 140;
    LOBYTE(v1) = v1 | 4;
    LODWORD(this->field_8.diffuse.b) = v1;
    return this;
}
