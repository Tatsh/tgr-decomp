#include "../../types-win32.h"
//----- (1006D850) --------------------------------------------------------
int __cdecl sub_1006D850(float *a1, float *a2)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  int v5; // eax
  int v6; // edx
  int *v7; // ecx
  double v8; // st7
  int v9; // esi
  int v10; // eax
  double v11; // st6
  float *v12; // ecx
  int v13; // eax
  double v14; // st6
  double v15; // st7
  int v17[3]; // [esp+Ch] [ebp-18h] BYREF
  float v18[3]; // [esp+18h] [ebp-Ch] BYREF
  float v19; // [esp+2Ch] [ebp+8h]

  v2 = 0;
  v3 = a2[1] - a1[1];
  v4 = a2[2] - a1[2];
  v18[0] = *a2 - *a1;
  v18[1] = v3;
  v18[2] = v4;
  do
  {
    if ( v18[v2] >= 0.0 )
      v5 = 1;
    else
      v5 = -1;
    v17[v2++] = v5;
  }
  while ( v2 < 3 );
  v6 = 0;
  v7 = v17;
  while ( 1 )
  {
    v8 = (double)*v7;
    if ( *(float *)((char *)v7 + (char *)a1 - (char *)v17) * v8 > 0.5 )
      break;
    if ( *(float *)((char *)v7 + (char *)a2 - (char *)v17) * v8 < -0.5 )
      return 0;
    ++v6;
    ++v7;
    if ( v6 >= 3 )
    {
      v9 = 2;
      while ( 1 )
      {
        v10 = (v9 - 1) % 3;
        v11 = a1[v10];
        v12 = &v18[v10];
        v13 = v9 % 3;
        v14 = v11 * v18[v13] - a1[v13] * *v12;
        v15 = ((double)v17[v13] * *v12 + (double)v17[(v9 - 1) % 3] * v18[v13]) * 0.5;
        v19 = v14;
        if ( v15 * v15 < v14 * v19 )
          break;
        if ( ++v9 - 2 >= 3 )
          return 1;
      }
      return 0;
    }
  }
  return 0;
}
