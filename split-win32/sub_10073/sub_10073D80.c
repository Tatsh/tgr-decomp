#include "../../types-win32.h"
//----- (10073D80) --------------------------------------------------------
int __thiscall sub_10073D80(_DWORD *this, __int16 a2)
{
  int v3; // edx
  int v4; // ecx
  int result; // eax

  sub_10073F20(this);
  *(_BYTE *)(this[4] + this[3]) = HIBYTE(a2);
  v3 = this[4];
  v4 = this[3] + 1;
  this[3] = v4;
  *(_BYTE *)(v3 + v4) = a2;
  result = this[3] + 1;
  this[3] = result;
  return result;
}
