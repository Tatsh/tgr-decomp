#include "types-win32.h"
//----- (1002BAA0) --------------------------------------------------------
void __cdecl sub_1002BAA0(int a1) {
    char v1;              // al
    char v2;              // dl
    char v3;              // al
    char v4;              // al
    char v5;              // dl
    void **v6;            // ebp
    char v7;              // al
    char v8;              // al
    char v9;              // dl
    _BYTE **v10;          // esi
    unsigned __int16 v11; // cx
    __int16 v12;          // ax
    __int16 v13;          // dx
    int v14;              // eax
    int v15;              // ecx
    int v16;              // edi
    int v17;              // esi
    int v18;              // edx
    int v19;              // eax
    void *v20;            // edi
    const void *v21;      // esi
    unsigned int v22;     // ecx
    int v23;              // esi

    v1 = *(_BYTE *)(a1 + 3);
    v2 = *(_BYTE *)(a1 + 1);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)a1;
    *(_BYTE *)a1 = v1;
    v3 = *(_BYTE *)(a1 + 2);
    *(_BYTE *)(a1 + 2) = v2;
    *(_BYTE *)(a1 + 1) = v3;
    track_1002B970((int *)a1);
    v4 = *(_BYTE *)(a1 + 7);
    v5 = *(_BYTE *)(a1 + 5);
    v6 = (void **)(a1 + 4);
    *(_BYTE *)(a1 + 7) = *(_BYTE *)(a1 + 4);
    *(_BYTE *)(a1 + 4) = v4;
    v7 = *(_BYTE *)(a1 + 6);
    *(_BYTE *)(a1 + 6) = v5;
    *(_BYTE *)(a1 + 5) = v7;
    track_1002B970((int *)(a1 + 4));
    v8 = *(_BYTE *)(a1 + 11);
    v9 = *(_BYTE *)(a1 + 9);
    v10 = (_BYTE **)(a1 + 8);
    *(_BYTE *)(a1 + 11) = *(_BYTE *)(a1 + 8);
    LOBYTE(v11) = *(_BYTE *)(a1 + 15);
    *(_BYTE *)(a1 + 8) = v8;
    HIBYTE(v11) = *(_BYTE *)(a1 + 14);
    *(_BYTE *)(a1 + 9) = *(_BYTE *)(a1 + 10);
    LOBYTE(v12) = *(_BYTE *)(a1 + 13);
    *(_BYTE *)(a1 + 10) = v9;
    HIBYTE(v12) = *(_BYTE *)(a1 + 12);
    *(_WORD *)(a1 + 14) = v11;
    *(_WORD *)(a1 + 12) = v12;
    LOBYTE(v12) = *(_BYTE *)(a1 + 19);
    LOBYTE(v13) = *(_BYTE *)(a1 + 17);
    HIBYTE(v12) = *(_BYTE *)(a1 + 18);
    HIBYTE(v13) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = *(_BYTE *)(a1 + 21);
    *(_WORD *)(a1 + 18) = v12;
    HIBYTE(v11) = *(_BYTE *)(a1 + 20);
    v14 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(a1 + 16) = v13;
    *(_WORD *)(a1 + 20) = v11;
    LOBYTE(v11) = 0;
    LOBYTE(v13) = *(_BYTE *)(a1 + 23);
    HIBYTE(v13) = *(_BYTE *)(a1 + 22);
    HIBYTE(v11) = v14;
    *(_WORD *)(a1 + 22) = v13;
    v15 = HIBYTE(v14) | ((BYTE2(v14) | ((BYTE1(v14) | v11) << 8)) << 8);
    *(_DWORD *)(a1 + 32) = v15;
    if (dword_10675540) {
        if ((v15 & 0x100000) != 0) {
            v16 = 0;
            track_1002B970((int *)(a1 + 8));
            sub_1002BC90(*v10);
            v17 = (int)*v10;
            if (*(_WORD *)(v17 + 2) == 2 && *(_DWORD *)(v17 + 8) == -1)
                v16 = 1;
            v18 = *(_DWORD *)(v17 + 12 * v16 + 16);
            v19 = *(_DWORD *)(v17 + 12 * (v16 + 1));
            if (!v16 && (*(_DWORD *)(a1 + 32) & 0x3FFFF) != 0 && v19 != -1)
                qmemcpy(*(void **)a1,
                        (const void *)(v19 + dword_10690BEC),
                        4 * ((*(_DWORD *)(a1 + 32) & 0x3FFFFu) >> 2) + (*(_BYTE *)(a1 + 32) & 3));
            v20 = *v6;
            if (*v6 && v18 != -1) {
                v21 = (const void *)(v18 + dword_10690BEC);
                v22 = (*(_DWORD *)(a1 + 32) & 0xF000000) != 0x1000000 ? 512 : 32;
            LABEL_15:
                qmemcpy(v20, v21, v22);
                goto LABEL_16;
            }
        } else {
            v20 = *v6;
            v23 = 32 * ((unsigned int)*v10 & 0xFFF);
            if (*v6) {
                v22 = (v15 & 0xF000000) != 0x1000000 ? 512 : 32;
                v21 = (const void *)(dword_10690BEC + v23);
                goto LABEL_15;
            }
        }
    }
LABEL_16:
    nullsub_2();
}
// 10675540: using guessed type int dword_10675540;
// 10690BEC: using guessed type int dword_10690BEC;
