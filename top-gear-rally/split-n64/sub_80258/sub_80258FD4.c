#include "../../types-n64.h"
//----- (80258FD4) --------------------------------------------------------
int __fastcall sub_80258FD4(float *a1, float *a2, float *a3)
{
  int v4; // $s2
  float *v5; // $t0
  int v6; // $a3
  float *v7; // $t1
  float *v8; // $v0
  float *v9; // $a0
  float *v10; // $a1
  int v11; // $v1
  float v12; // $f14
  float v13; // $f18
  float v15[5]; // [sp+44h] [-14h] BYREF

  v4 = (int)a2;
  v5 = a2;
  v6 = 0;
  v7 = a2;
  do
  {
    v8 = v5;
    v9 = &a1[v6];
    v10 = a3;
    v11 = 1;
    *v5 = a1[v6];
    *v5 = *v5 * *a3;
    while ( 1 )
    {
      v9 += 4;
      ++v11;
      *++v8 = *v9;
      v12 = v10[1];
      ++v10;
      v13 = *v8 * v12;
      if ( v11 == 3 )
        break;
      *v8 = v13;
    }
    *v8 = v13;
    ++v6;
    v5 += 4;
    v7 += 4;
    *(v7 - 1) = 0.0;
  }
  while ( v6 != 3 );
  *(float *)(v4 + 60) = 1.0;
  v15[0] = -a1[12];
  v15[1] = -a1[13];
  v15[2] = -a1[14];
  return sub_80258758((float *)(v4 + 48), v4, v15);
}
