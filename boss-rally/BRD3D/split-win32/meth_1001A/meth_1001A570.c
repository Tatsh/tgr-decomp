#include "types-win32.h"
//----- (1001A570) --------------------------------------------------------
unk1 *__cdecl meth_1001A570(_DWORD *a1, int width, int height, int bitDepth, unk1 *a5, int a6) {
    unk1 *result; // eax

    if (!a1)
        return 0;
    if (a6)
        result = (unk1 *)meth_1001B880((unk1 *)a1, width, height, bitDepth, (int)a5, a6, &a5, 0);
    else
        result = meth_1001B490(a1, width, height, bitDepth, (int)a5, &a5, 0);
    if (!result)
        result = a5;
    return result;
}
