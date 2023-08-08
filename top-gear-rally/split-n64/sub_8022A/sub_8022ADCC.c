#include "types-n64.h"
//----- (8022ADCC) --------------------------------------------------------
void __fastcall sub_8022ADCC(char **a1, int a2, int a3) {
    char *v3;    // $s2
    char **v4;   // $s0
    int v5;      // $t8
    char *v6;    // $s1
    char *v7;    // $t7
    char v8[80]; // [sp+30h] [-58h] BYREF
    int v9;      // [sp+80h] [-8h]

    v9 = a2;
    v3 = (char *)a2;
    v4 = a1;
    if (*a1) {
        v6 = *a1;
        do {
            sub_80260B20(v3, v6, (int)v4[1]);
            v6 = v4[2];
            v7 = v4[1];
            v4 += 2;
            v3 = &v7[(_DWORD)v3];
        } while (v6);
        v5 = v9;
    } else {
        v5 = v9;
    }
    if (a3 < (int)&v3[-v5]) {
        sub_80260DD4(v8, "VAR SAVE OVERFLOW (%d avail, %d used)", a3, &v3[-v5]);
        sub_8021E1F4(v8);
    }
}
