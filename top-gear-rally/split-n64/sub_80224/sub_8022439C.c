#include "../../types-n64.h"
//----- (8022439C) --------------------------------------------------------
void __fastcall sub_8022439C(float *a1, float *a2, float *a3)
{
  float v3; // $f2
  float v4; // $f12
  float v5; // $f16
  float v6; // $f8
  float v7; // $f4
  float v8; // $f6

  v3 = *a2;
  v4 = a3[1];
  v5 = a2[1];
  v6 = a3[2];
  v7 = a2[2];
  v8 = v7 * *a3;
  a1[2] = (float)(*a2 * v4) - (float)(*a3 * v5);
  a1[1] = v8 - (float)(v6 * v3);
  *a1 = (float)(v5 * v6) - (float)(v4 * v7);
}
