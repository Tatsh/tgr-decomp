#include "../../types-win32.h"
//----- (1003B170) --------------------------------------------------------
double __cdecl sub_1003B170(float *a1)
{
  float v2; // [esp+0h] [ebp-8h]

  v2 = a1[1] * a1[1] + a1[2] * a1[2] + *a1 * *a1;
  return sqrt_(v2);
}
