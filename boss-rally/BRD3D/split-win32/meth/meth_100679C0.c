#include "types-win32.h"
//----- (100679C0) --------------------------------------------------------
char *__thiscall meth_100679C0(_DWORD *this) {
  char *result; // eax
  void *v3;     // ecx
  int v4;       // edi
  int v5;       // edx
  void **v6;    // ecx
  _DWORD *v7;   // ebx

  result = (char *)dword_106909E0;
  if (!dword_106909E0) {
    result = (char *)gGameMode;
    if (gGameMode != GAME_MODE_2 && gGameMode != GAME_MODE_4) {
        result = (char *)this[80];
        if ((int)result < dword_100B4050) {
            result = (char *)dword_100BD3E0;
            if (this[1002] == dword_100BD3E0 - 1 || dword_100BD3E0 <= 1) {
                result = (char *)sub_1006AAA0();
                if (!result) {
                    meth_DebugPrint(v3);
                    __setargv_0();
                    v4 = 0;
                    if (dword_100B4050 > 0) {
                        v5 = 0;
                        v6 = &dword_10AD0868;
                        do {
                            v7 = *v6;
                            v6 += 2778;
                            v7[this[80] + 13] = 0;
                            *((_DWORD *)*(v6 - 2778) + this[80] + 15) = 14400;
                            ++v4;
                            *((_DWORD *)*(v6 - 2778) + this[80] + 11) =
                                (char *)&unk_1020AB98 + v5 + -89992 * this[80];
                            v5 += 14400;
                        } while (v4 < dword_100B4050);
                    }
                    result = sub_10067940((int)&unk_1020AB98 - 89992 * this[80]);
                }
            }
        }
    }
  }
  return result;
}
// 10067A2B: variable 'v3' is possibly undefined
// 100B4050: using guessed type int dword_100B4050;
// 106909E0: using guessed type int dword_106909E0;
