#include "types-win32.h"
//----- (10044E20) --------------------------------------------------------
unk000C8 *sub_10044E20() {
  unk000C8 *v0;     // eax
  unk000C8 *result; // eax

  dword_10AA28CC = dword_10ACEE8C;
  dword_10AA28C8 = LODWORD(flt_10ACEE94);
  if (g_unkC8Ptr0) {
    gUnkC8Ptr1 = g_unkC8Ptr0;
    result = (unk000C8 *)1;
  } else {
    v0 = (unk000C8 *)malloc(0xC8u);
    if (v0)
      result = meth_unk000C8_10048710(v0);
    else
      result = 0;
    g_unkC8Ptr0 = result;
    gUnkC8Ptr1 = result;
    if (result) {
      result->lpFn0 = s_unk000C8_1005A6E0;
      g_unkC8Ptr0->lpFn0(g_unkC8Ptr0);
      gUnkC8Ptr1->field_C = 1;
      gUnkC8Ptr1->field_68 = 1;
      result = (unk000C8 *)1;
    }
  }
  return result;
}
// 10AA28C8: using guessed type int dword_10AA28C8;
// 10AA28CC: using guessed type int dword_10AA28CC;
// 10ACEE8C: using guessed type int dword_10ACEE8C;
