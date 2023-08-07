#include "../../types-n64.h"
//----- (8020C27C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8020C27C(int a1, int *a2) {
    int v4;  // $a2
    int v5;  // $a3
    int i;   // $a1
    int v7;  // $t3
    int v8;  // $v1
    int v9;  // $v0
    int v10; // $v0

    dword_8028A884 = 1;
    osViBlack(1);
    sub_80219A1C();
    sub_8021AA08();
    osViBlack(1);
    sub_80219A1C();
    sub_8021AA08();
    dword_8028A884 = 0;
    *a2 = 0;
    v4 = 0;
    if (*(_DWORD *)a1) {
        v5 = *(_DWORD *)a1;
        for (i = *(_DWORD *)(*(_DWORD *)a1 + 12);; i = *(_DWORD *)(v5 + 12)) {
            if (i) {
                v8 = 0;
                if (v4 > 0) {
                    v9 = a1;
                    while (i != *(_DWORD *)(*(_DWORD *)v9 + 12)) {
                        ++v8;
                        v9 += 4;
                        if (v8 >= v4)
                            goto LABEL_11;
                    }
                    *(_DWORD *)(v5 + 8) = *(_DWORD *)(*(_DWORD *)v9 + 8);
                    v4 = *a2;
                }
            LABEL_11:
                if (v8 == v4) {
                    v10 = CHK_GetFileSize(*(_DWORD *)(*(_DWORD *)(a1 + 4 * v4) + 12));
                    *(_DWORD *)(*(_DWORD *)(a1 + 4 * *a2) + 8) = sub_8024296C(v10);
                    sub_8021DE2C(*(unsigned __int8 **)(*(_DWORD *)(a1 + 4 * *a2) + 8),
                                 *(_DWORD *)(*(_DWORD *)(a1 + 4 * *a2) + 12));
                    v4 = *a2;
                }
                v7 = v4 + 1;
            } else {
                v7 = v4 + 1;
            }
            *a2 = v7;
            v5 = *(_DWORD *)(a1 + 4 * v7);
            v4 = v7;
            if (!v5)
                break;
        }
    }
}
// 8020C2A8: write access to const memory at 8028A884 has been detected
// 8020C314: write access to const memory at 8028A884 has been detected
// 8028A850: using guessed type int dword_8028A850;
// 8028A884: using guessed type int dword_8028A884;
