#include "types-win32.h"
//----- (100046D0) --------------------------------------------------------
int __cdecl sub_100046D0(_DWORD *a1, unk00214 *u214) {
  int result; // eax
  int *v3;    // eax
  int *v4;    // eax
  int v5;     // [esp-Ch] [ebp-14h]
  int v6;     // [esp-4h] [ebp-Ch]

  if (dword_10AA2894)
      return meth_unk00214_10073F40(u214);
  if (a1[3]) {
      v5 = meth_unk00214_10073F40(u214);
      v3 = meth_unk00214_GetField10(u214);
      sub_100360F0((int)a1, (int)v3, v5, (void *)1);
      result = meth_unk00214_10073F40(u214);
  } else {
      v6 = meth_unk00214_10073F40(u214);
      v4 = meth_unk00214_GetField10(u214);
      if (!sub_1000C4D0(*a1, a1[2], 1, 0, (int)v4, v6))
          return meth_unk00214_10073F40(u214);
      result = -1;
  }
  return result;
}
// 10AA2894: using guessed type int dword_10AA2894;
