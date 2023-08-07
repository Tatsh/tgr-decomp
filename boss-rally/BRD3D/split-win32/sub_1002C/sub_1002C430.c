#include "../../types-win32.h"
//----- (1002C430) --------------------------------------------------------
int __cdecl sub_1002C430(int a1) {
    float v2; // [esp+0h] [ebp-Ch]

    if (*(_DWORD *)(a1 + 1840)) {
        v2 = *(float *)(a1 + 488) * *(float *)(a1 + 488) +
             *(float *)(a1 + 492) * *(float *)(a1 + 492) +
             *(float *)(a1 + 496) * *(float *)(a1 + 496);
        *(float *)(a1 + 4144) = sqrt_(v2) * 2.24;
    }
    return meth_10075F10(a1);
}
// 1002C430: using guessed type int __cdecl sub_1002C430(int);
