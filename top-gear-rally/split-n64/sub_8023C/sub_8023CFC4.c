#include "../../types-n64.h"
//----- (8023CFC4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8023CFC4() {
    int result; // $v0
    int *v1;    // $s0
    int i;      // $s1
    int v3;     // $a0

    sub_8023CF30();
    dword_8028C840 = 1;
    sub_8023CD60();
    result = 1;
    v1 = dword_803239A0;
    for (i = 0; i < 1; ++i) {
        v3 = v1[24];
        if (v3) {
            sub_8023C800(v3);
            sub_8023B418(v1[24]);
            result = 1;
        }
        v1 += 30;
    }
    return result;
}
// 8023CFEC: write access to const memory at 8028C840 has been detected
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028C840: using guessed type int dword_8028C840;
// 803239A0: using guessed type int dword_803239A0[24];
