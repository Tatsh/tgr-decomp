#include "../../types-n64.h"
//----- (8025D018) --------------------------------------------------------
int __fastcall sub_8025D018(float *a1, float *a2) {
    int result; // $v0

    result = sub_8025C2C8(a1);
    if (result == -1)
        result = sub_8025CE28(a1, a2);
    return result;
}
