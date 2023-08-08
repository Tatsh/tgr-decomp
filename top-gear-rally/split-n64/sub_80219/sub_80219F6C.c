#include "types-n64.h"
//----- (80219F6C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80219F6C(int a1, int a2, int a3, int a4) {
    int result; // $v0

    result = 0;
    dword_8028A858 = 8;
    MEMORY[0] = (((a1 + a3) & 0x3FF) << 14) | 0xF6000000 | (4 * ((a2 + a4) & 0x3FF));
    MEMORY[4] = ((((_WORD)a1 + (_WORD)a3 - 1) & 0x3FF) << 14) | (4 * (a2 & 0x3FF));
    return result;
}
// 80219F84: write access to const memory at 8028A858 has been detected
// 80219FA0: write access to const memory at 8028A858 has been detected
// 80219FC0: write access to const memory at 8028A858 has been detected
// 80219FDC: write access to const memory at 8028A858 has been detected
// 8021A014: write access to const memory at 8028A858 has been detected
// 8021A058: write access to const memory at 8028A858 has been detected
// 8021A0A4: write access to const memory at 8028A858 has been detected
// 8021A0CC: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
