#include "types-win32.h"
//----- (10045390) --------------------------------------------------------
int __stdcall sub_10045390() {
  unk000C8 *uC8;    // eax
  unk000C8 *result; // eax

  if (gUnkC8Ptr2) {
    gUnkC8Ptr1 = gUnkC8Ptr2;
    result = (unk000C8 *)1;
  } else {
    uC8 = (unk000C8 *)malloc(0xC8u);
    if (uC8)
      result = meth_unk000C8_10048710(uC8);
    else
      result = 0;
    gUnkC8Ptr2 = result;
    gUnkC8Ptr1 = result;
    if (result) {
      result->lpFn0 = s_unk000C8_1004D1F0;
      gUnkC8Ptr2->lpFn0(gUnkC8Ptr2);
      gUnkC8Ptr1->field_C = 1;
      result = (unk000C8 *)1;
      gUnkC8Ptr1->field_68 = 1;
    }
  }
  return (int)result;
}
