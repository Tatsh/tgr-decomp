#include "types-n64.h"
//----- (8023FF80) --------------------------------------------------------
int __fastcall sub_8023FF80(_DWORD *a1) {
    _DWORD *v1; // $v0
    int v3;     // [sp+1Ch] [-4h] BYREF

    if (!a1)
        return -2;
    v1 = (_DWORD *)a1[7];
    if (!v1)
        return -2;
    a1[5] = 0;
    a1[2] = 0;
    a1[6] = 0;
    if (v1[3])
        *v1 = 7;
    else
        *v1 = 0;
    sub_8023EDB0(*(int **)(a1[7] + 20), (int)a1, &v3);
    return 0;
}
