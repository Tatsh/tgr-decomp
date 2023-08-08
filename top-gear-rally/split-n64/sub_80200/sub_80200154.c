#include "types-n64.h"
//----- (80200154) --------------------------------------------------------
int sub_80200154() {
    char *v0;   // $s1
    char *v1;   // $s0
    int result; // $v0

    v0 = (char *)dword_8031B760;
    v1 = (char *)dword_8036A8E0;
    do {
        sub_80226100(v0);
        result = sub_80255B54(v1);
        v1 += 348;
        v0 += 8336;
    } while (v1 != (char *)dword_8036AE50);
    return result;
}
// 8031B760: using guessed type int dword_8031B760[512];
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036AE50: using guessed type int dword_8036AE50[512];
