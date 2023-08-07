#include "../../types-win32.h"
//----- (1002BC90) --------------------------------------------------------
void __cdecl sub_1002BC90(_BYTE *a1) {
    __int16 v1;          // cx
    unsigned __int16 v2; // dx
    __int16 v3;          // ax
    int v4;              // edi
    int v5;              // ecx
    unsigned __int8 *v6; // eax
    unsigned __int16 v7; // dx
    int v8;              // ecx

    if (a1) {
        LOBYTE(v1) = 0;
        HIBYTE(v1) = a1[2];
        LOBYTE(v2) = a1[5];
        HIBYTE(v2) = a1[4];
        v3 = v1 | (unsigned __int8)a1[3];
        v4 = 0;
        v5 = (unsigned __int8)a1[6];
        *((_WORD *)a1 + 1) = v3;
        *((_DWORD *)a1 + 1) = (unsigned __int8)a1[7] | ((v5 | (v2 << 8)) << 8);
        if (v3) {
            v6 = a1 + 10;
            do {
                LOBYTE(v7) = *(v6 - 1);
                v8 = *v6;
                HIBYTE(v7) = *(v6 - 2);
                v6 += 12;
                *(_DWORD *)(v6 - 14) = *(v6 - 11) | ((v8 | (v7 << 8)) << 8);
                LOBYTE(v7) = *(v6 - 9);
                HIBYTE(v7) = *(v6 - 10);
                *(_DWORD *)(v6 - 10) = *(v6 - 7) | ((*(v6 - 8) | (v7 << 8)) << 8);
                LOBYTE(v7) = *(v6 - 5);
                HIBYTE(v7) = *(v6 - 6);
                ++v4;
                *(_DWORD *)(v6 - 6) = *(v6 - 3) | ((*(v6 - 4) | (v7 << 8)) << 8);
            } while (v4 < *((unsigned __int16 *)a1 + 1));
        }
    }
}
