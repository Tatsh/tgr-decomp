#include "../../types-n64.h"
//----- (802248FC) --------------------------------------------------------
void __fastcall sub_802248FC(float *a1, float *a2, float *a3, float a4)
{
  *a1 = *a3 + (float)((float)(*a2 - *a3) * a4);
  a1[1] = a3[1] + (float)((float)(a2[1] - a3[1]) * a4);
  a1[2] = a3[2] + (float)((float)(a2[2] - a3[2]) * a4);
}
