#include "types-win32.h"
//----- (100730A0) --------------------------------------------------------
int __cdecl sub_100730A0(int a1) {
    int v1;                 // edx
    HMMIO v2;               // eax
    HMMIO v3;               // eax
    HMMIO v4;               // eax
    int v6;                 // [esp+10h] [ebp-408h]
    CHAR pszFileName[1024]; // [esp+18h] [ebp-400h] BYREF

    v6 = 1;
    if (gPlaysfx && g_DSound && dword_118290FC && (v1 = dword_100B6540[2 * a1]) != 0) {
        strcpy(pszFileName, kSfxSlash);
        strcat(pszFileName, (const char *)dword_100B84F4[v1]);
        strcat(pszFileName, aWav);
        v2 = sub_10072CA0(pszFileName);
        dword_100B5DF0[2 * a1] = (int)v2;
        if (!v2)
            v6 = 0;
        strcpy(pszFileName, kSfxSlash);
        strcat(pszFileName, (const char *)dword_100B84F4[dword_100B6C00[2 * a1]]);
        strcat(pszFileName, aHWav);
        v3 = sub_10072CA0(pszFileName);
        dword_100B64B0[2 * a1] = (int)v3;
        if (!v3)
            v6 = 0;
        strcpy(pszFileName, kSfxSlash);
        strcat(pszFileName, (const char *)dword_100B84F4[dword_100B6C48[2 * a1]]);
        strcat(pszFileName, aRWav);
        v4 = sub_10072CA0(pszFileName);
        dword_100B64F8[2 * a1] = (int)v4;
        if (!v4)
            return 0;
    } else {
        dword_100B5DF0[2 * a1] = 0;
        dword_100B64B0[2 * a1] = 0;
        dword_100B64F8[2 * a1] = 0;
    }
    return v6;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 100B84F4: using guessed type int dword_100B84F4[];
// 118290FC: using guessed type int dword_118290FC;
