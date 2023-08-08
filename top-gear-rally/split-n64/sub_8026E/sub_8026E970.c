#include "types-n64.h"
//----- (8026E970) --------------------------------------------------------
int *__fastcall sub_8026E970(int *a1, int a2, int a3) {
    int v3;      // $v0
    int v4;      // $v1
    int *result; // $v0
    int v6;      // [sp+0h] [-8h]
    int v7;      // [sp+4h] [-4h]

    v3 = a2 / a3;
    if (!a3)
        __break(7u, 0);
    if (a3 == -1 && a2 == 0x80000000)
        __break(6u, 0);
    v6 = a2 / a3;
    v4 = a2 - a3 * v3;
    v7 = v4;
    if (v3 < 0) {
        v6 = a2 / a3;
        v7 = a2 - a3 * v3;
        if (v4 > 0) {
            v7 = v4 - a3;
            v6 = v3 + 1;
        }
    }
    result = a1;
    *a1 = v6;
    a1[1] = v7;
    return result;
}
