#include "types-n64.h"
//----- (8021D6DC) --------------------------------------------------------
int __fastcall sub_8021D6DC(int a1, __int16 a2, __int16 a3) {
    int result;  // $v0
    __int16 v5;  // $a2
    int v6;      // $v1
    int v7;      // $a1
    int v8;      // $t0
    int v9;      // $a3
    __int16 v10; // $t8
    bool v11;    // dc
    int v12;     // $a3
    int v13;     // $v0
    __int16 v14; // $t7
    int v15;     // $v0
    __int16 v16; // $t4
    int v17;     // $v0
    __int16 v18; // $t1
    __int16 v19; // $t5

    result = *(_DWORD *)(a1 + 4);
    v5 = ~a3;
    if (result) {
        v6 = *(_DWORD *)result;
        v7 = 0;
        v11 = *(_DWORD *)result <= 0;
        result = *(_DWORD *)result & 3;
        if (!v11) {
            v8 = result;
            if (result) {
                v9 = 0;
                do {
                    ++v7;
                    result = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v9 + 4);
                    v9 += 4;
                    v10 = *(_WORD *)(result + 16);
                    *(_WORD *)(result + 16) = v10 | a2;
                    *(_WORD *)(result + 16) = (v10 | a2) & v5;
                } while (v8 != v7);
                v11 = v7 == v6;
            } else {
                v11 = 0;
            }
            v12 = 4 * v7;
            if (!v11) {
                do {
                    v13 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v12 + 4);
                    v14 = *(_WORD *)(v13 + 16) | a2;
                    *(_WORD *)(v13 + 16) = v14;
                    *(_WORD *)(v13 + 16) = v14 & v5;
                    v15 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v12 + 8);
                    v16 = *(_WORD *)(v15 + 16) | a2;
                    *(_WORD *)(v15 + 16) = v16;
                    *(_WORD *)(v15 + 16) = v16 & v5;
                    v17 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v12 + 12);
                    v18 = *(_WORD *)(v17 + 16) | a2;
                    *(_WORD *)(v17 + 16) = v18;
                    *(_WORD *)(v17 + 16) = v18 & v5;
                    result = *(_DWORD *)(*(_DWORD *)(a1 + 4) + v12 + 16);
                    v12 += 16;
                    v19 = *(_WORD *)(result + 16);
                    *(_WORD *)(result + 16) = v19 | a2;
                    *(_WORD *)(result + 16) = (v19 | a2) & v5;
                } while (v12 != 4 * v6);
            }
        }
    }
    return result;
}
