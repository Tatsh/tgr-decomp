#include "types-win32.h"
//----- (100067B0) --------------------------------------------------------
int __cdecl math_ClampFloor32768(float a1) {
  __int64 v1; // rax

  v1 = (__int64)floor(0.5 - a1 * -256.0);
  if ((int)v1 < -32768)
      LODWORD(v1) = -32768;
  if ((int)v1 > 0x7FFF)
      LODWORD(v1) = 0x7FFF;
  return v1;
}
