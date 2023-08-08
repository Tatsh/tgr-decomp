#include "types-win32.h"
//----- (100312A7) --------------------------------------------------------
double __cdecl sub_100312A7(float *a1) {
    double result; // st7
    float v2;      // [esp+0h] [ebp-18h]
    float v3;      // [esp+0h] [ebp-18h]
    float v4;      // [esp+4h] [ebp-14h]
    float *i;      // [esp+Ch] [ebp-Ch]
    float v6;      // [esp+14h] [ebp-4h]

    v6 = 0.0;
    v2 = 0.0;
    for (i = a1; i < a1 + 12; ++i) {
        v4 = *i;
        if (v4 >= 0.0) {
            if (v6 < (double)v4)
                v6 = v4;
        } else if (v2 > (double)v4) {
            v2 = v4;
        }
    }
    v3 = -v2;
    if (v3 <= (double)v6)
        result = v6;
    else
        result = v3;
    return result;
}
