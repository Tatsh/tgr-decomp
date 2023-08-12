#include "types-win32.h"
//----- (1002C430) --------------------------------------------------------
void __cdecl math_1002C430(int a1) {
    float v1; // [esp+0h] [ebp-Ch]

    if (*(_DWORD *)(a1 + 1840)) {
        v1 = *(float *)(a1 + 488) * *(float *)(a1 + 488) +
             *(float *)(a1 + 492) * *(float *)(a1 + 492) +
             *(float *)(a1 + 496) * *(float *)(a1 + 496);
        *(float *)(a1 + 4144) = sqrt_(v1) * 2.24;
    }
    meth_10075F10((void *)a1);
}
