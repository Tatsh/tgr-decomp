#include "types-win32.h"
//----- (1005D0A0) --------------------------------------------------------
int __thiscall meth_unk06594_2(unk06594 *this, LPCSTR lpFileName) {
  int result; // eax
  void *v3;   // ebx
  int v4;     // edi
  int i;      // esi
  int v6[70]; // [esp+4h] [ebp-118h] BYREF

  result = _findfirst(lpFileName, (int)v6);
  v3 = (void *)result;
  if (result != -1) {
    v4 = 0;
    for (i = 1; i < 100; ++i) {
      if (_findnext(v3, (int)v6))
        break;
      ++v4;
    }
    _findclose((intptr_t)v3);
    result = v4;
  }
  return result;
}
