#include "../../types-n64.h"
//----- (8022591C) --------------------------------------------------------
BOOL __fastcall sub_8022591C(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v6[3]; // [sp+18h] [-48h] BYREF
  float v7[3]; // [sp+24h] [-3Ch] BYREF
  float v8[3]; // [sp+30h] [-30h] BYREF
  float v9[3]; // [sp+3Ch] [-24h] BYREF
  float v10[3]; // [sp+48h] [-18h] BYREF
  float v11[3]; // [sp+54h] [-Ch] BYREF

  sub_80224808(v9, a3, a2);
  sub_80224808(v10, a1, a3);
  sub_8022439C(v6, v9, v10);
  if ( sub_80224404(v6, a5) < 0.0 )
    return 0;
  sub_80224808(v8, a4, a3);
  sub_8022439C(v6, v8, v10);
  if ( sub_80224404(v6, a5) < 0.0 )
    return 0;
  sub_80224808(v7, a2, a4);
  sub_80224808(v11, a1, a2);
  sub_8022439C(v6, v7, v11);
  return sub_80224404(v6, a5) >= 0.0;
}
