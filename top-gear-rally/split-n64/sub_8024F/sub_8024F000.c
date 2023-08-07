#include "../../types-n64.h"
//----- (8024F000) --------------------------------------------------------
int __fastcall sub_8024F000(int a1, int a2, int a3, int a4) {
    int v4;     // $a0
    int v5;     // $t0
    int v6;     // $a1
    int v7;     // $a3
    int v8;     // $a2
    int v9;     // $s5
    int result; // $v0
    int v11;    // $s4
    int v12;    // $s7
    bool v13;   // dc
    int v14;    // $s6
    int v15;    // $s1
    int v16;    // $s2
    int v17;    // $s1
    int v18;    // $s2
    int v19;    // $s0
    int v20;    // $s0
    int v21;    // [sp+44h] [-2Ch]
    int v22;    // [sp+44h] [-2Ch]

    v4 = a1 >> 2;
    v5 = (a3 >> 2) - v4;
    v6 = -a2 >> 2;
    v7 = -a4 >> 2;
    v8 = a3 >> 2;
    if (v5 >= 0)
        v9 = v5;
    else
        v9 = -v5;
    result = v7 - v6;
    v11 = v7 - v6;
    if (v7 - v6 < 0)
        v11 = v6 - v7;
    v12 = 1;
    if (v11 < v9 && v8 < v4) {
        v13 = 0;
    } else {
        if (v9 >= v11)
            goto LABEL_13;
        v13 = v7 >= v6;
    }
    result = v4;
    if (!v13) {
        v4 = v8;
        v8 = result;
        result = v6;
        v6 = v7;
        v7 = result;
    }
LABEL_13:
    v14 = 1;
    if (v7 < v6)
        v12 = -1;
    v15 = v4;
    if (v8 < v4)
        v14 = -1;
    v16 = v6;
    if (v11 >= v9) {
        v20 = 0;
        if (v7 >= v6) {
            v22 = v7 + 1;
            do {
                if (v20 >= v11) {
                    v20 -= v11;
                    v15 += v14;
                }
                result = sub_8025159C(v15, v16++, 2, 0);
                v20 += v9;
            } while (v22 != v16);
        }
    } else {
        v17 = v4;
        v18 = v6;
        v19 = 0;
        if (v8 >= v4) {
            v21 = v8 + 1;
            do {
                if (v19 >= v9) {
                    v19 -= v9;
                    v18 += v12;
                }
                result = sub_8025159C(v17++, v18, 2, 0);
                v19 += v11;
            } while (v21 != v17);
        }
    }
    return result;
}
// 8028DAC0: using guessed type char byte_8028DAC0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
