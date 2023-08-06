#include "../../types-n64.h"
//----- (8025813C) --------------------------------------------------------
void __fastcall sub_8025813C(float *a1)
{
  float v1; // $f0
  float v2; // $f4
  float v3; // $f6
  float v4; // $f18
  float v5; // $f4

  v1 = sub_80261140((float)(a1[3] * a1[3]) + (float)((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1]))
                                                   + (float)(a1[2] * a1[2])));
  v2 = a1[1];
  v3 = a1[2];
  *a1 = *a1 * (float)(1.0 / v1);
  v4 = v2 * (float)(1.0 / v1);
  v5 = a1[3] * (float)(1.0 / v1);
  a1[1] = v4;
  a1[2] = v3 * (float)(1.0 / v1);
  a1[3] = v5;
}
