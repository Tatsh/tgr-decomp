#include "../../types-n64.h"
//----- (8026BBA0) --------------------------------------------------------
__int64 __fastcall sub_8026BBA0(int a1, int a2) {
    __int64 result;  // $v1
    int v3;          // $a1
    unsigned int v4; // $a3
    bool v5;         // dc
    int v6;          // $a1
    _DWORD *v7;      // $a3
    unsigned int v8; // $a3
    _DWORD *v9;      // $a3
    _DWORD *v10;     // $a1

    LODWORD(result) = -a1;
    if (a2 >= 12) {
        LODWORD(result) = result & 3;
        v3 = a2 - result;
        if ((_DWORD)result) {
            *(_DWORD *)a1 = 0;
            a1 += result;
        }
        v4 = v3 & 0xFFFFFFE0;
        v5 = (v3 & 0xFFFFFFE0) == 0;
        v6 = v3 - (v3 & 0xFFFFFFE0);
        if (!v5) {
            v7 = (_DWORD *)(v4 + a1);
            do {
                a1 += 32;
                *(_DWORD *)(a1 - 32) = 0;
                *(_DWORD *)(a1 - 28) = 0;
                *(_DWORD *)(a1 - 24) = 0;
                *(_DWORD *)(a1 - 20) = 0;
                *(_DWORD *)(a1 - 16) = 0;
                *(_DWORD *)(a1 - 12) = 0;
                *(_DWORD *)(a1 - 8) = 0;
                *(_DWORD *)(a1 - 4) = 0;
            } while ((_DWORD *)a1 != v7);
        }
        v8 = v6 & 0xFFFFFFFC;
        v5 = (v6 & 0xFFFFFFFC) == 0;
        a2 = v6 - (v6 & 0xFFFFFFFC);
        if (!v5) {
            v9 = (_DWORD *)(v8 + a1);
            do {
                a1 += 4;
                *(_DWORD *)(a1 - 4) = 0;
            } while ((_DWORD *)a1 != v9);
        }
    }
    if (a2 > 0) {
        v10 = (_DWORD *)(a2 + a1);
        do
            *(_BYTE *)a1++ = 0;
        while ((_DWORD *)a1 != v10);
    }
    return result;
}
