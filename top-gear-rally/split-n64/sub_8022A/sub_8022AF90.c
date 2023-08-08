#include "types-n64.h"
//----- (8022AF90) --------------------------------------------------------
void __fastcall sub_8022AF90(_DWORD *a1) {
    int v1;  // $a1
    int v2;  // $v1
    int *v3; // $v0
    int v4;  // $a0
    int i;   // $t9
    int v6;  // $t5

    v1 = a1[80];
    if (v1 < 1 && a1[990] == 2 && !*(_DWORD *)(a1[2077] + 4 * v1 + 44)) {
        debugPrint("SAVING LAST LAP INFO\n");
        v2 = 0;
        v3 = dword_8031B760;
        v4 = 0;
        for (i = a1[80];; i = a1[80]) {
            ++v2;
            *(_DWORD *)(v3[2077] + 4 * i + 52) = 0;
            v6 = v3[2077];
            v3 += 2084;
            *(_DWORD *)(v6 + 4 * a1[80] + 60) = 14400;
            *(_DWORD *)(*(v3 - 7) + 4 * a1[80] + 44) = &dword_803F1E98[v4 + -14306 * a1[80]];
            v4 += 3600;
            if (v2 >= 1)
                break;
        }
        sub_8022AED8((int)&dword_803F1E98[-14306 * a1[80]]);
    }
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8031B760: using guessed type int dword_8031B760[512];
// 803F1E98: using guessed type int dword_803F1E98[512];
