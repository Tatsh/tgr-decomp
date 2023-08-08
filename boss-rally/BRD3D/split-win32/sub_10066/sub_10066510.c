#include "../types-win32.h"
//----- (10066510) --------------------------------------------------------
void sub_10066510() {
    int v0;         // edi
    int *v1;        // esi
    int v2;         // ebx
    signed int v3;  // ebp
    int v4;         // edi
    char *v5;       // eax
    int *v6;        // edx
    char *v7;       // esi
    int v8;         // ecx
    int v9;         // ecx
    signed int v10; // ecx
    char *v11;      // esi
    int v12;        // eax
    int v13;        // edx
    char Base[4];   // [esp+10h] [ebp-A0h] BYREF
    char v15[156];  // [esp+14h] [ebp-9Ch] BYREF

    if (g_NetworkPlay) {
        v0 = 0;
        if (dword_100B36FC > 0) {
            v1 = &dword_10ACEEA0;
            do {
                *v1 = sub_10005E40(*(v1 - 941));
                ++v0;
                v1 += 2778;
            } while (v0 < dword_100B36FC);
        }
    } else {
        v2 = dword_100B36F8;
        v3 = 0;
        v4 = 0;
        if (dword_100B36F8 > 0) {
            v5 = Base;
            v6 = &dword_10ACD4F8;
            v7 = v15;
            do {
                if ((v6[2] & 2) == 0) {
                    v8 = *v6;
                    *(_DWORD *)v7 = v4;
                    if (v8)
                        v9 = *(_DWORD *)(v8 + 4084);
                    else
                        v9 = *(v6 - 4);
                    *(_DWORD *)v5 = v9;
                    ++v3;
                    v7 += 8;
                    v5 += 8;
                }
                ++v4;
                v6 += 32;
            } while (v4 < v2);
        }
        if (v3) {
            qsort(Base, v3, 8u, sub_10066620);
            v2 = dword_100B36F8;
        }
        v10 = 0;
        if (v3 > 0) {
            v11 = v15;
            do {
                v12 = *(_DWORD *)v11 << 7;
                v13 = *(int *)((char *)&dword_10ACD4F8 + v12);
                if (v13) {
                    *(_DWORD *)(v13 + 4088) = v2 - v10 - 1;
                    v2 = dword_100B36F8;
                } else {
                    *(int *)((char *)&dword_10ACD4EC + v12) = v2 - v10 - 1;
                }
                ++v10;
                v11 += 8;
            } while (v10 < v3);
        }
    }
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 1022AF18: using guessed type int g_NetworkPlay;
// 10ACD4EC: using guessed type int dword_10ACD4EC;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
// 10ACEEA0: using guessed type int dword_10ACEEA0;
