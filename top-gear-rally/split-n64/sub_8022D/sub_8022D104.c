#include "types-n64.h"
//----- (8022D104) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_8022D104(float a1, float a2, float a3, float a4) {
    float v4;    // $f22
    float v6;    // $f28
    int v8;      // $v0
    int v9;      // $s0
    int v10;     // $v0
    int v11;     // $s0
    int v12;     // $s1
    int v13;     // $v0
    int v14;     // $a2
    int v15;     // $a0
    int *result; // $v0
    bool v17;    // $fcc0
    float v18;   // $f0
    float v19;   // $f0
    float v20;   // $s1
    float v21;   // $s2
    char *v22;   // $s4
    int v23;     // $f6
    float v24;   // $f0
    float v25;   // $f20
    int v26;     // $s1

    v4 = a1 * 0.03125;
    v6 = a1;
    v9 = sub_802562E0(a1 * 0.03125);
    v8 = sub_802562E0(a2 * 0.03125);
    sub_8022D090(v9, v8);
    v11 = sub_802562E0(a3 * 0.03125);
    v10 = sub_802562E0(a4 * 0.03125);
    sub_8022D090(v11, v10);
    v12 = sub_802562E0(v4);
    v13 = sub_802562E0(a3 * 0.03125);
    v14 = v13;
    if (v13 < v12) {
        v15 = v13 ^ v12;
        v12 = v13;
        v14 = v15 ^ v13;
    }
    if (v12 < 0)
        dword_8028BD90 = v12;
    result = &dword_8028BD98;
    if (v14 > 0)
        dword_8028BD98 = v14;
    if (a4 < a2) {
        v18 = v6;
        v6 = a3;
        a3 = v18;
        v19 = a2;
        a2 = a4;
        a4 = v19;
        v17 = v19 == a2;
    } else {
        v17 = a4 == a2;
    }
    if (!v17) {
        v20 = COERCE_FLOAT(sub_802562E0(a2 * 0.03125));
        result = (int *)sub_802562E0(a4 * 0.03125);
        if (v20 < 0.0)
            dword_8028BD94 = LODWORD(v20);
        if ((int)result > 0)
            dword_8028BD9C = (int)result;
        v21 = v20;
        if ((int)result >= SLODWORD(v20)) {
            v22 = (char *)result + 1;
            for (*(float *)&v23 = v20;; *(float *)&v23 = v21) {
                v24 = (float)v23 * 32.0;
                if (a2 <= v24) {
                    if (v24 <= a4) {
                        v25 = (float)((float)((float)(a3 - v6) * (float)(v24 - a2)) /
                                      (float)(a4 - a2)) +
                              v6;
                        v26 = sub_802562E0(v25 * 0.03125);
                        sub_8022D090(v26, LODWORD(v21) - 1);
                        result = (int *)sub_8022D090(v26, SLODWORD(v21));
                        if (v25 <= (float)((float)v26 * 32.0)) {
                            sub_8022D090(v26 - 1, LODWORD(v21) - 1);
                            result = (int *)sub_8022D090(v26 - 1, SLODWORD(v21));
                        }
                        if ((float)((float)(v26 + 1) * 32.0) <= v25) {
                            sub_8022D090(v26 + 1, LODWORD(v21) - 1);
                            result = (int *)sub_8022D090(v26 + 1, SLODWORD(v21));
                        }
                        ++LODWORD(v21);
                    } else {
                        ++LODWORD(v21);
                    }
                } else {
                    ++LODWORD(v21);
                }
                if (v22 == (char *)LODWORD(v21))
                    break;
            }
        }
    }
    return result;
}
// 8022D290: write access to const memory at 8028BD9C has been detected
// 8022D27C: write access to const memory at 8028BD94 has been detected
// 8022D200: write access to const memory at 8028BD98 has been detected
// 8022D1E4: write access to const memory at 8028BD90 has been detected
// 8028BD90: using guessed type int dword_8028BD90;
// 8028BD94: using guessed type int dword_8028BD94;
// 8028BD98: using guessed type int dword_8028BD98;
// 8028BD9C: using guessed type int dword_8028BD9C;
