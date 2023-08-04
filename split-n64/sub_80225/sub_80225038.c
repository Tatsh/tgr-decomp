#include "../../types-n64.h"
//----- (80225038) --------------------------------------------------------
void __fastcall sub_80225038(float *a1, float *a2, float *a3)
{
  float v3; // $f0
  float v4; // $f2
  float v5; // $f12
  float v6; // $f14

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = 1.0 / (float)(a3[15] + (float)((float)((float)(*a2 * a3[3]) + (float)(v4 * a3[7])) + (float)(v5 * a3[11])));
  *a1 = (float)((float)(a3[8] * v5) + (float)((float)(*a2 * *a3) + (float)(v4 * a3[4]))) * v6;
  a1[1] = (float)((float)(a3[9] * v5) + (float)((float)(v3 * a3[1]) + (float)(v4 * a3[5]))) * v6;
  a1[2] = (float)((float)(a3[10] * v5) + (float)((float)(v3 * a3[2]) + (float)(v4 * a3[6]))) * v6;
}
