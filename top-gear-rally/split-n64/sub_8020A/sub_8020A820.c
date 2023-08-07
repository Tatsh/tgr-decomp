#include "../../types-n64.h"
//----- (8020A820) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int16 *sub_8020A820() {
    __int16 *v0;     // $s0
    int v1;          // $s1
    float v2;        // $f20
    float v3;        // $f0
    __int16 *result; // $v0

    v0 = &word_80315FF0;
    v1 = 0;
    do {
        v2 = (float)v1 * 0.20943952;
        *v0 = (int)(float)(sub_80261610(v2) * 64.0) + 160;
        v0[1] = 90;
        v3 = sub_802617D0(v2);
        ++v1;
        v0 += 8;
        *((_BYTE *)v0 - 4) = -1;
        *((_BYTE *)v0 - 3) = -1;
        *((_BYTE *)v0 - 2) = -1;
        *((_BYTE *)v0 - 1) = -1;
        *(v0 - 6) = (int)(float)(v3 * 64.0);
    } while (v1 != 31);
    result = &word_80315FF0;
    word_80315FF0 = 160;
    word_80315FF2 = 75;
    word_80315FF4 = 0;
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = dword_80271DB0;
    return result;
}
// 8020A98C: write access to const memory at 8028A858 has been detected
// 8020A96C: write access to const memory at 80315FF2 has been detected
// 8020A970: write access to const memory at 80315FF4 has been detected
// 8020A958: write access to const memory at 80315FF0 has been detected
// 8020A8EC: conditional instruction was optimized away because of '$t5.4==5A0'
// 80271DB0: using guessed type int dword_80271DB0[8];
// 8028A858: using guessed type int dword_8028A858;
// 80315FF0: using guessed type __int16 word_80315FF0;
// 80315FF2: using guessed type __int16 word_80315FF2;
// 80315FF4: using guessed type __int16 word_80315FF4;
