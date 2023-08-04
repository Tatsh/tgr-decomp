#include "../../types-n64.h"
//----- (80220FF4) --------------------------------------------------------
void __fastcall sub_80220FF4(int a1, int a2)
{
  float v4; // $f0
  float v5; // $f12
  int v6; // $t6
  float v7; // $f0
  float v8[3]; // [sp+34h] [-Ch] BYREF

  sub_80224808(v8, (float *)(a1 + 8084), (float *)(a2 + 48));
  v4 = sub_80224B08(v8);
  if ( v4 == 0.0 )
  {
    v7 = sub_80224B08((float *)a2);
    v5 = 0.0;
    if ( v7 == 0.0 )
    {
      *(_DWORD *)a2 = *(_DWORD *)a1;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    }
    v6 = *(_DWORD *)(a1 + 3916);
  }
  else
  {
    sub_8022455C((float *)a2, v8, v4);
    v5 = 0.0;
    v6 = *(_DWORD *)(a1 + 3916);
  }
  if ( v6 )
  {
    sub_8022439C((float *)(a2 + 16), (float *)(a1 + 32), (float *)a2);
  }
  else
  {
    v8[0] = v5;
    v8[1] = v5;
    v8[2] = 1.0;
    sub_8022439C((float *)(a2 + 16), v8, (float *)a2);
  }
  sub_8022439C((float *)(a2 + 32), (float *)a2, (float *)(a2 + 16));
}
