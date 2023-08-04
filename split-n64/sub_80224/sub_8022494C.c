#include "../../types-n64.h"
//----- (8022494C) --------------------------------------------------------
void __fastcall sub_8022494C(float *a1, float *a2, float *a3, float a4)
{
  *a1 = (float)(*a3 * a4) + *a2;
  a1[1] = (float)(a3[1] * a4) + a2[1];
  a1[2] = (float)(a3[2] * a4) + a2[2];
}
