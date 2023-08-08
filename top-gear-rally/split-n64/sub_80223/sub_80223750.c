#include "types-n64.h"
//----- (80223750) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *__fastcall sub_80223750(float a1, float a2) {
    float *result; // $v0

    result = &flt_8028B76C;
    dword_8028B780 = 1;
    flt_8028B76C = a1;
    if (0.0 == 1.0)
        flt_8028B770 = -1.0 / a2;
    else
        flt_8028B770 = 1.0 / a2;
    return result;
}
// 80223760: write access to const memory at 8028B780 has been detected
// 802237B0: write access to const memory at 8028B770 has been detected
// 802237C4: write access to const memory at 8028B770 has been detected
// 80223764: write access to const memory at 8028B76C has been detected
// 8028B76C: using guessed type float flt_8028B76C;
// 8028B770: using guessed type float flt_8028B770;
// 8028B780: using guessed type int dword_8028B780;
