#include "types-win32.h"
//----- (1006AAB0) --------------------------------------------------------
char __cdecl sub_1006AAB0(int a1) {
    int v1;       // eax
    int v2;       // ecx
    int *v3;      // esi
    float a2[40]; // [esp+0h] [ebp-A0h] BYREF

    v1 = *(_DWORD *)(a1 + 320);
    if (dword_11750308) {
        if (!dword_106909B4) {
            v2 = dword_10B502E8[v1];
            if (v2 < 0x10000) {
                v3 = &dword_10B50308[393216 * v1 + 6 * v2];
                sub_100607B0((int)a2, a1);
                LOBYTE(v1) = math_10006BD0((int)v3, a2);
            }
        }
    }
    return v1;
}
// 106909B4: using guessed type int dword_106909B4;
// 10B502E8: using guessed type int dword_10B502E8[];
// 11750308: using guessed type int dword_11750308;
