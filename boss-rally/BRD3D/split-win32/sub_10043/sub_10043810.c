#include "types-win32.h"
//----- (10043810) --------------------------------------------------------
int __cdecl sub_10043810(LPCVOID pMem) {
    _DWORD **v1;  // edi
    unk000C8 *v2; // ecx
    int result;   // eax
    _DWORD *v4;   // esi
    int v5;       // ecx
    int *v6;      // eax
    HGLOBAL v7;   // eax
    HGLOBAL v8;   // eax
    int v9;       // eax

    v1 = (_DWORD **)pMem;
    if (dword_10AA2894) {
        if (dword_10A9D000) {
            *(_DWORD *)(*((_DWORD *)pMem + 2746) + 104) = 0;
            (*(void(__thiscall **)(_DWORD *, _DWORD))(*v1[2746] + 24))(v1[2746], 0);
            cleanUpAndExitWithCode(0);
        }
        sub_10046400((unk1E214 *)pMem);
        if (gUnkC8Ptr26) {
            gUnkC8Ptr26->lpVtbl->meth7(gUnkC8Ptr26);
            gUnkC8Ptr26 = 0;
        }
        gUnkC8Ptr1 = gUnkC8Ptr10;
        sub_1003BF60();
        v9 = dword_10AA287C;
        dword_10AA2898 = 1;
        if (!dword_10AA287C || dword_10AA287C == 1) {
            np_sub_1003C020();
            v9 = dword_10AA287C;
        }
        if (v9 == 2 || v9 == 3) {
            if (dword_10AA29D8)
                *(_DWORD *)(dword_10AA29D8 + 28) &= 0xFFFFFFEF;
        }
        dword_10AA2894 = 0;
        result = 0;
    } else if (dword_10AA2890) {
        sub_10046400((unk1E214 *)pMem);
        if (gUnkC8Ptr26) {
            gUnkC8Ptr26->lpVtbl->meth7(gUnkC8Ptr26);
            gUnkC8Ptr26 = 0;
        }
        sub_100440D0();
        sub_100443E0();
        meth_unk000C8_100446D0(v2);
        dword_10AA2890 = 0;
        result = 0;
    } else {
        if (dword_10AA2884) {
            v4 = 0;
            pMem = 0;
            if (unk) {
                sub_1003D0B0(unk, (LPDWORD)&pMem);
                v4 = pMem;
            }
            if (v4) {
                v5 = 0;
                v6 = dword_10AA2538;
                while (*v6 != *(_DWORD *)(dword_10A9D008 + 8)) {
                    v6 += 3;
                    ++v5;
                    if ((int)v6 >= (int)&dword_10AA2598)
                        goto LABEL_17;
                }
                dword_10AA253C[3 * v5] = v4[11] > 1u;
            LABEL_17:
                v7 = GlobalHandle(v4);
                GlobalUnlock(v7);
                v8 = GlobalHandle(pMem);
                GlobalFree(v8);
            }
        }
        if (dword_10AA288C) {
            sub_1003E310();
            meth_BossRallyConfig_WriteConfigFile(&gConfig, gBossRallyCfgPath);
            v1[2746][26] = 0;
            (*(void(__thiscall **)(_DWORD *, _DWORD))(*v1[2746] + 24))(v1[2746], 0);
            dword_10AA285C = 0;
            sub_10072AF0(2, 0x200020u);
            dword_10AA2854 = 2;
            result = 0;
        } else {
            result = 1;
        }
    }
    return result;
}
// 10043905: conditional instruction was optimized away because of 'esi.4!=0'
// 10043885: variable 'v2' is possibly undefined
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA285C: using guessed type int dword_10AA285C;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA288C: using guessed type int dword_10AA288C;
// 10AA2890: using guessed type int dword_10AA2890;
// 10AA2894: using guessed type int dword_10AA2894;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D8: using guessed type int dword_10AA29D8;
