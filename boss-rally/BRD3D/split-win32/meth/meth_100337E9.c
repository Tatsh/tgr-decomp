#include "types-win32.h"
//----- (100337E9) --------------------------------------------------------
int __thiscall meth_100337E9(void *this) {
  int result; // eax
  int i;      // [esp+0h] [ebp-4h]

  result = sub_100337AE((unk06594 *)this);
  for (i = 0; i < 1; ++i) {
    meth_10035CE0((int *)&gUnk06594.gap1C8[0x15C * i + 0x3130]);
    meth_10035FC0(&gUnk06594.gap1C8[348 * i + 12592]);
    result = i + 1;
  }
  return result;
}
