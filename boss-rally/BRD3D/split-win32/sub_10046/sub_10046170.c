#include "types-win32.h"
//----- (10046170) --------------------------------------------------------
unk000C8 *sub_10046170() {
  unk000C8 *v0;     // eax
  unk000C8 *result; // eax

  sub_100419D0(asc_100AD300);
  sub_10072AF0(3, 0x200020u);
  dword_10AA2854 = 3;
  if (gUnkC8Ptr13) {
    gUnkC8Ptr1 = gUnkC8Ptr13;
    result = (unk000C8 *)1;
  } else {
    v0 = (unk000C8 *)malloc(0xC8u);
    if (v0)
      result = meth_unk000C8_10048710(v0);
    else
      result = 0;
    gUnkC8Ptr13 = result;
    gUnkC8Ptr1 = result;
    if (result) {
      result->lpFn0 = s_unk000C8_10049C20;
      gUnkC8Ptr13->lpFn0(gUnkC8Ptr13);
      gUnkC8Ptr1->field_C = 1;
      result = (unk000C8 *)1;
      gUnkC8Ptr1->field_68 = 1;
    }
  }
  return result;
}
// 10AA2854: using guessed type int dword_10AA2854;
