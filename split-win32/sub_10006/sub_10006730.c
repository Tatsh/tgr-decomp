#include "../../types-win32.h"
//----- (10006730) --------------------------------------------------------
int __cdecl sub_10006730(float a1)
{
  __int64 v1; // rax

  v1 = (__int64)floor(0.5 - a1 * -2.0);
  if ( (int)v1 < -8388608 )
    LODWORD(v1) = -8388608;
  if ( (int)v1 > 0x7FFFFF )
    LODWORD(v1) = 0x7FFFFF;
  return v1;
}
