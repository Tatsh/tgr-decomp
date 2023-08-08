#include "types-n64.h"
//----- (8022D3D4) --------------------------------------------------------
BOOL __fastcall sub_8022D3D4(int a1, int a2) {
    BOOL result; // $v0
    int v3;      // $t8

    result = a2 >= 0;
    if (a2 >= 0) {
        result = a2 <= 0;
        if (a2 <= 0) {
            v3 = *(_DWORD *)(4 * a2 - 2144016976);
            result = a1 >= v3;
            if (a1 >= v3)
                result = *(_DWORD *)(4 * a2 - 2144016720) >= a1;
        }
    }
    return result;
}
