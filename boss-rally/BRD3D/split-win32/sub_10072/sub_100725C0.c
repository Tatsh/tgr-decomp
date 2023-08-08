#include "types-win32.h"
//----- (100725C0) --------------------------------------------------------
BOOL __cdecl sub_100725C0(int a1, int a2) {
    int v2; // eax
    int v3; // eax

    if (!g_Playsfx || !g_DSound || !dword_118290FC)
        return 1;
    LODWORD(dbl_11828E88[a2]) = dword_100B5E30[18 * a1];
    v2 = dword_11828F08[a2];
    HIDWORD(dbl_11828E88[a2]) = dword_100B5E34[18 * a1];
    if (v2)
        sub_10072580(a2);
    v3 = dword_100B5DF0[18 * a1 + a2];
    dword_11828F08[a2] = v3;
    return v3 != 0;
}
// 10072580: using guessed type _DWORD __cdecl sub_10072580(_DWORD);
// 100B5DE8: using guessed type int g_Playsfx;
// 100B5E30: using guessed type int dword_100B5E30[];
// 11828E88: using guessed type double dbl_11828E88[];
// 118290FC: using guessed type int dword_118290FC;
