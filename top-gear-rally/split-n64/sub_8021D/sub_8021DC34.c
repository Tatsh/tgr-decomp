#include "types-n64.h"
//----- (8021DC34) --------------------------------------------------------
void __fastcall sub_8021DC34(unsigned int *a1) {
    int v2;            // $s6
    int v3;            // $s4
    unsigned int v4;   // $v0
    int v5;            // $s2
    _DWORD *v6;        // $v1
    int v7;            // $s1
    _DWORD *v8;        // $v0
    int v9;            // $a0
    int v10;           // $s0
    unsigned int v11;  // $s6
    unsigned int *v12; // $s0
    unsigned int *v13; // $s1

    if (a1[1]) {
        sub_8021D070(a1 + 1, 0, 0x7FFFFFFFu, (int)a1);
        v2 = 0;
        v3 = 0;
        v4 = a1[1];
        if (*(int *)a1[1] > 0) {
            do {
                v5 = 0;
                sub_8021D070((unsigned int *)(v4 + 4), 0, 0x7FFFFFFFu, (int)a1);
                sub_8021D070(
                    (unsigned int *)(*(_DWORD *)(a1[1] + v3 * 4 + 4) + 4), 0, 0x7FFFFFFFu, (int)a1);
                sub_8021D070(
                    (unsigned int *)(*(_DWORD *)(a1[1] + v3 * 4 + 4) + 8), 0, 0x7FFFFFFFu, (int)a1);
                v6 = (_DWORD *)a1[1];
                v7 = 0;
                v8 = &v6[v3];
                v9 = v6[v3 + 1];
                if (*(int *)(v9 + 12) > 0) {
                    while (1) {
                        sub_8021D070((unsigned int *)(v9 + 32), 0, 0x7FFFFFFFu, (int)a1);
                        v6 = (_DWORD *)a1[1];
                        ++v5;
                        v7 += 4;
                        v8 = &v6[v3];
                        v10 = v6[v3 + 1];
                        if (v5 >= *(_DWORD *)(v10 + 12))
                            break;
                        v9 = v10 + v7;
                    }
                }
                ++v2;
                ++v3;
                v4 = (unsigned int)(v8 + 1);
            } while (v2 < *v6);
        }
    }
    v11 = 0;
    if (*a1) {
        v12 = a1;
        v13 = a1 + 2;
        do {
            sub_8021D070(v13, 0, 0x7FFFFFFFu, (int)a1);
            if (v12[2]) {
                sub_8021D070(v13, 0, 0x7FFFFFFFu, (int)a1);
                sub_8021D098((_DWORD *)v12[2], 0, 0x7FFFFFFFu, (int)a1);
            }
            ++v11;
            v12 += 5;
            v13 += 5;
        } while (v11 < *a1);
    }
}
