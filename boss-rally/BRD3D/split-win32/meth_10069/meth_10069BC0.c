#include "types-win32.h"
//----- (10069BC0) --------------------------------------------------------
int __thiscall meth_10069BC0(BossRallyConfig *this, int a2, int a3) {
    switch (a2) {
    case 1:
        return *(_WORD *)&this->joystick1[6 * a3] & 0xFF00;
    case 2:
        return *(_WORD *)&this->joystick2[6 * a3] & 0xFF00;
    case 3:
        return *(_WORD *)&this->joystick3[6 * a3] & 0xFF00;
    }
    return *(_WORD *)&this->joystick0[6 * a3] & 0xFF00;
}
