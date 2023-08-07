#include "../../types-n64.h"
//----- (80255048) --------------------------------------------------------
int __fastcall sub_80255048(int a1) {
    int v1;      // $v1
    int result;  // $v0
    int v4;      // $t0
    __int16 *v5; // $a2
    void **v6;   // $s1
    int i;       // $t4
    int v8;      // $v1
    int v9;      // $a0

    v1 = *(_DWORD *)(a1 + 336);
    result = *(unsigned __int16 *)(a1 + 2);
    v4 = (v1 - 1) & 0x7F;
    if (result != *(unsigned __int16 *)(a1 + 2 * v1 + 80)) {
        *(_DWORD *)(a1 + 336) = v4;
        *(_WORD *)(a1 + 2 * v4 + 80) = result;
        v5 = &word_8028DEF0;
        v6 = &off_8028DF48;
        if (&word_8028DEF0) {
            for (i = 0x8000;; i = (unsigned __int16)*v5) {
                v8 = *(_DWORD *)(a1 + 336);
                result = (int)v5;
                if (i == 0xFFFF) {
                LABEL_9:
                    result = ((int (*)(void)) * v6)();
                    v5 = (__int16 *)v6[3];
                } else {
                    v9 = (unsigned __int16)*v5;
                    while (1) {
                        result += 2;
                        if (v9 != *(unsigned __int16 *)(a1 + 80 + 2 * v8))
                            break;
                        v9 = *(unsigned __int16 *)result;
                        v8 = ((_BYTE)v8 + 1) & 0x7F;
                        if (v9 == 0xFFFF)
                            goto LABEL_9;
                    }
                    v5 = (__int16 *)v6[3];
                }
                v6 += 2;
                if (!v5)
                    break;
            }
        }
    }
    return result;
}
// 8028DEF0: using guessed type __int16 word_8028DEF0;
// 8028DF48: using guessed type void *off_8028DF48;
