#include "types-win32.h"
//----- (10002E90) --------------------------------------------------------
int __cdecl sub_10002E90(int a1, int a2) {
    int v2; // esi

    if (a1 < 0 || a1 >= 64 || a2 < 0 || a2 >= 64)
        return 0;
    v2 = (unsigned __int16)((unsigned __int8)a1 + ((unsigned __int8)a2 << 6));
    return *(unsigned __int16 *)(gUnk06594.field_4934 + 2 * v2) |
           ((0xFFFF * *(unsigned __int16 *)(gUnk06594.field_4934 + 2 * v2) +
             *(unsigned __int16 *)(gUnk06594.field_4934 + 2 * (unsigned __int16)(v2 + 1)))
            << 16);
}
