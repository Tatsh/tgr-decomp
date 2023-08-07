#include "../../types-win32.h"
//----- (1005FFD0) --------------------------------------------------------
int sub_1005FFD0() {
    int result; // eax
    int *v1;    // ecx

    result = 0;
    v1 = dword_10AA2A80;
    while (!*v1) {
        ++v1;
        ++result;
        if ((int)v1 >= (int)&dword_10AA2E80)
            return -1;
    }
    return result;
}
// 10AA2A80: using guessed type int dword_10AA2A80[];
