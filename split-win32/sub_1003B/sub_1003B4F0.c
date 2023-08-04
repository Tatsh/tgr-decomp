#include "../../types-win32.h"
//----- (1003B4F0) --------------------------------------------------------
int __cdecl sub_1003B4F0(int a1, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st6
  double v6; // st5
  double v7; // st5
  double v8; // st7
  double v9; // st7
  int result; // eax
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // st6
  double v15; // st7
  int i; // ecx
  int j; // eax
  int v18; // edi
  float v19; // [esp+4h] [ebp-8h]
  float v20; // [esp+8h] [ebp-4h]
  float v21; // [esp+14h] [ebp+8h]
  float v22; // [esp+14h] [ebp+8h]

  v3 = 0.0;
  v19 = a2[5] * a2[10];
  v4 = *a2 * v19;
  v21 = v4;
  if ( v4 < 0.0 )
  {
    v3 = v21;
    v5 = 0.0;
  }
  else
  {
    v5 = v21;
  }
  v6 = a2[6] * a2[8] * a2[1];
  if ( v6 < 0.0 )
    v3 = v3 + v6;
  else
    v5 = v5 + v6;
  v7 = a2[4] * a2[2] * a2[9];
  if ( v7 < 0.0 )
    v3 = v3 + v7;
  else
    v5 = v5 + v7;
  if ( -(a2[2] * a2[8] * a2[5]) < 0.0 )
    v3 = v3 - a2[2] * a2[8] * a2[5];
  else
    v5 = v5 - a2[2] * a2[8] * a2[5];
  if ( -(a2[4] * a2[1] * a2[10]) < 0.0 )
    v3 = v3 - a2[4] * a2[1] * a2[10];
  else
    v5 = v5 - a2[4] * a2[1] * a2[10];
  v20 = a2[9] * a2[6];
  if ( -(*a2 * v20) < 0.0 )
    v3 = v3 - *a2 * v20;
  else
    v5 = v5 - *a2 * v20;
  v22 = v3 + v5;
  v8 = v22 / (v5 - v3);
  if ( v8 < 0.0 )
    v8 = -v8;
  if ( v22 == 0.0 || v8 < 1.0e-15 )
  {
    for ( i = 0; i < 4; ++i )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = j + 4 * i;
        if ( i == j )
          *(_DWORD *)(a1 + 4 * v18) = 1065353216;
        else
          *(_DWORD *)(a1 + 4 * v18) = 0;
      }
    }
    result = 1;
  }
  else
  {
    v9 = 1.0 / v22;
    *(float *)a1 = (v19 - v20) * v9;
    *(float *)(a1 + 16) = -((a2[4] * a2[10] - a2[6] * a2[8]) * v9);
    *(float *)(a1 + 32) = (a2[4] * a2[9] - a2[8] * a2[5]) * v9;
    *(float *)(a1 + 4) = -((a2[1] * a2[10] - a2[2] * a2[9]) * v9);
    *(float *)(a1 + 20) = (*a2 * a2[10] - a2[2] * a2[8]) * v9;
    *(float *)(a1 + 36) = -((*a2 * a2[9] - a2[8] * a2[1]) * v9);
    *(float *)(a1 + 8) = (a2[6] * a2[1] - a2[2] * a2[5]) * v9;
    *(float *)(a1 + 24) = -((*a2 * a2[6] - a2[4] * a2[2]) * v9);
    result = 1;
    *(float *)(a1 + 40) = (*a2 * a2[5] - a2[4] * a2[1]) * v9;
    v11 = *(float *)(a1 + 4);
    v12 = *(float *)(a1 + 20);
    v13 = *(float *)(a1 + 36);
    *(float *)(a1 + 48) = -(*(float *)a1 * a2[12] + *(float *)(a1 + 32) * a2[14] + *(float *)(a1 + 16) * a2[13]);
    *(float *)(a1 + 52) = -(v11 * a2[12] + v12 * a2[13] + v13 * a2[14]);
    v14 = a2[14] * *(float *)(a1 + 40);
    v15 = a2[12] * *(float *)(a1 + 8) + a2[13] * *(float *)(a1 + 24);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 60) = 1065353216;
    *(float *)(a1 + 56) = -(v15 + v14);
  }
  return result;
}
