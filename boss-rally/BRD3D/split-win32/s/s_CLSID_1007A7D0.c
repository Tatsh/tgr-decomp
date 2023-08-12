#include "types-win32.h"
//----- (1007A7D0) --------------------------------------------------------
unk00334 *__cdecl s_CLSID_1007A7D0(CLSID *a1) {
  unk00334 *v1; // ebx
  int v2;       // ebp
  unk00334 *v3; // edx

  v1 = gUnk334Ptr1;
  v2 = 0;
  if (!gUnk334Ptr1)
    return gUnk334Ptr1;
  while (1) {
    v3 = v1->last;
    if (!memcmp(a1, &v1->lpGUID, 0x10u))
      break;
    ++v2;
    v1 = v1->last;
    if (!v3)
      return gUnk334Ptr1;
  }
  gUnk00334Ptr1 = sub_1001A550(a1);
  if (!gUnk00334Ptr1)
    return gUnk334Ptr1;
  dword_10AA2860 = v2;
  dword_10AA2A2C = v2;
  return v1;
}
// 10AA2860: using guessed type int dword_10AA2860;
// 10AA2A2C: using guessed type int dword_10AA2A2C;
