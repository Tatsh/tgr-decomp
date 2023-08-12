#include "types-win32.h"
//----- (10017790) --------------------------------------------------------
_DWORD *__cdecl sub_10017790(int a1) {
  _DWORD *result; // eax
  int v2;         // ebx
  int v3;         // ebp
  _DWORD *v4;     // ecx
  int v5;         // esi
  int v6;         // edi

  result = (_DWORD *)dword_106909B4;
  if (!dword_106909B4) {
    result = (_DWORD *)sub_1002B2A0();
    if (!result) {
      if (dword_100AA8B4 == 1) {
        v2 = 30;
        v3 = 20;
      } else {
        v2 = 20;
        v3 = 15;
      }
      v4 = (_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640]);
      v5 = *v4 + v4[2] / 2;
      v6 = v4[3] / 3 + v4[1];
      Set_byte_104B035C_To2();
      result = (_DWORD *)dword_106C2CF8;
      if (*(_DWORD *)(dword_106C2CF8 + 4092)) {
        sub_100192F0(v2);
        result = text_10019300(*(char **)(dword_106C2CF8 + 4092), v5, v6 + v2 / 4);
      } else if (*(_DWORD *)(dword_106C2CF8 + 4100)) {
        sub_100192F0(v3);
        result = text_10019300(*(char **)(dword_106C2CF8 + 4100), v5, v6 + 3 * v2 / 16);
      }
    }
  }
  return result;
}
// 100AA8B4: using guessed type int dword_100AA8B4;
// 106909B4: using guessed type int dword_106909B4;
// 106C2CF8: using guessed type int dword_106C2CF8;
