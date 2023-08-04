#include "../../types-n64.h"
//----- (802244FC) --------------------------------------------------------
void __fastcall sub_802244FC(float *a1, float *a2, float a3)
{
  *a1 = *a2 * a3;
  a1[1] = a2[1] * a3;
  a1[2] = a2[2] * a3;
}
