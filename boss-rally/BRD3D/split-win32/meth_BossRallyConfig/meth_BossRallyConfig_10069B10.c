#include "types-win32.h"
//----- (10069B10) --------------------------------------------------------
int __thiscall meth_BossRallyConfig_10069B10(
    BossRallyConfig *this, int a2, int a3, __int16 a4, char a5) {
    BossRallyConfig *v5;  // ebp
    char *v6;             // edi
    _WORD *v7;            // eax
    int v8;               // edi
    _WORD *v9;            // esi
    int v10;              // ebx
    __int16 v11;          // dx
    int v12;              // eax
    BossRallyConfig *v13; // ecx
    int result;           // eax
    int v15;              // [esp+14h] [ebp+4h]

    switch (a2) {
    case 1:
        v5 = (BossRallyConfig *)&this->joystick1;
        v6 = gJoystick1Data;
        break;
    case 2:
        v5 = (BossRallyConfig *)&this->joystick2;
        v6 = gJoystick2Data;
        break;
    case 3:
        v5 = (BossRallyConfig *)&this->joystick3;
        v6 = gJoystick3Data;
        break;
    default:
        v5 = this;
        v6 = aE;
        break;
    }
    v15 = 2;
    v7 = (_WORD *)((char *)v5 + 6 * a3);
    v8 = v6 - (char *)v5;
    *v7 = a4 ^ (unsigned __int8)(a4 ^ a5);
    v9 = v7 + 1;
    do {
        v10 = 28;
        do {
            v11 = *(_WORD *)((char *)v9 + v8);
            v12 = 0;
            *v9 = v11;
            v13 = v5;
            while (LOWORD(v13->joystick0.field_0) != v11) {
                ++v12;
                v13 = (BossRallyConfig *)((char *)v13 + 6);
                if (v12 >= 28)
                    goto LABEL_15;
            }
            *v9 = 0;
        LABEL_15:
            --v10;
        } while (v10);
        ++v9;
        result = --v15;
    } while (v15);
    return result;
}
