#include "types-n64.h"
//----- (8026E870) --------------------------------------------------------
int __fastcall sub_8026E870(int a1, int a2, __int64 a3, __int64 a4) {
    int v4;      // $v1
    __int64 v5;  // $v1
    __int64 v6;  // $t9
    int result;  // $v0
    int v8;      // [sp+20h] [-10h]
    int v9;      // [sp+24h] [-Ch]
    __int64 v10; // [sp+28h] [-8h]

    v8 = sub_8026612C(a3, a4);
    v9 = v4;
    HIDWORD(v5) = sub_80266188();
    v6 = a3 - v5;
    v10 = a3 - v5;
    if (v8 < 0 && v6 > 0) {
        v8 += v9++ == -1;
        v10 = v6 - a4;
    }
    result = a1;
    *(_DWORD *)a1 = v8;
    *(_DWORD *)(a1 + 4) = v9;
    *(_QWORD *)(a1 + 8) = v10;
    return result;
}
// 8026E89C: variable 'v4' is possibly undefined
// 8026E8CC: variable 'v5' is possibly undefined
