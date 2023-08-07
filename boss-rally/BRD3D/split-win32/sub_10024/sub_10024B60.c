#include "../../types-win32.h"
//----- (10024B60) --------------------------------------------------------
int sub_10024B60() {
    int v0; // eax

    v0 = dword_105553F4;
    if (dword_105553F0 >= (unsigned int)dword_105553F4) {
        dword_105553F4 += 256;
        dword_1057543C = CHK_ReAllocateMemory_0(dword_1057543C, 696 * (v0 + 256), aAppendtextureA);
    }
    return dword_105553F0++;
}
// 105553F0: using guessed type int dword_105553F0;
// 105553F4: using guessed type int dword_105553F4;
