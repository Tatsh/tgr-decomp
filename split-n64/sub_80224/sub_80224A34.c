#include "../../types-n64.h"
//----- (80224A34) --------------------------------------------------------
float __fastcall sub_80224A34(float *a1, float *a2)
{
  float v2; // $f2

  v2 = a1[1] - a2[1];
  return sub_80261140((float)((float)(*a1 - *a2) * (float)(*a1 - *a2)) + (float)(v2 * v2));
}
