#include "types-n64.h"
//----- (80233494) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80233494() {
    __int16 *v0; // $s0
    int v1;      // $s1
    float v2;    // $f20
    float v3;    // $f0
    int result;  // $v0

    v0 = &word_80351A20;
    v1 = 0;
    do {
        v2 = (float)v1 * 0.20943952;
        *v0 = (int)(float)(sub_802617D0(v2) * 256.0);
        v3 = sub_80261610(v2);
        ++v1;
        v0 += 8;
        *(v0 - 6) = 0;
        *((_BYTE *)v0 - 4) = -1;
        *((_BYTE *)v0 - 3) = -1;
        *((_BYTE *)v0 - 2) = -1;
        *((_BYTE *)v0 - 1) = -1;
        *(v0 - 7) = (int)(float)(v3 * 256.0);
    } while (v1 != 31);
    word_80351A20 = 0;
    word_80351A22 = 0;
    word_80351A24 = 0;
    sub_80260800((int)&flt_8031AB10,
                 COERCE_INT(0.009765625),
                 COERCE_INT(0.009765625),
                 COERCE_INT(0.009765625));
    sub_80260BC0(&flt_8031AB50, -45.0, 0.0, 0.0, 1.0);
    sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB50);
    sub_80260ED0(&flt_8031AB50, (int)dword_803519E0);
    result = 0;
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = dword_8028C368;
    return result;
}
// 80233570: write access to const memory at 80351A20 has been detected
// 80233574: write access to const memory at 80351A22 has been detected
// 80233578: write access to const memory at 80351A24 has been detected
// 802335E8: write access to const memory at 8028A858 has been detected
// 80233614: write access to const memory at 8028A858 has been detected
// 80233630: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A878: using guessed type int dword_8028A878;
// 8028C368: using guessed type int dword_8028C368[10];
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
// 803519E0: using guessed type int dword_803519E0[16];
// 80351A20: using guessed type __int16 word_80351A20;
// 80351A22: using guessed type __int16 word_80351A22;
// 80351A24: using guessed type __int16 word_80351A24;
