#include "../../types-n64.h"
//----- (80219A78) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80219A78(int a1, int a2, int a3, int a4) {
    int result; // $v0

    if (a1 < 0) {
        a3 += a1;
        a1 = 0;
    }
    if (a1 + a3 > 320)
        a3 = 320 - a1;
    if (a3 < 0)
        a3 = 0;
    if (a2 < 0) {
        a4 += a2;
        a2 = 0;
    }
    result = 240;
    if (a2 + a4 > 240)
        a4 = 240 - a2;
    if (a4 < 0)
        a4 = 0;
    dword_8028A858 = 8;
    MEMORY[0] = (((int)(float)((float)a1 * 4.0) & 0xFFF) << 12) | 0xED000000 |
                (int)(float)((float)a2 * 4.0) & 0xFFF;
    MEMORY[4] = (((int)(float)((float)(a1 + a3) * 4.0) & 0xFFF) << 12) |
                (int)(float)((float)(a2 + a4) * 4.0) & 0xFFF;
    return result;
}
// 80219B58: write access to const memory at 8028A858 has been detected
// 80219B7C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
