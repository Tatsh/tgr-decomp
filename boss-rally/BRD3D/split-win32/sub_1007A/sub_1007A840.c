#include "types-win32.h"
//----- (1007A840) --------------------------------------------------------
int __stdcall sub_1007A840() {
  GUID *v0;        // eax
  int result;      // eax
  unk00334 *v2;    // esi
  int v3;          // edi
  unk00334 *v4;    // ebx
  CHAR buffer[80]; // [esp+10h] [ebp-50h] BYREF

  if (gUnk00334Ptr1)
    v0 = GetDirectDrawGUID(gUnk00334Ptr1);
  else
    v0 = 0;
  result = (int)sub_1001A550(v0);
  gUnk00334Ptr1 = (unk00334 *)result;
  if (result) {
    v2 = gUnk334Ptr1;
    v3 = 0;
    if (gUnk334Ptr1) {
        do {
            v4 = v2->last;
            if (((int)v2->u8c & 2) != 0) {
                wsprintfA(buffer, "%s (Primary)", v2->field_14);
                dword_10AA2860 = v3;
                dword_10AA2A2C = v3;
            } else {
                wsprintfA(buffer, "%s", v2->field_14);
            }
            if (gUnk1E214Ptr0) {
                gUnk1E214Ptr0->field_3838.lpVtbl->meth4(
                    &gUnk1E214Ptr0->field_3838, buffer, 0, 1, (int)&dword_100AB528, 1);
                gUnk1E214Ptr0->field_3838.lpVtbl->meth10(
                    &gUnk1E214Ptr0->field_3838, &v2->lpGUID, 16, v3);
            }
            ++v3;
            v2 = v4;
        } while (v4);
    }
    gUnk00334Ptr1 = s_CLSID_1007A7D0((CLSID *)&gGUID);
    result = 1;
  }
  return result;
}
// 10AA2860: using guessed type int dword_10AA2860;
// 10AA2A2C: using guessed type int dword_10AA2A2C;
