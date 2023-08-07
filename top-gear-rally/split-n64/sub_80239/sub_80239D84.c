#include "../../types-n64.h"
//----- (80239D84) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *sub_80239D84() {
    float v0;      // $f0
    float *result; // $v0

    flt_8028C808 =
        (float)((float)((float)((float)(unsigned __int16)sub_80225EE4() * 0.000030518044) - 1.0) *
                0.0) +
        0.0;
    if (6.2831855 <= 0.0)
        flt_8028C808 = 0.0 - 6.2831855;
    flt_8028C80C =
        (float)((float)((float)((float)(unsigned __int16)sub_80225EE4() * 0.000030518044) - 1.0) *
                0.0) +
        0.5;
    if (1.0 < 0.5)
        flt_8028C80C = 1.0;
    flt_803634D0 = sub_802617D0(0.0) * (float)(0.0 * 0.5);
    v0 = sub_80261610(0.0);
    result = &flt_803634D0;
    flt_803634D8 = 0.0;
    flt_803634D4 = v0 * (float)(0.0 * 0.5);
    return result;
}
// 80239EE0: write access to const memory at 803634D0 has been detected
// 80239DDC: write access to const memory at 8028C808 has been detected
// 80239E74: write access to const memory at 8028C80C has been detected
// 80239F18: write access to const memory at 803634D8 has been detected
// 80239F24: write access to const memory at 803634D4 has been detected
// 80239EAC: write access to const memory at 8028C80C has been detected
// 80239E90: write access to const memory at 8028C80C has been detected
// 80239E1C: write access to const memory at 8028C808 has been detected
// 80239DFC: write access to const memory at 8028C808 has been detected
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028C808: using guessed type float flt_8028C808;
// 8028C80C: using guessed type float flt_8028C80C;
// 803634D0: using guessed type float flt_803634D0;
// 803634D4: using guessed type float flt_803634D4;
// 803634D8: using guessed type float flt_803634D8;
