#include "types-win32.h"
//----- (10072680) --------------------------------------------------------
int __cdecl sub_10072680(int a1, __int64 a2) {
    int v2; // ecx

    if (!gPlaysfx || !g_DSound || !dword_118290FC)
        return 1;
    if (!sub_10072700(dword_11828F08[a1],
                      (__int64)((double)a2 * dbl_11828E88[a1] * 2.328306436538696e-10)))
        return 0;
    v2 = 3 * a1;
    dword_11828D28[2 * v2] = a2;
    dword_11828D2C[2 * v2] = HIDWORD(a2);
    return 1;
  }
  // 10072700: using guessed type _DWORD __cdecl sub_10072700(_DWORD, _DWORD);
  // 100B5DE8: using guessed type int g_Playsfx;
  // 11828D28: using guessed type int dword_11828D28[];
  // 11828D2C: using guessed type int dword_11828D2C[];
  // 11828E88: using guessed type double dbl_11828E88[];
  // 118290FC: using guessed type int dword_118290FC;
