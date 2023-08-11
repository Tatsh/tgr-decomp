#include "types-win32.h"
//----- (1001B960) --------------------------------------------------------
GUID *__thiscall meth_unk00334_GetDirectDrawGUID(unk00334 *this) {
    GUID *result; // eax

    if (((int)this->ddCapsFlags & 2) != 0)
        result = 0;
    else
        result = (GUID *)&this->lpGUID;
    return result;
}
