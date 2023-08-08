#include "types-n64.h"
//----- (8020C460) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8020C460(__int16 a1, int a2, int a3, int a4, float a5) {
    __int16 v5; // $a0
    int result; // $v0

    v5 = a1 + 3;
    result = 0;
    dword_8028A858 = 8;
    MEMORY[0] = (((v5 + (unsigned __int16)(int)(float)((float)(a3 - 6) * a5)) & 0x3FF) << 14) |
                0xF6000000 | (4 * ((a2 + a4 - 3) & 0x3FF));
    MEMORY[4] = ((v5 & 0x3FF) << 14) | (4 * ((a2 + 3) & 0x3FF));
    return result;
}
// 8020C478: write access to const memory at 8028A858 has been detected
// 8020C494: write access to const memory at 8028A858 has been detected
// 8020C4B0: write access to const memory at 8028A858 has been detected
// 8020C4D4: write access to const memory at 8028A858 has been detected
// 8020C4FC: write access to const memory at 8028A858 has been detected
// 8020C528: write access to const memory at 8028A858 has been detected
// 8020C56C: write access to const memory at 8028A858 has been detected
// 8020C588: write access to const memory at 8028A858 has been detected
// 8020C5A8: write access to const memory at 8028A858 has been detected
// 8020C5FC: write access to const memory at 8028A858 has been detected
// 8020C620: write access to const memory at 8028A858 has been detected
// 8020C64C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
