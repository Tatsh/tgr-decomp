#include "types-win32.h"
//----- (1001B960) --------------------------------------------------------
GUID *__thiscall getDirectDrawLPGUID(#485 * this) {
    GUID *result; // eax

    if ((*(_BYTE *)this & 2) != 0)
        result = 0;
    else
        result = (GUID *)&this[4];
    return result;
}
