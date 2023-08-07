#include "../../types-n64.h"
//----- (8021B458) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021B458() {
    float v0;   // $f12
    float v1;   // $f14
    int result; // $v0

    sub_80264E50((float *)dword_8031AAD0, 512.0, 384.0, 1000.0, 512.0, 384.0, 0.0, 0.0, 1.0, 0.0);
    sub_80265180(v0, v1, 45.0, 1.3333334, &word_8028A874, &flt_8031AB50, 10.0, 2000.0, 1.0);
    sub_80260940((float *)dword_8031AAD0, &flt_8031AB50, (int)&flt_8031AA50);
    dword_8028A858 = 8;
    MEMORY[0] = -1140850674;
    MEMORY[4] = 0;
    dword_8028A878 = (int)sub_80255CD0();
    result = sub_80260ED0(&flt_8031AA50, 0);
    dword_8028A858 = 8;
    MEMORY[0] = 16973888;
    MEMORY[4] = 0x80000000;
    return result;
}
// 8021B52C: write access to const memory at 8028A858 has been detected
// 8021B550: write access to const memory at 8028A878 has been detected
// 8021B578: write access to const memory at 8028A858 has been detected
// 8021B4F0: variable 'v0' is possibly undefined
// 8021B4F0: variable 'v1' is possibly undefined
// 8028A858: using guessed type int dword_8028A858;
// 8028A874: using guessed type __int16 word_8028A874;
// 8028A878: using guessed type int dword_8028A878;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031AAD0: using guessed type int dword_8031AAD0[16];
// 8031AB50: using guessed type float flt_8031AB50;
