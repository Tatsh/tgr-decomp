#include "types-win32.h"
//----- (10047120) --------------------------------------------------------
int __cdecl sub_10047120(unk1E214 *a1) {
  sub_10045C90();
  if (dword_10AA26F0 > 0 && !LOWORD(dword_10AA26F4[0])) {
    memset((char *)dword_10AA26F4 + 2, 0, 0x18u);
    memset(word_10AA270E, 0, 0x30u);
    memset(dword_10AA2740, 0, sizeof(dword_10AA2740));
  }
  dword_10AA28C4 = 0;
  a1->field_2AE8->lpVtbl->meth7(a1->field_2AE8);
  if (gUnkC8Ptr7)
    gUnkC8Ptr7->lpVtbl->meth0(gUnkC8Ptr7, 1);
  gUnkC8Ptr7 = 0;
  return 0;
}
// 10AA26F0: using guessed type int dword_10AA26F0;
// 10AA26F4: using guessed type int dword_10AA26F4[];
// 10AA270E: using guessed type __int16 word_10AA270E[];
