#include "types-win32.h"
//----- (1003ED40) --------------------------------------------------------
int __cdecl s_unk1E214_1003ED40(unk1E214 *a1) {
  int width;    // [esp+4h] [ebp-10h] BYREF
  int height;   // [esp+8h] [ebp-Ch] BYREF
  int bitDepth; // [esp+Ch] [ebp-8h] BYREF
  int a5;       // [esp+10h] [ebp-4h] BYREF

  meth_unk00334_1001AC80(
      *((unk00334 **)Base + **(_DWORD **)(dword_10AA29EC + 8 * dword_10AA2A30 + 122440)),
      &width,
      &height,
      &bitDepth,
      &a5);
  dword_10B4E6F4 = a5;
  dword_10AA2864 = dword_10AA2A30;
  gWidth1 = width;
  gHeight1 = height;
  gBitDepth = bitDepth;
  gUnk00334Ptr0 =
      meth_unk00334_1001A570(gUnk00334Ptr1, width, height, bitDepth, 0, (unk00228 *)dword_118AC23C);
  s_unk1E214_10046670(a1);
  return 0;
}
// 10AA2864: using guessed type int dword_10AA2864;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA2A30: using guessed type int dword_10AA2A30;
// 10B4E6E8: using guessed type int gWidth1;
// 10B4E6EC: using guessed type int gHeight1;
// 10B4E6F0: using guessed type int gBitDepth;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
