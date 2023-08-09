#include "types-win32.h"
//----- (1001BA70) --------------------------------------------------------
# 485 * __cdecl sub_1001BA70(const void * a1, #485 ** a2, #485 * a3)
{
# 485 * v3; // esi
# 485 * v4; // edi

    v3 = a3;
    if (!a3)
        v3 = gameSpecificUnk1_instance0;
    if (a2)
        *a2 = v3;
    if (!v3)
        return 0;
    while (1) {
        v4 = *(#485 **)&v3[816];
        if (meth_1001B2D0(v3, a1))
            break;
        if ((*(_BYTE *)v3 & 2) != 0) {
            if (a2)
                *a2 = v3;
        }
        v3 = v4;
        if (!v4)
            return 0;
    }
    return v3;
}
