#include "types-n64.h"
//----- (80224A78) --------------------------------------------------------
float __fastcall sub_80224A78(float *a1, float *a2) {
    float v2; // $f2
    float v3; // $f14

    v2 = a1[1] - a2[1];
    v3 = a1[2] - a2[2];
    return sub_80261140(
        (float)((float)((float)(*a1 - *a2) * (float)(*a1 - *a2)) + (float)(v2 * v2)) +
        (float)(v3 * v3));
}
