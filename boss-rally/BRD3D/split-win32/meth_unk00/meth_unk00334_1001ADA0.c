#include "types-win32.h"
//----- (1001ADA0) --------------------------------------------------------
bool __thiscall meth_unk00334_1001ADA0(unk00334 *this, const void *a2) {
    if (!a2)
        return 0;
    if (((int)this->u8c & 1) != 0)
        return memcmp(&this->lpGUID, a2, 0x10u) == 0;
    return 0;
}
