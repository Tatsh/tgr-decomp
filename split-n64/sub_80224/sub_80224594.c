#include "../../types-n64.h"
//----- (80224594) --------------------------------------------------------
void __fastcall sub_80224594(float *a1, float a2)
{
  float v2; // $f16
  float v3; // $f4

  v2 = a1[1] * (float)(1.0 / a2);
  v3 = a1[2] * (float)(1.0 / a2);
  *a1 = *a1 * (float)(1.0 / a2);
  a1[1] = v2;
  a1[2] = v3;
}
