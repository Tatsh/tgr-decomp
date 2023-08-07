#include "../../types-n64.h"
//----- (802237D0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *__fastcall sub_802237D0(float a1, float a2) {
    float *result; // $v0

    result = &flt_8028B760;
    dword_8028B77C = 1;
    flt_8028B760 = a1;
    if (0.0 == 1.0)
        flt_8028B764 = -1.0 / a2;
    else
        flt_8028B764 = 1.0 / a2;
    return result;
}
// 802237E0: write access to const memory at 8028B77C has been detected
// 80223830: write access to const memory at 8028B764 has been detected
// 80223844: write access to const memory at 8028B764 has been detected
// 802237E4: write access to const memory at 8028B760 has been detected
// 8028B760: using guessed type float flt_8028B760;
// 8028B764: using guessed type float flt_8028B764;
// 8028B77C: using guessed type int dword_8028B77C;
