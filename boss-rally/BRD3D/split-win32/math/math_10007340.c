#include "types-win32.h"
//----- (10007340) --------------------------------------------------------
double __cdecl math_10007340(int a1) {
  double result; // st7

  if ((a1 & 0x800000) != 0)
      result = (double)(int)(a1 | 0xFF000000) * 0.5;
  else
      result = (double)(a1 & 0xFFFFFF) * 0.5;
  return result;
}
