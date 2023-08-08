#include "types-n64.h"
//----- (80224990) --------------------------------------------------------
void __fastcall sub_80224990(float *a1, float *a2, float a3) {
    float v3; // $f16
    float v4; // $f8

    v3 = a1[1];
    v4 = a1[2];
    *a1 = *a1 + (float)(*a2 * a3);
    a1[1] = v3 + (float)(a2[1] * a3);
    a1[2] = v4 + (float)(a2[2] * a3);
}
