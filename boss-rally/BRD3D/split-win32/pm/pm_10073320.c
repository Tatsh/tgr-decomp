#include "types-win32.h"
//----- (10073320) --------------------------------------------------------
int __cdecl pm_10073320(int a1) {
    char *v1;               // ebp
    int v2;                 // edi
    int *v3;                // ebx
    int *v4;                // esi
    int v5;                 // ebx
    const char **v6;        // ebp
    HMMIO v7;               // eax
    char *v9;               // [esp+10h] [ebp-410h]
    int v10;                // [esp+10h] [ebp-410h]
    int v11;                // [esp+14h] [ebp-40Ch]
    int v12;                // [esp+18h] [ebp-408h]
    int v13;                // [esp+1Ch] [ebp-404h]
    CHAR pszFileName[1024]; // [esp+20h] [ebp-400h] BYREF

    v11 = 1;
    if (!gPlaysfx || !gDSound || !dword_118290FC)
        return 1;
    if (a1) {
        if (a1 == 1) {
            v1 = (char *)&unk_100B8938;
            dword_11828F00 = 25;
            v2 = 0;
            v3 = dword_100B64F8;
            v4 = dword_100B64B0;
            do {
                if (dword_100B6540[v2]) {
                    if (!sound_100730A0(v2 / 2))
                        v11 = 0;
                } else {
                    dword_100B5DF0[v2] = 0;
                    *v4 = 0;
                    *v3 = 0;
                }
                ++v4;
                ++v2;
                ++v3;
            } while ((int)v4 < (int)&unk_100B64EC);
        } else {
            v1 = v9;
        }
    } else {
        v1 = (char *)&unk_100B89A0;
        dword_11828F00 = 9;
    }
    v12 = 1;
    if (dword_11828F00 - 1 > 1) {
        v5 = 72;
        v6 = (const char **)(v1 + 4);
        v10 = 72;
        do {
            v13 = 15;
            do {
                if (*(int *)((char *)dword_100B6540 + v5)) {
                    strcpy(pszFileName, kSfxSlash);
                    strcat(pszFileName, *v6);
                    v7 = sound_10072CA0(pszFileName);
                    *(int *)((char *)dword_100B5DF0 + v5) = (int)v7;
                    if (!v7)
                        v11 = 0;
                } else {
                    *(int *)((char *)dword_100B5DF0 + v5) = 0;
                }
                v5 += 4;
                --v13;
            } while (v13);
            v5 = v10 + 72;
            ++v6;
            ++v12;
            v10 += 72;
        } while (v12 < dword_11828F00 - 1);
    }
    return v11;
}
// 100733E2: variable 'v9' is possibly undefined
// 100B5DE8: using guessed type int gPlaysfx;
// 11828F00: using guessed type int dword_11828F00;
// 118290FC: using guessed type int dword_118290FC;
