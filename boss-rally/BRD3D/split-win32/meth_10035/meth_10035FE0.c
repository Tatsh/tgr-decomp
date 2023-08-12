#include "types-win32.h"
//----- (10035FE0) --------------------------------------------------------
char *__thiscall meth_10035FE0(char *this) {
  int v1;       // edx
  char *result; // eax

  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 17) = 0;
  v1 = (this - &gUnk06594.gap1C8[12592]) / 348;
  *((_DWORD *)this + 85) = v1;
  result = &gUnk06594.gap1C8[6 * v1 + 12376];
  *((_DWORD *)this + 86) = result;
  return result;
}
