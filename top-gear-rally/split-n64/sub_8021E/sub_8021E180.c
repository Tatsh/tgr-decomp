#include "../../types-n64.h"
//----- (8021E180) --------------------------------------------------------
BOOL __fastcall sub_8021E180(int a1) {
    BOOL result; // $v0

    result = a1 < 10;
    if (a1 < 10)
        result = *(_DWORD *)(380 * a1 - 2144925588) != 0;
    return result;
}
