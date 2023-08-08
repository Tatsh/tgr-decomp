#include "../types-win32.h"
//----- (1001B3B0) --------------------------------------------------------
int __thiscall meth_1001B3B0(int *this) {
    _DWORD *v2; // eax
    int v3;     // ecx
    int v4;     // esi
    int v5;     // eax

    v2 = (_DWORD *)this[198];
    if (v2) {
        do {
            v3 = v2[27];
            v4 = v2[28];
            if (v3)
                *(_DWORD *)(v3 + 112) = v4;
            else
                this[198] = v4;
            if (v4)
                *(_DWORD *)(v4 + 108) = v3;
            else
                this[199] = v3;
            v2[28] = 0;
            v2[27] = 0;
            if (v2) {
                v2[27] = 0;
                v2[28] = 0;
                free(v2);
            }
            v2 = (_DWORD *)v4;
        } while (v4);
    }
    v5 = *this;
    this[197] = 0;
    LOBYTE(v5) = v5 & 0xF7;
    this[198] = 0;
    this[199] = 0;
    *this = v5;
    return 0;
}
