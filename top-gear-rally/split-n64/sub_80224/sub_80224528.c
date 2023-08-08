#include "types-n64.h"
//----- (80224528) --------------------------------------------------------
void __fastcall sub_80224528(float *a1, float a2) {
    float v2; // $f10
    float v3; // $f18

    v2 = a1[1] * a2;
    v3 = a1[2] * a2;
    *a1 = *a1 * a2;
    a1[1] = v2;
    a1[2] = v3;
}
