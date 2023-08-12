#include "types-win32.h"
//----- (10004590) --------------------------------------------------------
int __cdecl sub_10004590(int a1, char a2, char a3, char a4, char a5, int a6, char a7) {
  int v7;       // ebx
  int i;        // esi
  int v9;       // esi
  unk00214 v11; // [esp+Ch] [ebp-220h] BYREF
  int v12;      // [esp+228h] [ebp-4h]

  meth_unk00214_10073B40_init(&v11);
  v12 = 0;
  meth_unk00214_10073B80(&v11);
  meth_unk00214_10073DC0(&v11, 0);
  meth_unk00214_10073D60(&v11, a7 | dword_10094294 & 0xF | 0xE0);
  meth_unk00214_10073D60(&v11, a2);
  meth_unk00214_10073D60(&v11, gChosenCar);
  meth_unk00214_10073D60(&v11, a3);
  meth_unk00214_10073D60(&v11, a4);
  meth_unk00214_10073D60(&v11, a5);
  v7 = 0;
  for (i = 0; i < 24; ++i) {
      if (v7) {
          meth_unk00214_10073D60(&v11, 0);
      } else {
          meth_unk00214_10073D60(&v11, *(_BYTE *)(i + a6));
          if (!*(_BYTE *)(i + a6))
              v7 = 1;
      }
  }
  v9 = sub_100046D0((_DWORD *)a1, &v11);
  v12 = -1;
  meth_DebugPrint(&v11);
  return v9;
}
// 10094294: using guessed type int dword_10094294;
// 1022B34C: using guessed type int gChosenCar;
