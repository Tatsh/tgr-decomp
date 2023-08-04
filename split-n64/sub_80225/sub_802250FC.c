#include "../../types-n64.h"
//----- (802250FC) --------------------------------------------------------
void __fastcall sub_802250FC(float *a1, float *a2, float *a3)
{
  float v3; // $f0
  float v4; // $f2
  float v5; // $f12

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *a1 = (float)(a3[8] * v5) + (float)((float)(*a2 * *a3) + (float)(v4 * a3[4]));
  a1[1] = (float)(a3[9] * v5) + (float)((float)(v3 * a3[1]) + (float)(v4 * a3[5]));
  a1[2] = (float)(a3[10] * v5) + (float)((float)(v3 * a3[2]) + (float)(v4 * a3[6]));
}
