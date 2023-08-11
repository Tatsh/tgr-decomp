#include "types-win32.h"
//----- (10073E70) --------------------------------------------------------
int __thiscall meth_unk00214_10073E70(_DWORD *this, int a2, int a3) {
  int v3;     // ebp
  int v4;     // edi
  _BYTE *v5;  // edx
  int result; // eax
  int v7;     // eax
  char v8;    // [esp+10h] [ebp+8h]

  v3 = a3;
  while (v3) {
    v4 = 8 - this[2];
    if (v4 <= v3) {
        v8 = 0;
    } else {
        v8 = v4 - v3;
        v4 = v3;
    }
    v3 -= v4;
    v5 = (_BYTE *)(this[4] + this[3]);
    *v5 = (((1 << this[2]) - 1) << (8 - this[2])) & *v5 |
          ((unsigned __int8)((a2 & (unsigned int)(((1 << v4) - 1) << v3)) >> v3) << v8);
    result = v4 + this[2];
    this[2] = result;
    if (result >= 8) {
        v7 = this[3];
        this[2] = 0;
        result = v7 + 1;
        this[3] = result;
    }
  }
  return result;
}
