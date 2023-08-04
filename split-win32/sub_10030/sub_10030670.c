#include "../../types-win32.h"
//----- (10030670) --------------------------------------------------------
double *__cdecl sub_10030670(double *a1, double *a2, double *a3)
{
  double *result; // eax

  result = a3;
  *a3 = a2[2] * a1[1] - a1[2] * a2[1];
  a3[1] = a1[2] * *a2 - a2[2] * *a1;
  a3[2] = a2[1] * *a1 - a1[1] * *a2;
  return result;
}
