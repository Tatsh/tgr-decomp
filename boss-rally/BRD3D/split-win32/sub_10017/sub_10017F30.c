#include "types-win32.h"
//----- (10017F30) --------------------------------------------------------
int __cdecl sub_10017F30(int a1) {
    int result; // eax
    int v2;     // ebp
    int v3;     // esi
    int v4;     // ebx
    int v5;     // ecx
    int v6;     // edi
    int v7;     // ebx
    int v8;     // esi

    result = dword_100BD3F0;
    if (dword_100BD3F0) {
        v2 = gWidth - 16;
        v3 = dword_100AA8B4 != 1 ? 0 : 30;
        v4 = *(_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640] + 4) + 20;
        sub_10019260();
        Set_byte_104B035C_To1();
        sub_100192F0(15);
        v5 = dword_106C2CF8;
        result = 0;
        if (*(int *)(dword_106C2CF8 + 4008) > 0) {
            v6 = 4020;
            v7 = v3 + v4 + 37;
            do {
                v8 = result + 1;
                text_10017FE0((int)aWw, result + 1, *(float *)(v5 + v6), v2, v7);
                v5 = dword_106C2CF8;
                result = v8;
                v6 += 4;
                v7 += 15;
            } while (v8 < *(_DWORD *)(dword_106C2CF8 + 4008));
        }
    }
    return result;
}
// 100A81C0: using guessed type int gWidth;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100BD3F0: using guessed type int dword_100BD3F0;
// 106C2CF8: using guessed type int dword_106C2CF8;
