#include "types-win32.h"
//----- (10048AA0) --------------------------------------------------------
int __thiscall meth_unk000C8_7(unk000C8 *this) {
  unk00348 **v1; // ebp
  unk00348 *v2;  // ebx
  int v3;        // edi
  unk1E214 **v4; // esi
  int result;    // eax
  int v6;        // [esp+8h] [ebp-8h]

  v6 = 0;
  if (this->field_10) {
    v1 = this->field_14;
    do {
      v2 = *v1;
      v3 = 200;
      v4 = (*v1)->field_18;
      do {
        if (*v4)
          (*v4)->lpVtbl->meth0(*v4, 1);
        *v4++ = 0;
        --v3;
      } while (v3);
      if (v2)
        v2->lpVtbl->meth0(v2, 1);
      result = v6 + 1;
      ++v1;
      ++v6;
    } while (v6 < this->field_10);
  }
  word_10AA286C = 0;
  return result;
}
// 10AA286C: using guessed type __int16 word_10AA286C;
