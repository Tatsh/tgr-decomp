#include "types-n64.h"
//----- (802608A0) --------------------------------------------------------
void __fastcall sub_802608A0(
    float *a1, float a2, float a3, float a4, float *a5, float *a6, float *a7) {
    *a5 = a1[12] + (float)((float)((float)(*a1 * a2) + (float)(a1[4] * a3)) + (float)(a1[8] * a4));
    *a6 =
        a1[13] + (float)((float)((float)(a1[1] * a2) + (float)(a1[5] * a3)) + (float)(a1[9] * a4));
    *a7 =
        a1[14] + (float)((float)((float)(a1[2] * a2) + (float)(a1[6] * a3)) + (float)(a1[10] * a4));
}
