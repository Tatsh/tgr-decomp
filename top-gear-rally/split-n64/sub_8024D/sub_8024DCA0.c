#include "../../types-n64.h"
//----- (8024DCA0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8024DCA0(int a1, int a2) {
    int v2;     // $ra
    int v3;     // $s1
    int result; // $v0
    int v5;     // $s0
    int *v6;    // $fp
    int i;      // $v0
    int v8;     // $a0
    int v9;     // $t4
    int v10;    // $t6
    int v11;    // $s0
    int v12;    // $s1
    int v13;    // $a0
    int v14;    // $t9
    int v15;    // $t5
    int v16;    // $t1
    int v17;    // $t6
    int v18;    // [sp+3Ch] [-1934h]
    int v19;    // [sp+40h] [-1930h]
    int v20;    // [sp+54h] [-191Ch]
    int v21;    // [sp+58h] [-1918h]
    int v22;    // [sp+5Ch] [-1914h]
    int v23;    // [sp+60h] [-1910h]
    int v24[5]; // [sp+64h] [-190Ch]
    int v25;    // [sp+78h] [-18F8h] BYREF
    int v26;    // [sp+1958h] [-18h]
    int v27;    // [sp+195Ch] [-14h]
    int v28;    // [sp+1960h] [-10h]
    int v29;    // [sp+1964h] [-Ch]
    int v30;    // [sp+1968h] [-8h]
    char v31;   // [sp+196Fh] [-1h]

    v18 = v2;
    v3 = -a2 >> 2;
    v5 = a1 >> 2;
    result = sub_8024D7D8(a1 >> 2, v3);
    v31 = result;
    if (result != 3) {
        v21 = v3;
        v22 = v5;
        v23 = v5;
        v24[0] = 1;
        v24[1] = v3 + 1;
        v24[2] = v5;
        v24[3] = v5;
        v29 = 2;
        v24[4] = -1;
        dword_8028DB7C = 0;
        v20 = 0;
        sub_80260B20(0, 0, 2048);
        v6 = &v25;
        dword_8028DB78 = 0;
        for (i = 2;; i = v29) {
            v6 -= 4;
            v29 = i - 1;
            v30 = v24[4 * i - 4];
            v8 = v6[1];
            v9 = *v6;
            v10 = v6[2];
            v11 = v8;
            v27 = v8;
            v12 = v9 + v30;
            v26 = v10;
            if (v8 >= 0) {
                v27 = v8;
                if (v12 >= 0)
                    v27 = v8;
            }
            v13 = v27;
            result = v11 + 1;
            if (v11 < v27) {
                v28 = v11 + 1;
                if (v11 + 1 < v27) {
                    *v6 = v12;
                    v14 = v28;
                    v6[2] = v13 - 1;
                    v6[1] = v14;
                    v6 += 4;
                    *(v6 - 1) = -v30;
                    ++v29;
                }
                v11 = v13 + 1;
                v15 = v26;
                goto LABEL_10;
            }
            while (1) {
                v28 = ++v11;
                if (v26 < v11)
                    break;
                v15 = v26;
            LABEL_10:
                v19 = v15 + 1;
                *v6 = v12;
                v16 = v28;
                result = v11 - 1;
                v6[2] = v11 - 1;
                v6[1] = v16;
                v6 += 4;
                *(v6 - 1) = v30;
                ++v29;
                if (v19 < v11) {
                    *v6 = v12;
                    v17 = v19;
                    v6[2] = result;
                    v6 += 4;
                    *(v6 - 3) = v17;
                    *(v6 - 1) = -v30;
                    ++v29;
                }
            }
            if (v29 <= 0 || v29 >= 400)
                break;
        }
        dword_8028DB7C = v20;
        dword_8028DB78 = 0;
    }
    return result;
}
// 8024E080: write access to const memory at 8028DB7C has been detected
// 8024DD60: write access to const memory at 8028DB7C has been detected
// 8024E0F4: write access to const memory at 8028DB78 has been detected
// 8024DDA0: write access to const memory at 8028DB78 has been detected
// 8024DDFC: conditional instruction was optimized away because of '$s1.4>=0'
// 8024DED8: conditional instruction was optimized away because of '$s1.4>=0'
// 8024DFE0: conditional instruction was optimized away because of '$s1.4>=0'
// 8024DCCC: variable 'v2' is possibly undefined
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB78: using guessed type int dword_8028DB78;
// 8028DB7C: using guessed type int dword_8028DB7C;
// 8028DB94: using guessed type int dword_8028DB94;
