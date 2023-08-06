#include "../../types-win32.h"
//----- (10074090) --------------------------------------------------------
float *__cdecl sub_10074090(float *a1, float *a2, float *a3)
{
  double v4; // st2
  double v5; // st4
  double v6; // st5
  double v7; // st7
  float *result; // eax
  float v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+10h] [ebp-4h]
  float v14; // [esp+1Ch] [ebp+8h]
  float v15; // [esp+1Ch] [ebp+8h]
  float v16; // [esp+20h] [ebp+Ch]

  v13 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  v14 = *a3;
  v16 = a3[1];
  v4 = v10 * v14;
  v9 = a3[2];
  v5 = v13 * v14 - v10 * v16;
  v6 = v12 * v14 - v11 * v16;
  v7 = v12 * v16 + v11 * v14 + v13 * v9;
  v15 = a3[3];
  result = a1;
  a1[3] = v6 + v10 * v9 + v13 * v15;
  a1[2] = v7 - v10 * v15;
  a1[1] = v4 + v13 * v16 - v12 * v9 + v11 * v15;
  *a1 = v5 - v11 * v9 - v12 * v15;
  return result;
}
