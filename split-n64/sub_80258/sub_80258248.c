#include "../../types-n64.h"
//----- (80258248) --------------------------------------------------------
void __fastcall sub_80258248(float *a1)
{
  float v1; // $f0
  float v2; // $f2
  float v3; // $f12
  float v4; // $f14
  float v5; // [sp+4h] [-Ch]
  float v6; // [sp+8h] [-8h]
  float v7; // [sp+Ch] [-4h]

  v5 = a1[10] * 0.5;
  v6 = a1[11] * 0.5;
  v7 = a1[12] * 0.5;
  v1 = a1[7];
  v2 = a1[8];
  v3 = a1[9];
  v4 = a1[6];
  a1[13] = (float)((float)((float)-v5 * v1) - (float)(v6 * v2)) - (float)(v3 * v7);
  a1[14] = (float)((float)(v4 * v5) + (float)(v6 * v3)) - (float)(v2 * v7);
  a1[15] = (float)((float)(v4 * v6) + (float)(v7 * v1)) - (float)(v3 * v5);
  a1[16] = (float)((float)(v4 * v7) + (float)(v5 * v2)) - (float)(v1 * v6);
}
