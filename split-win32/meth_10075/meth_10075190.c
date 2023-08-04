#include "../../types-win32.h"
//----- (10075190) --------------------------------------------------------
DWORD __thiscall meth_10075190(int this)
{
  DWORD result; // eax
  int v3; // edx

  if ( dword_118AB144 )
  {
    result = QueryPerformanceCounter((LARGE_INTEGER *)(this + 8));
    v3 = *(_DWORD *)(this + 4);
    *(_DWORD *)(this + 16) = *(_DWORD *)this;
    *(_DWORD *)(this + 20) = v3;
  }
  else
  {
    *(_DWORD *)(this + 28) = getTicks();
    result = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 32) = result;
  }
  return result;
}
// 118AB144: using guessed type int dword_118AB144;
