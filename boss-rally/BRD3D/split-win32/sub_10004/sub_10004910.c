#include "types-win32.h"
//----- (10004910) --------------------------------------------------------
int __cdecl sub_10004910(_DWORD *a1, int a2) {
  int v2;       // esi
  unk00214 a1a; // [esp+4h] [ebp-220h] BYREF
  int v5;       // [esp+220h] [ebp-4h]

  meth_unk00214_10073B40_init(&a1a);
  v5 = 0;
  sub_100048D0(&a1a);
  meth_unk00214_10073D60(&a1a, dword_10094294 & 0xF | 0xD0);
  meth_unk00214_10073DC0(&a1a, a2);
  v2 = sub_100046D0(a1, &a1a);
  v5 = -1;
  meth_DebugPrint(&a1a);
  return v2;
}
// 10094294: using guessed type int dword_10094294;
