#include "types-win32.h"
//----- (10063420) --------------------------------------------------------
enum MACRO_GAME_MODE __thiscall meth_10063420(_DWORD *this) {
  enum MACRO_GAME_MODE v1;     // edx
  enum MACRO_GAME_MODE result; // eax
  int v3;                      // edi
  int i;                       // eax
  __int16 v5;                  // [esp+10h] [ebp-4h]

  v1 = *((unsigned __int8 *)dword_10ACED34 + 4);
  result = v1;
  if ((unsigned int)v1 > GAME_MODE_3)
    result = GAME_MODE_3;
  v3 = this[80];
  if (v3 < dword_100B4050) {
    result = gGameMode;
    if (gGameMode == GAME_MODE_0)
      result = meth_10076AE0(this, byte_100B381C[24 * v1]);
  } else if (gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_6) {
    this[2666] = dword_10AD0850[0];
  } else {
    v5 = word_100B381E[12 * result];
    for (i = 0; i < 16; ++i) {
      if ((v5 & 1) != 0)
        break;
      v5 >>= 1;
    }
    if (i == 16)
      i = 5;
    if (v3 <= dword_100B4050)
      result = meth_10076AE0(this, byte_100B381C[24 * v1 - dword_100B4050 + v3]);
    else
      result = meth_10076AE0(this, i);
  }
  return result;
}
// 100B381E: using guessed type __int16 word_100B381E[];
// 100B4050: using guessed type int dword_100B4050;
// 10AD0850: using guessed type int dword_10AD0850[];
