#include "types-win32.h"
//----- (10028630) --------------------------------------------------------
int __cdecl sub_10028630(int a1) {
  int v1;  // esi
  char *i; // ecx

  v1 = 0;
  if (!dword_105553F0)
    return -1;
  for (i = (char *)dword_1057543C + 84;
       *((_DWORD *)i - 1) != *(_DWORD *)(a1 + 76) || *(_DWORD *)i != *(_DWORD *)(a1 + 80) ||
       *((_DWORD *)i + 134) == 1 && *(_DWORD *)(a1 + 616) == 1 &&
           (i[580] != *(_BYTE *)(a1 + 660) || i[581] != *(_BYTE *)(a1 + 661) ||
            i[582] != *(_BYTE *)(a1 + 662) || i[583] != *(_BYTE *)(a1 + 663) ||
            i[584] != *(_BYTE *)(a1 + 664) || i[585] != *(_BYTE *)(a1 + 665) ||
            i[586] != *(_BYTE *)(a1 + 666) || i[587] != *(_BYTE *)(a1 + 667));
       i += 696) {
    if (++v1 >= (unsigned int)dword_105553F0)
      return -1;
  }
  return v1;
}
// 105553F0: using guessed type int dword_105553F0;
