#include "../../types-win32.h"
//----- (1003B050) --------------------------------------------------------
float *__cdecl sub_1003B050(float *a1, float *a2, float *a3)
{
  float *result; // eax

  result = a3;
  *a1 = (*a3 + *a2) * 0.5;
  a1[1] = (a2[1] + a3[1]) * 0.5;
  a1[2] = (a3[2] + a2[2]) * 0.5;
  return result;
}
