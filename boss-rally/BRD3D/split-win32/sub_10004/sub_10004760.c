#include "types-win32.h"
//----- (10004760) --------------------------------------------------------
int __cdecl sub_10004760(
    _DWORD *a1, char a2, char a3, char a4, char a5, char a6, int a7, int a8, char a9, char a10) {
  int v10;          // ebx
  unsigned int v11; // ebp
  int i;            // esi
  int v13;          // esi
  unk00214 u214;    // [esp+10h] [ebp-220h] BYREF
  int v16;          // [esp+22Ch] [ebp-4h]

  meth_unk00214_10073B40_init(&u214);
  v10 = 0;
  v16 = 0;
  sub_100048D0(&u214);
  meth_unk00214_10073D60(&u214, dword_10094294 | a10);
  meth_unk00214_10073D60(&u214, a2);
  meth_unk00214_10073D60(&u214, a9);
  meth_unk00214_10073D60(&u214, a3);
  meth_unk00214_10073D60(&u214, a4);
  meth_unk00214_10073D60(&u214, a5);
  meth_unk00214_10073D60(&u214, a6);
  meth_unk00214_10073E10(&u214, a7);
  v11 = a9 & 0x3F;
  if (v11 <= 2) {
      for (i = 0; i < 24; ++i) {
          if (v10) {
              meth_unk00214_10073D60(&u214, 0);
          } else {
              meth_unk00214_10073D60(&u214, *(_BYTE *)(i + a8));
              if (!*(_BYTE *)(i + a8))
                  v10 = 1;
          }
      }
  }
  if (v11 == 4)
      meth_unk00214_10073DC0(&u214, dword_1022AEFC);
  v13 = sub_100046D0(a1, &u214);
  v16 = -1;
  meth_DebugPrint(&u214);
  return v13;
}
// 10094294: using guessed type int dword_10094294;
