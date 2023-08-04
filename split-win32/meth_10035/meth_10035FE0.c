#include "../../types-win32.h"
//----- (10035FE0) --------------------------------------------------------
char *__thiscall meth_10035FE0(char *this)
{
  int v1; // edx
  char *result; // eax

  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 17) = 0;
  v1 = (this - (char *)&unk_106C6678) / 348;
  *((_DWORD *)this + 85) = v1;
  result = (char *)&unk_106C65A0 + 6 * v1;
  *((_DWORD *)this + 86) = result;
  return result;
}
