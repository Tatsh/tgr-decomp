#include "../../types-win32.h"
//----- (10073C40) --------------------------------------------------------
int __thiscall meth_10073C40(_DWORD *this)
{
  int v2; // edi
  unsigned __int8 *v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // ecx

  meth_10073D20(this);
  v2 = this[1];
  v3 = (unsigned __int8 *)(this[4] + v2);
  v4 = v3[1] | ((char)*v3 << 8);
  v5 = v3[2];
  v6 = v3[3];
  this[1] = v2 + 4;
  return v6 | ((v5 | (v4 << 8)) << 8);
}
