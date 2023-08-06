#include "../../types-n64.h"
//----- (80258C24) --------------------------------------------------------
int __fastcall sub_80258C24(int a1)
{
  float v1; // $f2
  float v2; // $f0
  int v3; // $s0
  int v4; // $a1
  int v5; // $a3
  int v6; // $v0
  int v7; // $v1
  int result; // $v0
  float v9; // $f14
  float v10; // $f12
  float v11; // $f4
  float v12; // $f6
  float v13; // $f4
  float v14; // [sp+2Ch] [-14h]

  v1 = 0.0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 412) = 0;
  *(float *)(a1 + 452) = 0.0;
  v2 = 1.0;
  v3 = a1;
  v4 = 0;
  v5 = a1;
  *(float *)(a1 + 460) = 0.0;
  *(float *)(a1 + 464) = 0.0;
  *(float *)(a1 + 448) = 0.17399999;
  *(float *)(a1 + 456) = 0.5;
  do
  {
    v6 = 0;
    v7 = v5;
    do
    {
      if ( 4 * v4 == v6 )
        *(float *)(v7 + 48) = 1.0;
      else
        *(float *)(v7 + 48) = 0.0;
      v6 += 4;
      v7 += 4;
    }
    while ( v6 != 12 );
    ++v4;
    v5 += 12;
  }
  while ( v4 != 3 );
  result = *(_DWORD *)(a1 + 28);
  if ( result )
  {
    if ( result != 1 )
      goto LABEL_13;
    v9 = *(float *)(a1 + 40);
  }
  else
  {
    v9 = *(float *)(a1 + 40);
  }
  v14 = *(float *)(a1 + 36) * *(float *)(a1 + 36);
  v10 = 0.083333336 * *(float *)(a1 + 44);
  v11 = *(float *)(a1 + 32);
  *(float *)(a1 + 48) = (float)((float)(v9 * v9) + v14) * v10;
  *(float *)(a1 + 64) = (float)((float)(v9 * v9) + (float)(v11 * v11)) * v10;
  *(float *)(a1 + 80) = (float)(v14 + (float)(v11 * v11)) * v10;
  sub_80258070();
  v2 = 1.0;
  v1 = 0.0;
  result = *(_DWORD *)(v3 + 28);
LABEL_13:
  if ( result != 2 )
  {
    v12 = *(float *)(v3 + 80);
    v13 = v2 / *(float *)(v3 + 64);
    *(float *)(v3 + 84) = v2 / *(float *)(v3 + 48);
    *(float *)(v3 + 100) = v13;
    *(float *)(v3 + 116) = v2 / v12;
  }
  *(float *)(v3 + 468) = v1;
  *(float *)(v3 + 472) = v1;
  return result;
}
