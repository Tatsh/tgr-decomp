#include "../types-win32.h"
//----- (10065C80) --------------------------------------------------------
void __cdecl sub_10065C80(int a1, int a2, float a3, float a4) {
    int v6;    // ecx
    float *v7; // edx
    int v8;    // eax
    int v9;    // ebx
    float v10; // [esp+0h] [ebp-10h]
    int v11;   // [esp+18h] [ebp+8h]

    while (a1) {
        do {
            if ((*(_BYTE *)(a1 + 22) & 1) == 0)
                break;
            a1 = *(_DWORD *)(a1 + 4);
        } while (a1);
        if (!a1)
            break;
        v6 = *(unsigned __int16 *)(a1 + 20);
        if (a2 < (unsigned __int16)v6) {
            v7 = (float *)(a1 + 40 * a2 + 140);
            while (1) {
                *(float *)&v11 = (*(v7 - 10) - *v7) * a3;
                if (a4 <= (double)*(float *)&v11)
                    break;
                ++a2;
                v7 += 10;
                a3 = 1.0;
                a4 = a4 - *(float *)&v11;
                if (a2 >= v6)
                    goto LABEL_9;
            }
            v8 = a1 + 40 * a2;
            v9 = v8 + 116;
            sub_1003AFA0((int)&dword_10AF9B38, v8 + 76, v8 + 116, a3);
            v10 = a4 / *(float *)&v11;
            sub_1003AFA0((int)&dword_10AF9B38, v9, (int)&dword_10AF9B38, v10);
            dword_10AF988C = a1;
            dword_10ACD490 = a2;
            return;
        }
    LABEL_9:
        a1 = *(_DWORD *)a1;
        a2 = 0;
    }
}
// 10ACD490: using guessed type int dword_10ACD490;
// 10AF988C: using guessed type int dword_10AF988C;
// 10AF9B38: using guessed type int dword_10AF9B38;
