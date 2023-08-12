#include "types-win32.h"
//----- (1003E2C0) --------------------------------------------------------
unk00334 *__stdcall sub_1003E2C0() {
  int v0;           // ebx
  int v1;           // esi
  int v2;           // edi
  unk00334 *result; // eax

  v0 = gBitDepth;
  v1 = gWidth1;
  v2 = gHeight1;
  gUnk00334Ptr1 = sub_1001A550((CLSID *)&gGUID);
  result = meth_unk00334_1001A570(gUnk00334Ptr1, v1, v2, v0, 0, (unk00228 *)dword_118AC23C);
  gUnk00334Ptr0 = result;
  return result;
}
// 10B4E6E8: using guessed type int gWidth1;
// 10B4E6EC: using guessed type int gHeight1;
// 10B4E6F0: using guessed type int gBitDepth;
