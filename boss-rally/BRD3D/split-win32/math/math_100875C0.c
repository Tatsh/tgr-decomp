#include "types-win32.h"
//----- (100875C0) --------------------------------------------------------
INTRNCVT_STATUS __cdecl math_100875C0(int a1, char *a2) {
    _LDBL12 a1a; // [esp+0h] [ebp-Ch] BYREF

    __strgtold12(&a1a, &a2, a2, 0, 0, 0, 0);
    return math_ld12cvt(&a1a, (void *)a1);
}
