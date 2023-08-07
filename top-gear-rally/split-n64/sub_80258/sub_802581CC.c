#include "../../types-n64.h"
//----- (802581CC) --------------------------------------------------------
void __fastcall sub_802581CC(float *a1) {
    float v1; // $f0
    float v2; // $f10
    float v3; // $f16

    v1 =
        sub_80261140((float)(a1[2] * a1[2]) + (float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])));
    v2 = a1[1] * (float)(1.0 / v1);
    v3 = a1[2] * (float)(1.0 / v1);
    *a1 = *a1 * (float)(1.0 / v1);
    a1[1] = v2;
    a1[2] = v3;
}
