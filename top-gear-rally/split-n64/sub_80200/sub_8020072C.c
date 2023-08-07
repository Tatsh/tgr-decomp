#include "../../types-n64.h"
//----- (8020072C) --------------------------------------------------------
int *sub_8020072C() {
    int *result; // $v0
    int v1;      // $t7
    int v2;      // $t9

    result = &dword_80270194;
    if (&dword_802A666C) {
        do {
            v1 = *result;
            v2 = result[7];
            result += 4;
            *(result - 4) = v1 - 1;
        } while (v2);
    }
    return result;
}
// 80270194: using guessed type int dword_80270194;
// 802A666C: using guessed type int dword_802A666C;
