#include "types-win32.h"
//----- (10069C30) --------------------------------------------------------
char __thiscall meth_BossRallyConfig_10069C30(BossRallyConfig *this, int a2, int a3) {
    unsigned int v3; // eax
    int v4;          // eax

    if (a2 == 1) {
        v3 = 3 * (a3 + 28);
        LOWORD(v3) = *((_WORD *)&this->joystick1.field_0 + 3 * a3);
        if ((unsigned __int16)v3 >= 0x8000u)
            v3 >>= 8;
    } else {
        if (a2 == 2) {
            v4 = a3 + 56;
        } else {
            if (a2 != 3) {
                LOBYTE(v3) = *((_BYTE *)&this->joystick0.field_0 + 6 * a3);
                return v3;
            }
            v4 = a3 + 84;
        }
        v3 = 3 * v4;
        LOWORD(v3) = *((_WORD *)&this->joystick0.field_0 + v3);
        if ((unsigned __int16)v3 >= 0x8000u)
            v3 >>= 8;
    }
    return v3;
}
