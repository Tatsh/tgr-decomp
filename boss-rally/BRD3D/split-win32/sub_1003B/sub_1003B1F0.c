#include "../../types-win32.h"
//----- (1003B1F0) --------------------------------------------------------
float *__cdecl sub_1003B1F0(float *a1, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st5

  result = a3;
  v4 = *a2;
  v5 = a2[2];
  v6 = a2[1];
  v7 = 1.0 / (a3[3] * v4 + a3[11] * v5 + a3[7] * v6 + a3[15]);
  *a1 = (v4 * *a3 + a3[8] * v5 + a3[4] * v6 + a3[12]) * v7;
  a1[1] = (a3[9] * v5 + a3[1] * v4 + a3[5] * v6 + a3[13]) * v7;
  a1[2] = (a3[10] * v5 + a3[2] * v4 + a3[6] * v6 + a3[14]) * v7;
  return result;
}
