#include "types-n64.h"
//----- (802249D4) --------------------------------------------------------
void __fastcall sub_802249D4(float *a1, float *a2, float *a3) {
    *a1 = (float)(*a3 + *a2) * 0.5;
    a1[1] = (float)(a3[1] + a2[1]) * 0.5;
    a1[2] = (float)(a3[2] + a2[2]) * 0.5;
}
