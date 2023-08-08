#include "../types-win32.h"
//----- (100344D7) --------------------------------------------------------
int sub_100344D7() {
    int j; // [esp+0h] [ebp-Ch]
    int k; // [esp+4h] [ebp-8h]
    int l; // [esp+4h] [ebp-8h]
    int m; // [esp+4h] [ebp-8h]
    int n; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    dword_106C666C = 0;
    for (i = 0; i < dword_100B36FC; ++i) {
        for (j = 0; j < 3; ++j) {
            if (byte_10AD0857[11112 * i] == 2) {
                for (k = 0; k < 10; ++k)
                    sub_100341B3(*(_DWORD **)(dword_10AD086C[2778 * i] + 40 * j + 32792 + 4 * k),
                                 (int)&unk_100AA998);
                for (l = 0; l < 3; ++l)
                    sub_100341B3(*(_DWORD **)(dword_10AD086C[2778 * i] + 12 * j + 32956 + 4 * l),
                                 (int)&unk_100AAA58);
            } else {
                for (m = 0; m < 10; ++m)
                    sub_100341B3(*(_DWORD **)(dword_10AD086C[2778 * i] + 40 * j + 32792 + 4 * m),
                                 (int)&unk_100AA8D8);
                for (n = 0; n < 3; ++n)
                    sub_100341B3(*(_DWORD **)(dword_10AD086C[2778 * i] + 12 * j + 32956 + 4 * n),
                                 (int)&unk_100AA8D8);
            }
        }
    }
    return dword_10B501D4();
}
// 100B36FC: using guessed type int dword_100B36FC;
// 106C666C: using guessed type int dword_106C666C;
// 10AD086C: using guessed type int dword_10AD086C[];
// 10B501D4: using guessed type int (*dword_10B501D4)(void);
