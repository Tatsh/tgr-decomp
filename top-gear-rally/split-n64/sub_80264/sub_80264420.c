#include "types-n64.h"
//----- (80264420) --------------------------------------------------------
int __fastcall sub_80264420(unsigned __int16 a1) {
    int v1;     // $v1
    int result; // $v0

    if (((a1 >> 4) & 0x400) != 0)
        v1 = *(__int16 *)(-2 * ((a1 >> 4) & 0x3FF) - 2144731136 + 21518);
    else
        v1 = *(__int16 *)(2 * ((a1 >> 4) & 0x3FF) - 2144711664);
    result = v1;
    if (((a1 >> 4) & 0x800) != 0)
        result = -(__int16)v1;
    return result;
}
