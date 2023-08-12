#include "types-win32.h"
//----- (1003CFE0) --------------------------------------------------------
void sub_1003CFE0() {
  LPCVOID *v0; // edi
  LPCVOID v1;  // esi
  HGLOBAL v2;  // eax
  HGLOBAL v3;  // eax

  v0 = (LPCVOID *)dword_10A9C0CC;
  do {
    v1 = *v0;
    if (*v0) {
      v2 = GlobalHandle(*v0);
      GlobalUnlock(v2);
      v3 = GlobalHandle(v1);
      GlobalFree(v3);
      *v0 = 0;
    }
    v0 += 56;
  } while ((int)v0 < (int)&unk_10A9CECC);
}
// 10A9C0CC: using guessed type int dword_10A9C0CC[];
