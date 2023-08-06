#include "../../types-win32.h"
//----- (10073D60) --------------------------------------------------------
int __thiscall meth_10073D60(_DWORD *this, char a2)
{
  int result; // eax

  meth_10073F20(this);
  *(_BYTE *)(this[4] + this[3]) = a2;
  result = this[3] + 1;
  this[3] = result;
  return result;
}
