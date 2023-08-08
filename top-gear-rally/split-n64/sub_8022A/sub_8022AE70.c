#include "types-n64.h"
//----- (8022AE70) --------------------------------------------------------
char *__fastcall sub_8022AE70(int *a1, char *a2) {
    int *v3;      // $s0
    char *v4;     // $s1
    char *result; // $v0
    int v6;       // $t7

    v3 = a1;
    if (*a1) {
        v4 = (char *)*a1;
        do {
            result = sub_80260B20(v4, a2, v3[1]);
            v4 = (char *)v3[2];
            v6 = v3[1];
            v3 += 2;
            a2 += v6;
        } while (v4);
    }
    return result;
}
