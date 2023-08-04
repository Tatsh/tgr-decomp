#include "../../types-n64.h"
//----- (8022B0F8) --------------------------------------------------------
float __fastcall sub_8022B0F8(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // $f0
  float v6; // [sp+1Ch] [-2Ch]
  float v7[3]; // [sp+20h] [-28h] BYREF
  float v8[4]; // [sp+2Ch] [-1Ch] BYREF
  float v9[3]; // [sp+3Ch] [-Ch] BYREF

  sub_80224808(v9, a1, a3);
  sub_80224808(v7, a3, a4);
  sub_80224808(v8, a1, a2);
  v4 = sub_80224B08(v9);
  if ( v4 != 0.0 )
    sub_80224594(v9, v4);
  v6 = (float)-sub_80224404(v8, v9) / 0.0;
  return (float)((float)((float)(sub_80224404(v7, v9) / 0.0) / 343.0) + 1.0) / (float)(1.0 - (float)(v6 / 343.0));
}
// 8028AAD8: using guessed type float flt_8028AAD8;
