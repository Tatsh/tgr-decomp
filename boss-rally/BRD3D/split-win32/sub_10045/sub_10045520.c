#include "types-win32.h"
//----- (10045520) --------------------------------------------------------
int sub_10045520() {
  _DWORD *v0; // eax
  int result; // eax

  if (gUnkC8Ptr37) {
    gUnkC8Ptr1 = (void *)gUnkC8Ptr37;
    goto LABEL_8;
  }
  v0 = (_DWORD *)malloc(0xC8u);
  if (v0)
    result = (int)meth_unk000C8_10048710(v0);
  else
    result = 0;
  gUnkC8Ptr37 = result;
  gUnkC8Ptr1 = (void *)result;
  if (result) {
    *(_DWORD *)(result + 4) = s_unk000C8_1004DB00;
    (*(void(__cdecl **)(int))(gUnkC8Ptr37 + 4))(gUnkC8Ptr37);
    *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
    *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
  LABEL_8:
    graphics_1007AC00();
    result = 1;
  }
  return result;
}
// 1004DB00: using guessed type int __cdecl sub_1004DB00(int);
// 10AA2994: using guessed type int dword_10AA2994;
