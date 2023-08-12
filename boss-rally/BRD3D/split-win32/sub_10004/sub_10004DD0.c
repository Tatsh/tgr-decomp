#include "types-win32.h"
//----- (10004DD0) --------------------------------------------------------
int __cdecl sub_10004DD0(_DWORD *a1, unk00214 *a2) {
  int result; // eax
  int *v3;    // eax
  int *v4;    // eax
  int v5;     // [esp-Ch] [ebp-14h]
  int v6;     // [esp-4h] [ebp-Ch]

  if (dword_10AA2894)
      goto LABEL_2;
  if (a1[3]) {
      v5 = meth_unk00214_10073F40(a2);
      v3 = meth_unk00214_GetField10(a2);
      sub_100360F0((int)a1, (int)v3, v5, (void *)1);
  }
  v6 = meth_unk00214_10073F40(a2);
  v4 = meth_unk00214_GetField10(a2);
  if (!sub_1000C4D0(*a1, a1[2], 0, 0, (int)v4, v6))
  LABEL_2:
      result = meth_unk00214_10073F40(a2);
  else
      result = -1;
  return result;
}
// 10AA2894: using guessed type int dword_10AA2894;
