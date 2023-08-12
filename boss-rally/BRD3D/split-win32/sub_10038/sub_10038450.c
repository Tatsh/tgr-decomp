#include "types-win32.h"
//----- (10038450) --------------------------------------------------------
void __cdecl sub_10038450(int a1, int a2) {
    _DWORD *v2; // eax
    int v3;     // ebp
    void *v4;   // edi
    int v5;     // ecx
    int v6;     // edx
    int v7;     // ecx
    void *v8;   // edi

    if (a2 > 0) {
        v2 = (_DWORD *)(a1 + 8);
        v3 = a2;
        do {
            v4 = (void *)*(v2 - 2);
            if (v4) {
                v5 = v2[6];
                if ((v5 & 0x100000) != 0) {
                    v6 = *v2;
                    if (*(_WORD *)(*v2 + 2) == 2 && *(_DWORD *)(v6 + 8) == -1) {
                        v7 = v5 & 0x3FFFF;
                        if (v7) {
                            qmemcpy(v4, (const void *)(dword_10690BEC + *(_DWORD *)(v6 + 12)), v7);
                            v8 = (void *)*(v2 - 1);
                            if (v8)
                                qmemcpy(v8,
                                        (const void *)(dword_10690BEC + *(_DWORD *)(*v2 + 16)),
                                        (*(_DWORD *)((char *)v2 + -8 - a1 +
                                                     *(_DWORD *)&gUnk06594.gap1C8[18204] + 32) &
                                         0xF000000) != 0x1000000 ?
                                            512 :
                                            32);
                        }
                    }
                }
            }
            v2 += 9;
            --v3;
        } while (v3);
    }
}
// 10690BEC: using guessed type int dword_10690BEC;
