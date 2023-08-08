#include "types-n64.h"
//----- (80206304) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80206304() {
    int result; // $v0
    int v1;     // $t2
    int v2;     // $t7

    result = -951313096;
    v1 = *((unsigned __int8 *)&off_8028B944[7 * MEMORY[0xC74C1D3C] + 5] + 2 * MEMORY[0xC74C1D3D]);
    dword_8028B940 = v1;
    if ((MEMORY[0xC74C1D38] & 1) != 0) {
        if (v1 >= 5)
            dword_8028B940 = v1 - 5;
        else
            dword_8028B940 = v1 + 5;
        v2 = MEMORY[0xC74C1D3C];
    } else {
        v2 = MEMORY[0xC74C1D3C];
    }
    dword_8028C800 = *((unsigned __int8 *)&off_8028B944[7 * v2 + 5] + 2 * MEMORY[0xC74C1D3D] + 1);
    return result;
}
// 802063A0: write access to const memory at 8028C800 has been detected
// 80206340: write access to const memory at 8028B940 has been detected
// 80206368: write access to const memory at 8028B940 has been detected
// 80206370: write access to const memory at 8028B940 has been detected
// 8028B940: using guessed type int dword_8028B940;
// 8028B944: using guessed type char *off_8028B944[2];
// 8028C800: using guessed type int dword_8028C800;
