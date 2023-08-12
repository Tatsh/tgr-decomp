#include "types-win32.h"
//----- (10087580) --------------------------------------------------------
INTRNCVT_STATUS __cdecl math_10087580(void *a1, char *a2) {
    _LDBL12 a1a; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12(&a1a, &a2, a2, 0, 0, 0, 0);
    return math_10087540(&a1a, a1);
}
