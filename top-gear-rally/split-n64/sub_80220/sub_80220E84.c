#include "../../types-n64.h"
//----- (80220E84) --------------------------------------------------------
void __fastcall sub_80220E84(int a1)
{
  int v1; // $t6
  float *v3; // $a0
  float v4; // $f6
  float v5; // $f8
  float v6; // $f0
  float v7; // $f2
  float v8; // $f0
  float v9; // $f0
  float v10; // $a2
  float v11; // $f0
  float v12; // $f0

  v1 = *(_DWORD *)(a1 + 3916);
  v3 = (float *)(a1 + 8084);
  if ( v1 )
  {
    sub_8022494C(v3, (float *)(a1 + 48), (float *)(a1 + 32), 1.1);
    return;
  }
  v4 = *(float *)(a1 + 52);
  v5 = *(float *)(a1 + 56);
  *(_DWORD *)(a1 + 8084) = *(_DWORD *)(a1 + 48);
  *(float *)(a1 + 8088) = v4;
  *(float *)(a1 + 8092) = v5 + 0.66000003;
  v6 = sub_80224B08((float *)(a1 + 488));
  v7 = 0.0;
  if ( v6 >= 3.5 )
  {
    if ( v6 < 7.0 )
      v7 = 4.0 - (float)(v6 * 0.5714286);
    v8 = *(float *)(a1 + 8080);
  }
  else
  {
    v7 = 2.0;
    v8 = *(float *)(a1 + 8080);
  }
  if ( v8 >= v7 )
  {
    if ( v7 >= v8 )
    {
      v10 = v8;
      goto LABEL_18;
    }
    *(float *)(a1 + 8080) = v8 - 0.1;
    v12 = *(float *)(a1 + 8080);
    if ( v12 >= v7 )
    {
      v10 = v12;
      goto LABEL_18;
    }
    *(float *)(a1 + 8080) = v7;
    v11 = *(float *)(a1 + 8080);
LABEL_17:
    v10 = v11;
    goto LABEL_18;
  }
  *(float *)(a1 + 8080) = v8 + 0.1;
  v9 = *(float *)(a1 + 8080);
  if ( v7 < v9 )
  {
    *(float *)(a1 + 8080) = v7;
    v11 = *(float *)(a1 + 8080);
    goto LABEL_17;
  }
  v10 = v9;
LABEL_18:
  sub_80224990((float *)(a1 + 8084), (float *)a1, v10);
}
// 8026FF18: using guessed type int dword_8026FF18;
