#include "types-win32.h"
//----- (10043A00) --------------------------------------------------------
int sub_10043A00() {
    const char *v0; // edi
    int v1;         // eax
    HGLOBAL v2;     // eax
    HGLOBAL v3;     // eax
    int v5;         // ecx
    int *v6;        // eax
    const char *v7; // edi
    HWND v8;        // edx
    int v9;         // eax
    HGLOBAL v10;    // eax
    HGLOBAL v11;    // eax
    LPCVOID v12;    // [esp-Ch] [ebp-10h]
    LPCVOID pMem;   // [esp+0h] [ebp-4h] BYREF

    pMem = 0;
    sub_1003D0B0(unk, (LPDWORD)&pMem);
    if (pMem) {
        if (*((_DWORD *)pMem + 11) <= 1u) {
            v0 = text_GetStringWithIndex(0xBBu);
            v1 = dword_10A9D008;
            strcpy(byte_10A9DD28, v0);
            sub_1003D210(gHwnd, v1, 1);
            v12 = pMem;
            strcpy(byte_10A9DD28, String2);
            v2 = GlobalHandle(v12);
            GlobalUnlock(v2);
            v3 = GlobalHandle(pMem);
            GlobalFree(v3);
            return 1;
        }
        if (dword_10AA2884) {
            v5 = 1;
            v6 = dword_10AA2538;
            while (*(_QWORD *)v6 >= 0xFFFFFFFFui64) {
                v6 += 3;
                if ((int)v6 >= (int)&dword_10AA2598)
                    goto LABEL_10;
            }
            v5 = 0;
        LABEL_10:
            if (v5) {
                sub_1003D9F0((int *)dword_10A9D008);
                dword_10AA288C = 1;
                *((_DWORD *)pMem + 1) |= 0x20u;
                (*(void(__stdcall **)(SIZE_T, LPCVOID, _DWORD))(*(_DWORD *)unk + 124))(
                    unk, pMem, 0);
            } else {
                v7 = text_GetStringWithIndex(0xBCu);
                v8 = gHwnd;
                strcpy(byte_10A9DD28, v7);
                sub_1003D210(v8, dword_10A9D008, 1);
                strcpy(byte_10A9DD28, String2);
            }
        } else {
            v9 = sub_10058700();
            sub_1003D950((int *)dword_10A9D008, v9);
        }
        v10 = GlobalHandle(pMem);
        GlobalUnlock(v10);
        v11 = GlobalHandle(pMem);
        GlobalFree(v11);
    }
    return 1;
}
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA2598: using guessed type int dword_10AA2598;
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA288C: using guessed type int dword_10AA288C;
