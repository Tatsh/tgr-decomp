#include "types-win32.h"
//----- (1003ACC0) --------------------------------------------------------
float *__cdecl sub_1003ACC0(float *a1, float *a2) {
  float *result; // eax

  result = a2;
  *a1 = -*a2;
  a1[1] = -a2[1];
  a1[2] = -a2[2];
  return result;
}
