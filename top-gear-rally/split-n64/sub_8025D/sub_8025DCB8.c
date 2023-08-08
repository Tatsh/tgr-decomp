#include "types-n64.h"
//----- (8025DCB8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *__fastcall sub_8025DCB8(int a1, float *a2, float a3, float *a4) {
    float *result; // $v0
    float v5;      // $f0

    result = &flt_8037EAC8;
    v5 =
        (float)((float)(a4[2] * a2[2]) + (float)((float)(*a2 * *a4) + (float)(a2[1] * a4[1]))) - a3;
    flt_8037EAC8 = *a2 * (float)-v5;
    flt_8037EACC = a2[1] * (float)-v5;
    flt_8037EAD0 = a2[2] * (float)-v5;
    return result;
}
// 8025DD18: write access to const memory at 8037EAC8 has been detected
// 8025DD24: write access to const memory at 8037EACC has been detected
// 8025DD34: write access to const memory at 8037EAD0 has been detected
// 8025DE28: write access to const memory at 8037EAB0 has been detected
// 8025DE38: write access to const memory at 8037EAAC has been detected
// 8025DEBC: write access to const memory at 8037EAB0 has been detected
// 8025DECC: write access to const memory at 8037EAA8 has been detected
// 8025DF04: write access to const memory at 8037EAAC has been detected
// 8025DF10: write access to const memory at 8037EAA8 has been detected
// 8025DFA8: write access to const memory at 8037EAC8 has been detected
// 8025DFB4: write access to const memory at 8037EACC has been detected
// 8025DFC0: write access to const memory at 8037EAD0 has been detected
// 8037EAA8: using guessed type float flt_8037EAA8;
// 8037EAAC: using guessed type float flt_8037EAAC;
// 8037EAC8: using guessed type float flt_8037EAC8;
// 8037EACC: using guessed type float flt_8037EACC;
// 8037EAD0: using guessed type float flt_8037EAD0;
