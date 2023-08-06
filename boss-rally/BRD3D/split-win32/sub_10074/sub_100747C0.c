#include "../../types-win32.h"
//----- (100747C0) --------------------------------------------------------
float *__cdecl sub_100747C0(float *a1, float *a2, float *a3)
{
  float *v3; // eax
  int v4; // ebp
  float *v5; // edx
  float *v6; // ecx
  int v7; // esi
  double v8; // st7
  float *result; // eax

  v3 = a1;
  v4 = 3;
  do
  {
    *v3 = 0.0;
    v5 = a3;
    v6 = (float *)((char *)v3 + (char *)a2 - (char *)a1);
    v7 = 3;
    do
    {
      v8 = *v5 * *v6;
      v6 += 4;
      ++v5;
      --v7;
      *v3 = v8 + *v3;
    }
    while ( v7 );
    ++v3;
    --v4;
  }
  while ( v4 );
  result = a1;
  *a1 = a2[12] + *a1;
  a1[1] = a2[13] + a1[1];
  a1[2] = a2[14] + a1[2];
  return result;
}
