#include "types-win32.h"
//----- (1001ADA0) --------------------------------------------------------
bool __thiscall meth_1001ADA0(unk334 *this, const void *a2) {
    if (!a2)
        return 0;
    if (((int)this->field_27 & 1) != 0)
        return memcmp(&this->field_30, a2, 0x10u) == 0;
    return 0;
}
