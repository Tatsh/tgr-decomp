#include "types-n64.h"
//----- (8026A830) --------------------------------------------------------
int __fastcall sub_8026A830(unsigned __int8 *a1) {
    char v1;            // $t1
    int j;              // [sp+4h] [-Ch]
    int i;              // [sp+8h] [-8h]
    char v5;            // [sp+Eh] [-2h]
    unsigned __int8 v6; // [sp+Fh] [-1h]
    char v7;            // [sp+Fh] [-1h]
    char v8;            // [sp+Fh] [-1h]

    v6 = 0;
    for (i = 0; i < 33; ++i) {
        for (j = 7; j >= 0; --j) {
            if ((v6 & 0x80) != 0)
                v5 = -123;
            else
                v5 = 0;
            v1 = 2 * v6;
            v7 = 2 * v6;
            if (i == 32)
                v8 = v1;
            else
                v8 = v7 | ((*a1 & (1 << j)) != 0);
            v6 = v8 ^ v5;
        }
        ++a1;
    }
    return v6;
}
