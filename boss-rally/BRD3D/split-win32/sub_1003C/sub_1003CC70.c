#include "../../types-win32.h"
//----- (1003CC70) --------------------------------------------------------
int __cdecl sub_1003CC70(int a1) {
    int result; // eax
    int v2;     // esi
    int v3;     // eax
    int v4;     // eax
    int v5[20]; // [esp+4h] [ebp-50h] BYREF

    if (!a1)
        return -2005467006;
    sub_1003D070();
    memset(v5, 0, sizeof(v5));
    v5[6] = -1363573792;
    v5[9] = (int)&unk_11321608;
    v5[0] = 80;
    v5[7] = 299025032;
    v5[8] = 1610667455;
    dword_10AA2874 = 1;
    if (dword_10AA2898)
        v2 = (*(int(__stdcall **)(
            int, int *, _DWORD, int(__stdcall *)(int, int, _DWORD *, int), HWND, int))(
            *(_DWORD *)a1 + 52))(a1, v5, 0, sub_1003CB90, g_HWND, 145);
    else
        v2 = a1;
    sub_1003CB10((int)&v5[2], (int)sub_1003CAA0, (int)g_HWND, 0);
    dword_10AA2874 = 0;
    if (dword_10AA29D8 && *(_WORD *)(dword_10AA29D4 + 123236) &&
        (*(_BYTE *)(dword_10AA29D4 + 1080 * dword_10AA2880 + 14440) & 0x10) == 0) {
        v3 = *(_DWORD *)(dword_10AA29D8 + 28);
        LOBYTE(v3) = v3 & 0xEF;
        *(_DWORD *)(dword_10AA29D8 + 28) = v3;
        result = v2;
        *(_BYTE *)(dword_10AA29D8 + 11108) = 1;
    } else {
        v4 = *(_DWORD *)(dword_10AA29D8 + 28);
        LOBYTE(v4) = v4 | 0x10;
        *(_DWORD *)(dword_10AA29D8 + 28) = v4;
        result = v2;
        *(_BYTE *)(dword_10AA29D8 + 11108) = 0;
    }
    return result;
}
// 1008F538: using guessed type int dword_1008F538;
// 10AA2874: using guessed type int dword_10AA2874;
// 10AA2880: using guessed type int dword_10AA2880;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
