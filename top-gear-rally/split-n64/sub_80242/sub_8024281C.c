#include "types-n64.h"
//----- (8024281C) --------------------------------------------------------
unsigned int __fastcall sub_8024281C(_DWORD *a1, int a2, int a3) {
    unsigned int v3; // $t9
    int v4;          // $t6
    unsigned int v5; // $t8

    v3 = a1[1];
    v4 = *a1 + 7;
    v5 = *a1 + ((a3 * a2 + 7) & 0xFFFFFFF8);
    *a1 = v5;
    if (v3 < v5) {
        debugPrint("Insufficient memory for zcalloc\n");
        while (1)
            ;
    }
    return v4 & 0xFFFFFFF8;
}
