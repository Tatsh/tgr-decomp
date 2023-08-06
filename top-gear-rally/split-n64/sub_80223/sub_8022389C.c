#include "../../types-n64.h"
//----- (8022389C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
float *__fastcall sub_8022389C(float a1)
{
  float *result; // $v0

  result = &flt_8028B754;
  flt_8028B754 = a1;
  flt_8028B75C = 0.0;
  return result;
}
// 802238B4: write access to const memory at 8028B75C has been detected
// 802238A4: write access to const memory at 8028B754 has been detected
// 8028B754: using guessed type float flt_8028B754;
// 8028B75C: using guessed type float flt_8028B75C;
