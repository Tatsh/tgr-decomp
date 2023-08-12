#include "types-win32.h"
//----- (10043330) --------------------------------------------------------
unk000C8 *sub_10043330() {
  unk000C8 *v0;     // eax
  unk000C8 *result; // eax

  if (gUnkC8Ptr8) {
    gUnkC8Ptr1 = gUnkC8Ptr8;
    result = (unk000C8 *)1;
  } else {
    v0 = (unk000C8 *)malloc(0xC8u);
    if (v0)
      result = meth_unk000C8_10048710(v0);
    else
      result = 0;
    gUnkC8Ptr8 = result;
    gUnkC8Ptr1 = result;
    if (result) {
      result->lpFn0 = s_unk000C8_10051D30;
      gUnkC8Ptr8->lpFn0(gUnkC8Ptr8);
      gUnkC8Ptr1->field_C = 1;
      result = (unk000C8 *)1;
      gUnkC8Ptr1->field_68 = 1;
    }
  }
  return result;
}
