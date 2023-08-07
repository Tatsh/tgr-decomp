#include "../../types-win32.h"
//----- (1002A7A0) --------------------------------------------------------
void sub_1002A7A0() {
    unsigned int i;  // esi
    char *v1;        // ecx
    int v2;          // ebx
    int v3;          // esi
    int v4;          // edi
    unsigned int v5; // [esp+10h] [ebp-4h]

    sub_10074F40();
    for (i = 1; i <= dword_10575424; ++i) {
        meth_1000A0B0(*((#511 **)Block + i));
        free(*((void **)Block + i));
    }
    free(Block);
    dword_10575424 = 0;
    dword_10575428 = 0;
    Block = 0;
    v5 = 0;
    if (dword_105553F0) {
        v1 = (char *)dword_1057543C;
        v2 = 0;
        do {
            if (*(_DWORD *)&v1[v2 + 624]) {
                v3 = v2 + 644;
                v4 = 4;
                do {
                    if (*(_DWORD *)&v1[v3]) {
                        free(*(void **)&v1[v3]);
                        *(_DWORD *)((char *)dword_1057543C + v3) = 0;
                        v1 = (char *)dword_1057543C;
                    }
                    v3 += 4;
                    --v4;
                } while (v4);
            }
            v2 += 696;
            ++v5;
        } while (v5 < dword_105553F0);
    } else {
        v1 = (char *)dword_1057543C;
    }
    dword_105553F0 = 0;
    dword_105553F4 = 0;
    free(v1);
    dword_1057543C = 0;
}
// 105553F0: using guessed type int dword_105553F0;
// 105553F4: using guessed type int dword_105553F4;
// 10575424: using guessed type int dword_10575424;
// 10575428: using guessed type int dword_10575428;
