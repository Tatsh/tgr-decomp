#include "../../types-win32.h"
//----- (10047CB0) --------------------------------------------------------
int __thiscall sub_10047CB0(int this, int a2)
{
  double v2; // st7
  int v3; // edx
  int result; // eax

  v2 = (*(float *)(this + 14368) - *(float *)(this + 14364)) / (double)a2;
  v3 = *(_DWORD *)(this + 64);
  *(_DWORD *)(this + 48) = *(_DWORD *)(this + 60);
  *(_DWORD *)(this + 56) = *(_DWORD *)(this + 68);
  *(_DWORD *)(this + 52) = v3;
  result = 1;
  *(float *)(this + 14372) = v2;
  return result;
}
