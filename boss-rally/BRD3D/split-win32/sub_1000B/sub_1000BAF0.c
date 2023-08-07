#include "../../types-win32.h"
//----- (1000BAF0) --------------------------------------------------------
void __cdecl sub_1000BAF0(SIZE_T *a1, int a2, int a3, int a4) {
    int v4;                 // ecx
    int *v5;                // eax
    int v6;                 // eax
    int *v7;                // edi
    int v8;                 // esi
    int v9;                 // eax
    HGLOBAL v10;            // eax
    HGLOBAL v11;            // eax
    LPARAM lParam;          // [esp+10h] [ebp-508h] BYREF
    CHAR OutputString[260]; // [esp+14h] [ebp-504h] BYREF
    char Buffer[1024];      // [esp+118h] [ebp-400h] BYREF

    lParam = 0;
    if (dword_10AA288C) {
        if (!a1[4]) {
            if (a1[3])
                sub_100360F0((int)a1, a2, a3, (void *)a4);
            else
                np_sub_10003580((int)a1, a2, a3, a4);
        }
    } else {
        switch (*(_DWORD *)a2) {
        case 0x60000000:
            sub_1003D3A0(*a1, a4, (LPCSTR)(a2 + 4), (int)&lParam, 0);
            goto LABEL_36;
        case 0x60000001:
            sub_1003D3A0(*a1, a4, (LPCSTR)(a2 + 4), (int)&lParam, 1);
            goto LABEL_36;
        case 0x60000002:
            if (a4 == 1) {
                v4 = 0;
                v5 = dword_10AA2538;
                while (*v5 != -1) {
                    v5 += 3;
                    ++v4;
                    if ((int)v5 >= (int)&dword_10AA2598)
                        goto LABEL_36;
                }
                v6 = 3 * v4;
                dword_10AA2538[v6] = 1;
                dword_10AA253C[v6] = 1;
                sprintf(OutputString, "Host set ready message received, ID: %d\n", 1);
                OutputDebugStringA(OutputString);
            } else {
                v7 = dword_10AA253C;
                do {
                    if (*(v7 - 1) == a4) {
                        *v7 = *(_DWORD *)(a2 + 4);
                        sprintf(OutputString,
                                "APPMSG_PLAYERREADY: Set: %d, ID: %d\n",
                                *(_DWORD *)(a2 + 4),
                                a4);
                        OutputDebugStringA(OutputString);
                    }
                    v7 += 3;
                } while ((int)v7 < (int)&unk_10AA259C);
            }
        LABEL_36:
            if (lParam) {
                if (g_HWND) {
                    PostMessageA(g_HWND, 0x501u, 0, lParam);
                } else {
                    v10 = GlobalHandle((LPCVOID)lParam);
                    GlobalUnlock(v10);
                    v11 = GlobalHandle((LPCVOID)lParam);
                    GlobalFree(v11);
                }
            }
            break;
        case 0x60000003:
            dword_10AA288C = 1;
            sprintf(OutputString, aAppmsgHoststar);
            OutputDebugStringA(OutputString);
            return;
        case 0x60000004:
            if (a1[2] == *(_DWORD *)(a2 + 4))
                dword_10AA2894 = 1;
            sprintf(OutputString, aAppmsgBootplay);
            OutputDebugStringA(OutputString);
            goto LABEL_36;
        case 0x60000005:
            v8 = *(_DWORD *)(a2 + 4);
            switch (v8) {
            case 4:
                sub_10072AF0(4, 0x200020u);
                dword_10AA2854 = 4;
                break;
            case 5:
                sub_10072AF0(5, 0x200020u);
                dword_10AA2854 = 5;
                break;
            case 6:
                sub_10072AF0(6, 0x200020u);
                dword_10AA2854 = 6;
                break;
            case 7:
                sub_10072AF0(7, 0x200020u);
                dword_10AA2854 = 7;
                break;
            }
            goto LABEL_36;
        case 0x60000006:
            if (a4 == *(_DWORD *)(a2 + 4))
                sub_1003D3A0(*a1, a4, aLeftTheRace, (int)&lParam, 1);
            goto LABEL_36;
        case 0x60000007:
            if (a4 == *(_DWORD *)(a2 + 4))
                sub_1003D3A0(*a1, a4, aReturnedToRace, (int)&lParam, 1);
            goto LABEL_36;
        case 0x60000008:
            if (a4 == 1) {
                v9 = *(_DWORD *)(a2 + 8);
                if (v9 >= 0 && v9 < 8) {
                    sprintf(Buffer, " finished %s", off_100AAC48[v9]);
                    sub_1003D3A0(*a1, *(_DWORD *)(a2 + 4), Buffer, (int)&lParam, 1);
                }
            }
            goto LABEL_36;
        default:
            goto LABEL_36;
        }
    }
}
// 100AAC48: using guessed type char *off_100AAC48[20];
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
// 10AA2854: using guessed type int dword_10AA2854;
// 10AA288C: using guessed type int dword_10AA288C;
// 10AA2894: using guessed type int dword_10AA2894;
