#include "../../types-n64.h"
//----- (8021BE28) --------------------------------------------------------
float *__fastcall sub_8021BE28(int a1, float a2) {
    float v2;      // $f12
    float *result; // $v0

    v2 = a2;
    result = (float *)&dword_8031B1D8[a1];
    if (a2 > 2.5)
        v2 = 2.5;
    *result = *result + v2;
    if (*result > 5.0)
        *result = 5.0;
    return result;
}
// 8031B1D8: using guessed type int dword_8031B1D8[4];
