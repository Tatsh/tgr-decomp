#include "types-n64.h"
//----- (80219DF0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_80219DF0(int a1, int a2, int a3, int a4, int a5) {
    int *result; // $v0

    dword_8028AB60 = 1;
    if (a5) {
        dword_8028A858 = 8;
        MEMORY[4] = 0;
        MEMORY[0] = -419430400;
        if (a3 >= 0)
            sub_80219A78(a1, a2, a3, a4);
        else
            sub_80219A78(a1, a2, -a3, a4);
    }
    dword_8028A8A8 = 0;
    HIWORD(unkThread3Stack[0]) = 640;
    LOWORD(unkThread3Stack[0]) = 480;
    HIWORD(unkThread3Stack[1]) = 511;
    *(int *)((char *)&unkThread3Stack[1] + 2) = 640;
    LOWORD(unkThread3Stack[2]) = 480;
    HIWORD(unkThread3Stack[3]) = 511;
    LOWORD(unkThread3Stack[3]) = 0;
    dword_8028A858 = 8;
    MEMORY[0] = 58720272;
    MEMORY[4] = unkThread3Stack;
    result = unkThread3Stack;
    dword_8028AB64 = -23622;
    dword_8028AB68 = -1259;
    return result;
}
// 80219E5C: write access to const memory at 8028A8A8 has been detected
// 80219EEC: write access to const memory at 8028AB64 has been detected
// 80219F00: write access to const memory at 8028AB68 has been detected
// 80219E14: write access to const memory at 8028AB60 has been detected
// 80219E30: write access to const memory at 8028A858 has been detected
// 80219EB8: write access to const memory at 8028A858 has been detected
// 80219E98: write access to const memory at 80318CD0 has been detected
// 80219E9C: write access to const memory at 80318CD2 has been detected
// 80219EA0: write access to const memory at 80318CD4 has been detected
// 80219EA8: write access to const memory at 80318CD6 has been detected
// 80219EAC: write access to const memory at 80318CDA has been detected
// 80219EB0: write access to const memory at 80318CDC has been detected
// 80219EB4: write access to const memory at 80318CDE has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028AB60: using guessed type int dword_8028AB60;
// 8028AB64: using guessed type int dword_8028AB64;
// 8028AB68: using guessed type int dword_8028AB68;
// 80318CD0: using guessed type int dword_80318CD0[128];
