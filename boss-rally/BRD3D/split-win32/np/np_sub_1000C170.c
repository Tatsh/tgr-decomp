#include "types-win32.h"
//----- (1000C170) --------------------------------------------------------
void __cdecl np_sub_1000C170(int a1, _DWORD *a2) {
    CHAR *v2;               // esi
    const CHAR *v3;         // edi
    int v4;                 // ebp
    int v5;                 // eax
    HGLOBAL v6;             // eax
    CHAR *v7;               // eax
    int v8;                 // ecx
    int *v9;                // eax
    int v10;                // eax
    const CHAR *v11;        // edi
    int v12;                // ebx
    int v13;                // eax
    HGLOBAL v14;            // eax
    CHAR *v15;              // eax
    HGLOBAL v16;            // eax
    HGLOBAL v17;            // eax
    CHAR OutputString[260]; // [esp+10h] [ebp-104h] BYREF

    if (*(_DWORD *)(a1 + 12))
        np_sub_1000C000(a1, a2);
    else
        np_sub_1000BEA0(a1, a2);
    if (!dword_100AC300)
        return;
    v2 = 0;
    if (*a2 == 3) {
        v11 = (const CHAR *)a2[8];
        if (!v11)
            v11 = aUnknown;
        v12 = lstrlenA(aSJoinedTheGame);
        v13 = lstrlenA(v11);
        v14 = GlobalAlloc(0x42u, v12 + v13 + 1);
        v15 = (CHAR *)GlobalLock(v14);
        v2 = v15;
        if (v15) {
            wsprintfA(v15, "%s joined the game.\r\n", v11);
        LABEL_21:
            if (v2) {
                if (gHwnd) {
                    PostMessageA(gHwnd, 0x501u, 0, (LPARAM)v2);
                } else {
                    v16 = GlobalHandle(v2);
                    GlobalUnlock(v16);
                    v17 = GlobalHandle(v2);
                    GlobalFree(v17);
                }
            }
            return;
        }
    } else {
        if (*a2 != 5) {
            if (*a2 == 260)
                sub_1003CE80();
            goto LABEL_21;
        }
        v3 = (const CHAR *)a2[9];
        if (!v3)
            v3 = aUnknown;
        v4 = lstrlenA(String);
        v5 = lstrlenA(v3);
        v6 = GlobalAlloc(0x42u, v4 + v5 + 1);
        v7 = (CHAR *)GlobalLock(v6);
        v2 = v7;
        if (v7) {
            wsprintfA(v7, "%s left the game.\r\n", v3);
            v8 = 0;
            v9 = dword_10AA2538;
            while (*v9 != a2[2]) {
                v9 += 3;
                ++v8;
                if ((int)v9 >= (int)&dword_10AA2598)
                    goto LABEL_21;
            }
            v10 = 3 * v8;
            dword_10AA2538[v10] = -1;
            dword_10AA253C[v10] = 0;
            sprintf(OutputString, "Destroy Player message received, ID: %d\n", a2[2]);
            OutputDebugStringA(OutputString);
            goto LABEL_21;
        }
    }
}
// 100AC300: using guessed type int dword_100AC300;
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
