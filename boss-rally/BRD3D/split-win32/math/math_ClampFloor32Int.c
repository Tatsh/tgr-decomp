#include "types-win32.h"
//----- (100065A0) --------------------------------------------------------
int __cdecl math_ClampFloor32Int(float a1) {
  int v1; // eax

  *(_QWORD *)&v1 = (__int64)floor(0.5 - a1 * 128.0);
  if (v1 < -32)
      v1 = -32;
  if (v1 > 31)
      v1 = 31;
  return v1;
}
