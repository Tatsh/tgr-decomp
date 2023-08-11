#include "types-win32.h"
//----- (1001B960) --------------------------------------------------------
GUID *__thiscall GetDirectDrawGUID(unk00334 *this) {
    GUID *result; // eax

    if (((int)this->u8c & 2) != 0)
        result = 0;
    else
        result = (GUID *)&this->lpGUID;
    return result;
}
