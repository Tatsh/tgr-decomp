#include "types-n64.h"
//----- (8022483C) --------------------------------------------------------
void __fastcall sub_8022483C(float *a1, float *a2) {
    float v2; // $f10
    float v3; // $f4

    v2 = a1[1];
    v3 = a1[2];
    *a1 = *a1 - *a2;
    a1[1] = v2 - a2[1];
    a1[2] = v3 - a2[2];
}
