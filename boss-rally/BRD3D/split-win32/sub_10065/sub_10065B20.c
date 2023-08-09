#include "types-win32.h"
//----- (10065B20) --------------------------------------------------------
__int16 __cdecl sub_10065B20(int a1, float a2) {
    int v3;    // eax
    int v4;    // ebx
    float *v5; // edi
    double v6; // st7
    int v7;    // esi
    int v8;    // eax
    float *v9; // edi
    int v10;   // esi
    float v12; // [esp+0h] [ebp-14h]

    LOWORD(v3) = 0;
    dword_10AF96C0 = 0;
    dword_10AF9B44 = 0;
    while (a1) {
        do {
            if ((*(_BYTE *)(a1 + 22) & 1) == 0)
                break;
            a1 = *(_DWORD *)(a1 + 4);
        } while (a1);
        if (!a1)
            break;
        v4 = 0;
        if (*(_WORD *)(a1 + 20)) {
            v5 = (float *)(a1 + 140);
            while (1) {
                v6 = *(v5 - 10) - *v5;
                if (a2 <= v6)
                    break;
                a2 = a2 - v6;
                if (MEMORY[0x106C7DA8]) {
                    v7 = (dword_10AF96C0 + 1) % (int)MEMORY[0x106C7DA8];
                    if (sub_1003BA70((float *)&MEMORY[0x106C7CE8] + 5 * v7,
                                     (float *)&MEMORY[0x106C7CE0] + 5 * v7,
                                     v5 - 16,
                                     v5 - 6)) {
                        ++dword_10AF96C0;
                        if (!v7)
                            ++dword_10AF9B44;
                    }
                }
                ++v4;
                LOWORD(v3) = *(_WORD *)(a1 + 20);
                v5 += 10;
                if (v4 >= (unsigned __int16)v3)
                    goto LABEL_14;
            }
            v8 = a1 + 40 * v4;
            v9 = (float *)(v8 + 76);
            v12 = a2 / v6;
            LOWORD(v3) = sub_1003AFA0((int)&dword_10AF9B38, v8 + 116, v8 + 76, v12);
            if (MEMORY[0x106C7DA8]) {
                v10 = (dword_10AF96C0 + 1) % (int)MEMORY[0x106C7DA8];
                v3 = sub_1003BA70((float *)&MEMORY[0x106C7CE8] + 5 * v10,
                                  (float *)&MEMORY[0x106C7CE0] + 5 * v10,
                                  v9,
                                  (float *)&dword_10AF9B38);
                if (v3) {
                    ++dword_10AF96C0;
                    if (!v10)
                        ++dword_10AF9B44;
                }
            }
            dword_10AF988C = a1;
            dword_10ACD490 = v4;
            return v3;
        }
    LABEL_14:
        a1 = *(_DWORD *)a1;
    }
    return v3;
}
// 10ACD490: using guessed type int dword_10ACD490;
// 10AF96C0: using guessed type int dword_10AF96C0;
// 10AF988C: using guessed type int dword_10AF988C;
// 10AF9B38: using guessed type int dword_10AF9B38;
// 10AF9B44: using guessed type int dword_10AF9B44;
