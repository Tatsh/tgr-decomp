#include "types-n64.h"
//----- (8025B704) --------------------------------------------------------
float __fastcall sub_8025B704(float *a1, float a2, float *a3) {
    return (float)((float)(a3[2] * a1[2]) + (float)((float)(*a1 * *a3) + (float)(a1[1] * a3[1]))) +
           a2;
}
