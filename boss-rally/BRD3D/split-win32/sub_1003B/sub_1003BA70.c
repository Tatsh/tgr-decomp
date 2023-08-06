#include "../../types-win32.h"
//----- (1003BA70) --------------------------------------------------------
int __cdecl sub_1003BA70(float *a1, float *a2, float *a3, float *a4)
{
  double v6; // st7
  double v8; // st6
  int result; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // st6
  double v17; // st5
  double v18; // st7
  char v20; // c3
  double v21; // st6
  double v22; // st5
  double v23; // st7
  char v25; // c3
  float v26; // [esp+Ch] [ebp+4h]
  float v27; // [esp+10h] [ebp+8h]
  float v28; // [esp+10h] [ebp+8h]
  float v29; // [esp+14h] [ebp+Ch]
  float v30; // [esp+14h] [ebp+Ch]
  float v31; // [esp+18h] [ebp+10h]

  if ( *a1 <= (double)*a2 )
    v6 = *a2;
  else
    v6 = *a1;
  if ( *a3 >= (double)*a4 )
    v8 = *a4;
  else
    v8 = *a3;
  if ( v6 < v8 )
    return 0;
  if ( *a3 <= (double)*a4 )
    v10 = *a4;
  else
    v10 = *a3;
  if ( *a1 >= (double)*a2 )
    v11 = *a2;
  else
    v11 = *a1;
  if ( v10 < v11 )
    return 0;
  if ( a1[1] <= (double)a2[1] )
    v12 = a2[1];
  else
    v12 = a1[1];
  if ( a3[1] >= (double)a4[1] )
    v13 = a4[1];
  else
    v13 = a3[1];
  if ( v12 < v13 )
    return 0;
  if ( a3[1] <= (double)a4[1] )
    v14 = a4[1];
  else
    v14 = a3[1];
  if ( a1[1] >= (double)a2[1] )
    v15 = a2[1];
  else
    v15 = a1[1];
  if ( v14 < v15 )
    return 0;
  v16 = *a2 - *a1;
  v27 = a2[1] - a1[1];
  v17 = *a4 - *a1;
  v18 = a4[1] - a1[1];
  v26 = (*a3 - *a1) * v27 - (a3[1] - a1[1]) * v16;
  v28 = v17 * v27 - v18 * v16;
  if ( !v20 && v28 != 0.0 && v28 * v26 > 0.0 )
    return 0;
  v21 = *a4 - *a3;
  v22 = *a1 - *a3;
  v23 = a1[1] - a3[1];
  v29 = a4[1] - a3[1];
  v31 = v22 * v29 - v23 * v21;
  v30 = (*a2 - *a3) * v29 - (a2[1] - a3[1]) * v21;
  if ( !v25 && v30 != 0.0 && v30 * v31 > 0.0 )
    return 0;
  result = 2;
  if ( v26 - v28 != 0.0 )
    result = 1;
  return result;
}
// 1003BBBB: variable 'v20' is possibly undefined
// 1003BC41: variable 'v25' is possibly undefined
