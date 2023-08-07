#include "../../types-n64.h"
//----- (80224DDC) --------------------------------------------------------
void __fastcall sub_80224DDC(float *a1, float *a2, float *a3) {
    float v3; // $f0
    float v4; // $f2
    float v5; // $f12

    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    *a1 = a3[12] + (float)((float)((float)(*a2 * *a3) + (float)(v4 * a3[4])) + (float)(v5 * a3[8]));
    a1[1] =
        a3[13] + (float)((float)((float)(v3 * a3[1]) + (float)(v4 * a3[5])) + (float)(v5 * a3[9]));
    a1[2] =
        a3[14] + (float)((float)((float)(v3 * a3[2]) + (float)(v4 * a3[6])) + (float)(v5 * a3[10]));
    a1[3] =
        a3[15] + (float)((float)((float)(v3 * a3[3]) + (float)(v4 * a3[7])) + (float)(v5 * a3[11]));
}
