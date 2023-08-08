#include "types-n64.h"
//----- (8021F1F0) --------------------------------------------------------
void __fastcall sub_8021F1F0(int a1) {
    int v2;     // $t9
    float *v3;  // $a0
    int v4;     // $t1
    char *v5;   // $t6
    _DWORD *v6; // [sp+18h] [+4h]

    if (MEMORY[0x80025C70]) {
        if (*(int *)(a1 + 3960) >= 3) {
            *(_DWORD *)(a1 + 8300) = 0;
            return;
        }
        v2 = *(_DWORD *)(a1 + 3916);
        v3 = (float *)(a1 + 3940);
        if (v2) {
            *(_DWORD *)(a1 + 8300) = 0;
            return;
        }
        v6 = (_DWORD *)a1;
        if (sub_80224404(v3, (float *)a1) >= 0.0) {
            v6[2075] = 0;
            return;
        }
        v4 = v6[2075] + 1;
        v6[2075] = v4;
        if (v4 < 32) {
            v5 = (char *)v6[1004];
        LABEL_14:
            if ("%yyWRONG WAY" == v5) {
                v6[1006] = 0;
                v6[1004] = 0;
            }
            return;
        }
        if ((v4 & 0x10) != 16) {
            v5 = (char *)v6[1004];
            goto LABEL_14;
        }
        if (!v6[1004]) {
            v6[1004] = "%yyWRONG WAY";
            v6[1006] = 0;
            v6[1005] = 1048576000;
        }
    }
}
