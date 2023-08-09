#include "types-win32.h"
//----- (1001AC60) --------------------------------------------------------
int __thiscall meth_unk00334_1001AC60(unk00334 *this) {
    if (this->u8c != (unk0008C *)108)
        return 0;
    if (((int)this->lpGUID & 0x1000) == 0)
        return 0;
    if (this->field_48 == 32)
        return this->bitDepth;
    return 0;
}
