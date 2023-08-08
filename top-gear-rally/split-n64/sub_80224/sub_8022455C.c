#include "types-n64.h"
//----- (8022455C) --------------------------------------------------------
void __fastcall sub_8022455C(float *a1, float *a2, float a3) {
    *a1 = *a2 * (float)(1.0 / a3);
    a1[1] = a2[1] * (float)(1.0 / a3);
    a1[2] = a2[2] * (float)(1.0 / a3);
}
