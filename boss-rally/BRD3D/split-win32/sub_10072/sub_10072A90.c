#include "types-win32.h"
//----- (10072A90) --------------------------------------------------------
BOOL __cdecl sub_10072A90(int a1, int a2, unsigned int a3, int a4) {
  int v4;      // esi
  BOOL result; // eax

  result = 1;
  if (gPlaysfx) {
    if (g_DSound) {
        if (dword_118290FC) {
            v4 = dword_100B5DF0[18 * a1 + a2];
            if (!sub_10072820(v4, a3) || sub_100729E0(v4, a4))
                result = 0;
        }
    }
  }
  return result;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
