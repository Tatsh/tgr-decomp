#include "types-win32.h"
//----- (10019490) --------------------------------------------------------
int sub_10019490() {
  _WORD *v0;  // ebx
  _WORD *v1;  // esi
  int v2;     // edi
  int result; // eax

  dword_104B2550 = 512;
  v0 = &unk_104B2574;
  do {
    v1 = v0;
    v2 = 512;
    do {
      *(v1 - 2) = sub_1003BD50();
      *(v1 - 1) = sub_1003BD50();
      result = sub_1003BD50();
      *v1 = result;
      v1 += 3;
      --v2;
    } while (v2);
    v0 += 1566;
  } while ((int)v0 < (int)&unk_104B3DEC);
  return result;
}
// 104B2550: using guessed type int dword_104B2550;
