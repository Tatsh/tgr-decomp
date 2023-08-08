#include "types-n64.h"
//----- (80260B4C) --------------------------------------------------------
int __fastcall sub_80260B4C(_BYTE *a1) {
    _BYTE *v1; // $v1
    int i;     // $t7

    v1 = a1;
    if (*a1) {
        for (i = (unsigned __int8)a1[1];; i = (unsigned __int8)v1[1]) {
            ++v1;
            if (!i)
                break;
        }
    }
    return v1 - a1;
}
