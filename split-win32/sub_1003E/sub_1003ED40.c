#include "../../types-win32.h"
//----- (1003ED40) --------------------------------------------------------
int __usercall sub_1003ED40@<eax>(int a1@<edi>, int a2)
{
  int v3; // [esp+4h] [ebp-10h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF
  int v6; // [esp+10h] [ebp-4h] BYREF

  sub_1001AC80(*((__unk0 **)Base + **(_DWORD **)(dword_10AA29EC + 8 * dword_10AA2A30 + 122440)), &v3, &v4, &v5, &v6);
  dword_10B4E6F4 = v6;
  dword_10AA2864 = dword_10AA2A30;
  dword_10B4E6E8 = v3;
  dword_10B4E6EC = v4;
  dword_10B4E6F0 = v5;
  dword_118AC240 = (int)sub_1001A570(a1, dword_118AC238, v3, v4, v5, 0, (IID *)dword_118AC23C);
  sub_10046670(a2);
  return 0;
}
// 10046670: using guessed type _DWORD __cdecl sub_10046670(_DWORD);
// 10AA2864: using guessed type int dword_10AA2864;
// 10AA29EC: using guessed type int dword_10AA29EC;
// 10AA2A30: using guessed type int dword_10AA2A30;
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F4: using guessed type int dword_10B4E6F4;
// 118AC23C: using guessed type int dword_118AC23C;
// 118AC240: using guessed type int dword_118AC240;
