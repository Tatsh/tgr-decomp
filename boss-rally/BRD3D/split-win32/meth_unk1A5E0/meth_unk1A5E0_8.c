#include "types-win32.h"
//----- (1005CB40) --------------------------------------------------------
int __thiscall meth_unk1A5E0_8(unk1A5E0 *this, int index) {
  unk1A5E0Vtbl *v3; // edi
  int v5;           // [esp+8h] [ebp-4h] BYREF

  v5 = -1;
  v3 = this->lpVtbl;
  this->lpVtbl->meth2(this, index);
  if (!dword_10AA28D8 && !dword_10AA2858)
    v3->meth7(this, &v5);
  ++word_10AA2870;
  return v5;
}
// 10AA2858: using guessed type int dword_10AA2858;
// 10AA2870: using guessed type __int16 word_10AA2870;
// 10AA28D8: using guessed type int dword_10AA28D8;
