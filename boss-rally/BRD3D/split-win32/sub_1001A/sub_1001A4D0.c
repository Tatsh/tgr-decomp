#include "types-win32.h"
//----- (1001A4D0) --------------------------------------------------------
int __cdecl sub_1001A4D0(int a1, int a2, int a3, int a4) {
  int v4;     // ecx
  int v5;     // edx
  int v6;     // edi
  int result; // eax
  int v8;     // ebp
  char v9;    // dl
  int v10;    // ebp

  v4 = 0;
  v5 = dword_11829318;
  v6 = dword_104B2558 * a2 / 64;
  for (result = dword_104B2554 * a3 / 64; v4 < dword_11829318; v5 = dword_11829318) {
    v8 = v5 * (result + dword_104B2554 * v6);
    v9 = byte_11829118[v5 * a4 + v4];
    v10 = v4 + v8;
    ++v4;
    *((_BYTE *)&unk_104B3DE8 + 0x4000 * a1 + v10) = v9;
  }
  return result;
}
// 104B2554: using guessed type int dword_104B2554;
// 104B2558: using guessed type int dword_104B2558;
// 11829318: using guessed type int dword_11829318;
