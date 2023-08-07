#include "../../types-n64.h"
//----- (80224404) --------------------------------------------------------
float __fastcall sub_80224404(float *a1, float *a2) {
    return (float)(a2[2] * a1[2]) + (float)((float)(*a1 * *a2) + (float)(a1[1] * a2[1]));
}
