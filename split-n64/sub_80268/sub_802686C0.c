#include "../../types-n64.h"
//----- (802686C0) --------------------------------------------------------
void __fastcall sub_802686C0(float *a1, float *a2, float *a3)
{
  float v3; // $f0

  v3 = sub_80261140((float)(*a3 * *a3) + (float)((float)(*a1 * *a1) + (float)(*a2 * *a2)));
  *a1 = *a1 * (float)(1.0 / v3);
  *a2 = *a2 * (float)(1.0 / v3);
  *a3 = *a3 * (float)(1.0 / v3);
}
