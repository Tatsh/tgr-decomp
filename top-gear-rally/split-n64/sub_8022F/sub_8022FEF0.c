#include "../../types-n64.h"
//----- (8022FEF0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8022FEF0(int a1) {
    int *v1;   // $s3
    int v2;    // $s0
    float *v3; // $s1
    int v4;    // $s2

    v1 = &dword_8031B760[2084 * a1];
    dword_8028AB08 = v1[2078];
    v2 = 0;
    v3 = (float *)(v1 + 28);
    v4 = (int)(v1 + 16);
    if (MEMORY[0xBC]) {
        do {
            sub_80260B20(v4, (char *)v1, 48);
            sub_80224DDC(v3, (float *)(v2 + 224), (float *)v1);
            v2 += 12;
            v3 += 16;
            v4 += 64;
        } while (v2 != 48);
    }
}
// 8022FF3C: write access to const memory at 8028AB08 has been detected
// 8028AB08: using guessed type int dword_8028AB08;
// 8031B760: using guessed type int dword_8031B760[512];
