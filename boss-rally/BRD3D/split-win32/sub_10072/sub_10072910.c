#include "../../types-win32.h"
//----- (10072910) --------------------------------------------------------
int __cdecl sub_10072910(int a1, int a2, int a3) {
    int v3;     // ebx
    __int64 v4; // rax
    int v5;     // ecx

    if (!g_Playsfx || !g_DSound || !dword_118290FC)
        return 1;
    v3 = dword_100B5DF0[18 * a1 + a2];
    if (!v3 || sub_100729E0(v3, a3))
        return 0;
    v4 = (__int64)((double)*(unsigned int *)(v3 + 12) * 4294967296.0 / dbl_11828E88[a2]);
    dword_118AC728[6 * a2] = v4;
    dword_118AC72C[6 * a2] = HIDWORD(v4);
    v5 = dword_118AC728[6 * a2];
    dword_11828F08[a2] = v3;
    dword_11828D28[6 * a2] = v5;
    dword_11828D2C[6 * a2] = HIDWORD(v4);
    return 1;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 11828D28: using guessed type int dword_11828D28[];
// 11828D2C: using guessed type int dword_11828D2C[];
// 11828E88: using guessed type double dbl_11828E88[];
// 118290FC: using guessed type int dword_118290FC;
// 118AC728: using guessed type int dword_118AC728[];
// 118AC72C: using guessed type int dword_118AC72C[];
