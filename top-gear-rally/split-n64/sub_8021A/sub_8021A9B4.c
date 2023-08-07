#include "../../types-n64.h"
//----- (8021A9B4) --------------------------------------------------------
__int64 sub_8021A9B4() {
    int *v0;        // $s0
    __int64 result; // $v1

    sub_8021A964();
    v0 = dword_8036A8E0;
    do {
        sub_80255120((int)v0);
        result = sub_80255934(v0);
        v0 += 87;
    } while (v0 != dword_8036AE50);
    return result;
}
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036AE50: using guessed type int dword_8036AE50[512];
