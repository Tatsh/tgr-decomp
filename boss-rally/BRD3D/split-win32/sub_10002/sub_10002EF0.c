#include "types-win32.h"
//----- (10002EF0) --------------------------------------------------------
__int16 __cdecl sub_10002EF0(unsigned __int16 *a1) {
    int v1; // ecx

    if (!a1[1])
        return 0;
    v1 = *a1;
    *(_DWORD *)a1 = (v1 + 1) | ((a1[1] + 0xFFFF) << 16);
    return *(_WORD *)(gUnk06594.field_48E8 + 2 * v1);
}
