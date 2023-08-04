#include "../../types-n64.h"
//----- (802245F0) --------------------------------------------------------
void __fastcall sub_802245F0(int a1, float *a2, float *a3)
{
  float v3; // $f0
  float v4; // [sp+1Ch] [-Ch]
  float v5; // [sp+20h] [-8h]
  float v6; // [sp+24h] [-4h]

  v6 = *a3 - *a2;
  v5 = a3[1] - a2[1];
  v4 = a3[2] - a2[2];
  v3 = sub_80261140((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v4 * v4));
  if ( v3 == 0.0 )
  {
    *(float *)a1 = 0.0;
    *(float *)(a1 + 4) = 0.0;
    *(_DWORD *)(a1 + 8) = 1065353216;
  }
  else
  {
    *(float *)a1 = v6 * (float)(1.0 / v3);
    *(float *)(a1 + 4) = v5 * (float)(1.0 / v3);
    *(float *)(a1 + 8) = v4 * (float)(1.0 / v3);
  }
}
