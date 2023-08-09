#include "types-win32.h"
//----- (100341B3) --------------------------------------------------------
int __cdecl sub_100341B3(_DWORD *a1, int a2) {
    BOOL v3; // [esp+4h] [ebp-18h]
    int v4;  // [esp+8h] [ebp-14h]
    int i;   // [esp+Ch] [ebp-10h]
    int v6;  // [esp+Ch] [ebp-10h]
    int j;   // [esp+Ch] [ebp-10h]
    BOOL v8; // [esp+14h] [ebp-8h]
    int v9;  // [esp+18h] [ebp-4h]

    v4 = 0;
    v3 = !MEMORY[0x106C661C] && !MEMORY[0x106C6624];
    v9 = MEMORY[0x106C6618] + !v3 + 1;
    v8 = 0;
    if (a1) {
        while (1) {
            switch ((char)HIBYTE(*a1)) {
            case -72:
                goto LABEL_42;
            case -71:
                for (i = 0;; ++i) {
                    if (i >= 6)
                        goto LABEL_7;
                    if (*a1 == *(_DWORD *)(a2 + 32 * i) && a1[1] == *(_DWORD *)(a2 + 32 * i + 4))
                        break;
                }
                *a1 = *(_DWORD *)(32 * i + a2 + 8 * v9);
                a1[1] = *(_DWORD *)(32 * i + a2 + 8 * v9 + 4);
                if (i >= 3)
                    v4 = 1;
                goto LABEL_7;
            case -6:
                if (v8 && MEMORY[0x106C6620])
                    a1[1] = 1618513920;
                goto LABEL_7;
            case -5:
                if (v8 && MEMORY[0x106C6620])
                    a1[1] = -1935890432;
                goto LABEL_7;
            case -4:
                if (!v3)
                    goto LABEL_25;
                v6 = 0;
                break;
            default:
                goto LABEL_7;
            }
            while (1) {
                if (v6 >= 1)
                    goto LABEL_25;
                if (*a1 == dword_100AA8B8[4 * v6] && a1[1] == dword_100AA8BC[4 * v6])
                    break;
                ++v6;
            }
            *a1 = dword_100AA8C0[4 * v6];
            a1[1] = dword_100AA8C4[4 * v6];
        LABEL_25:
            if (MEMORY[0x106C6620] && MEMORY[0x106C666C]) {
                for (j = 0;
                     j < 2 && (*a1 != dword_100AA8C8[2 * j] || a1[1] != dword_100AA8CC[2 * j]);
                     ++j)
                    ;
                v8 = j < 2;
            }
        LABEL_7:
            a1 += 2;
        }
    }
LABEL_42:
    MEMORY[0x106C666C] = 0;
    return v4;
}
// 100AA8B8: using guessed type int dword_100AA8B8[];
// 100AA8BC: using guessed type int dword_100AA8BC[];
// 100AA8C0: using guessed type int dword_100AA8C0[];
// 100AA8C4: using guessed type int dword_100AA8C4[];
// 100AA8C8: using guessed type int dword_100AA8C8[];
// 106C6618: using guessed type int dword_106C6618;
// 106C661C: using guessed type int dword_106C661C;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C666C: using guessed type int dword_106C666C;
