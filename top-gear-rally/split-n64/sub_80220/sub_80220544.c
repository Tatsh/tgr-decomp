#include "types-n64.h"
//----- (80220544) --------------------------------------------------------
int __fastcall sub_80220544(int *a1) {
    int v1; // $v1

    v1 = a1[6];
    if (v1) {
        LoadCarWithIndex2((char *)&dword_803C8000[14306 * a1[8]],
                          *(_DWORD *)(96 * a1[9] - 2144817632),
                          (char *)a1);
        v1 = a1[6];
        if (!v1) {
            *(_DWORD *)(4 * a1[8] - 2144226760) = a1[9];
            sub_8021D32C((unsigned int *)&dword_803C8000[14306 * a1[8]]);
            v1 = a1[6];
        }
    }
    return v1;
}
// 803C8000: using guessed type int dword_803C8000[512];
