#include "../../types-win32.h"
//----- (10028B20) --------------------------------------------------------
int __cdecl sub_10028B20(int a1, float a2, int a3) {
    int v4;    // eax
    int v5;    // edi
    int v6;    // ebx
    int v7;    // ebp
    int v8;    // ecx
    int v9;    // eax
    float v10; // edx
    int v12;   // [esp+10h] [ebp-Ch]
    int v13;   // [esp+14h] [ebp-8h]
    int v14;   // [esp+18h] [ebp-4h]
    int v15;   // [esp+28h] [ebp+Ch]

    v12 = 0;
    v4 = _RTC_NumErrors();
    v5 = *(_DWORD *)(a3 + 676);
    v6 = *(_DWORD *)(a3 + 680);
    v7 = *(_DWORD *)(a3 + 8);
    v13 = v4;
    v15 = *(_DWORD *)(a3 + 12);
    v8 = *(_DWORD *)(a3 + 96);
    *(_DWORD *)(a3 + 72) = v6;
    *(_DWORD *)(a3 + 68) = v5;
    v14 = dword_1057544C;
    if (dword_1057544C < v8) {
        do {
            sub_10025350(a1, v7, v15, a2, v5, v6);
            v9 = v13 * v7 * v15;
            v12 += v9;
            a1 += v9;
            LODWORD(v10) = v13 * v5 * v6 + LODWORD(a2);
            v7 >>= 1;
            v15 >>= 1;
            v5 >>= 1;
            v6 >>= 1;
            a2 = v10;
            ++v14;
        } while (v14 < *(_DWORD *)(a3 + 96));
    }
    return v12;
}
// 1057544C: using guessed type int dword_1057544C;
