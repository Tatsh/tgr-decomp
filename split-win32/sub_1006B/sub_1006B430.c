#include "../../types-win32.h"
//----- (1006B430) --------------------------------------------------------
float *__cdecl sub_1006B430(float *a1, float *a2, float *a3)
{
  int v4; // edx
  float v5; // eax
  double v6; // st6
  float *result; // eax
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // st4
  double v19; // st7
  double v20; // rt1
  float v21; // [esp+4h] [ebp-18h] BYREF
  float v22; // [esp+8h] [ebp-14h]
  float v23; // [esp+Ch] [ebp-10h]
  int v24[2]; // [esp+10h] [ebp-Ch] BYREF
  float v25; // [esp+18h] [ebp-4h]

  v4 = *((_DWORD *)a3 + 31);
  v5 = a3[32];
  v24[0] = (int)a3[30];
  v24[1] = v4;
  v25 = v5;
  sub_10074770(&v21, (int)(a2 + 47), (float *)v24);
  v6 = v23;
  result = a1;
  v8 = v22;
  v9 = v21;
  v10 = v23;
  v11 = v21;
  v12 = v22;
  *a1 = a2[33];
  a1[1] = a2[34];
  a1[2] = a2[35];
  v13 = v11 * a2[42] - v6 * a2[40];
  v14 = v8 * a2[40] - v9 * a2[41];
  v15 = v12;
  v16 = v10 * a2[41];
  v17 = v15 * a2[42];
  v25 = v14;
  v18 = v16 - v17;
  v19 = v14 + a1[2];
  v20 = v18 + *a1;
  a1[1] = v13 + a1[1];
  a1[2] = v19;
  *a1 = v20;
  return result;
}
