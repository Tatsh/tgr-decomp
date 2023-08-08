#include "types-n64.h"
//----- (802528F8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_802528F8(int a1, int a2, int a3) {
    int v3;  // $t0
    int v4;  // $s2
    char i;  // $t5
    int v6;  // $t0
    int v7;  // $t9
    int v8;  // $t7
    int v9;  // $t2
    int v10; // [sp+60h] [-28h]
    int v11; // [sp+78h] [-10h]
    int v12; // [sp+84h] [-4h]

    v3 = 0;
    word_8028DBB0 = 1;
    v4 = 2 * a3;
    v11 = 0;
    v10 = -2 * a3;
    if ((a3 & 0x40000000) == 0) {
        for (i = 0;; i = v7 + 1) {
            v12 = v3;
            v6 = v3 + 1;
            if ((i & 1) != 0) {
                v7 = v11;
            } else {
                v8 = v6 & 7;
                if (v6 < 0 && (v6 & 7) != 0)
                    v8 -= 8;
                v12 = v8;
                v7 = v11;
            }
            v3 = v12;
            v9 = v10 + v7;
            v10 = v9;
            v11 = v7 + 1;
            if (v9 >= 0)
                v10 = v9 - v4--;
            if (v4 < v11)
                break;
        }
    }
}
// 80252960: write access to const memory at 8028DBB0 has been detected
// 80252A1C: conditional instruction was optimized away because of '$s0.4>=0'
// 80252A60: conditional instruction was optimized away because of '$s0.4>=0'
// 80252AC4: conditional instruction was optimized away because of '$a1.4>=0'
// 80252AEC: conditional instruction was optimized away because of '$s0.4>=0'
// 80252B44: conditional instruction was optimized away because of '$a0.4>=0'
// 80252B9C: conditional instruction was optimized away because of '$s0.4>=0'
// 80252BD0: conditional instruction was optimized away because of '$a0.4>=0'
// 80252C10: conditional instruction was optimized away because of '$a0.4>=0'
// 8028DB94: using guessed type int dword_8028DB94;
// 8028DBB0: using guessed type __int16 word_8028DBB0;
