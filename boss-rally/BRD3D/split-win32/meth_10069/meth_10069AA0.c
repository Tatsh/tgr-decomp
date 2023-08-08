#include "../types-win32.h"
//----- (10069AA0) --------------------------------------------------------
int __thiscall meth_10069AA0(BossRallyConfig *this, int a2) {
    int result; // eax

    result = a2 - 1;
    if (a2 == 1) {
        qmemcpy(this->joystick1, &unk_100B4140, sizeof(this->joystick1));
    } else {
        result = a2 - 2;
        if (a2 == 2) {
            qmemcpy(this->joystick2, &unk_100B41E8, sizeof(this->joystick2));
        } else {
            result = a2 - 3;
            if (a2 == 3)
                qmemcpy(this->joystick3, &unk_100B4290, sizeof(this->joystick3));
            else
                qmemcpy(this, aE, 0xA8u);
        }
    }
    return result;
}
