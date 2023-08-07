#include "../../types-n64.h"
//----- (8024F7D4) --------------------------------------------------------
int __fastcall sub_8024F7D4(int a1, int a2, int a3, int a4) {
    int v4;     // $a1
    int v5;     // $s4
    int v6;     // $s5
    int v7;     // $s3
    int result; // $v0
    int v9;     // $s1
    BOOL i;     // $at
    int v11;    // $s0
    int j;      // $a0

    v4 = -a2 >> 2;
    v5 = a1 >> 2;
    v6 = -a4 >> 2;
    v7 = a3 >> 2;
    if (a3 >> 2 < a1 >> 2) {
        v5 = a3 >> 2;
        v7 = a1 >> 2;
    }
    result = v4;
    if (v6 < v4) {
        v4 = -a4 >> 2;
        v6 = result;
    }
    v9 = v4;
    if (v4 < v6) {
        for (i = v5 < v7;; i = v5 < v7) {
            v11 = v5;
            if (i) {
                for (j = v5;; j = v11) {
                    result = sub_8024F25C(j);
                    if (++v11 == v7)
                        break;
                }
            }
            if (++v9 == v6)
                break;
        }
    }
    return result;
}
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB94: using guessed type int dword_8028DB94;
