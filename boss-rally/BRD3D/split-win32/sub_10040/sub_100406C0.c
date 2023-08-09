#include "types-win32.h"
//----- (100406C0) --------------------------------------------------------
int sub_100406C0() {
    int result; // eax

    switch (dword_10AA2A0C) {
    case 0:
        meth_BossRallyConfig_10069AA0(&gConfig, 0);
        result = 1;
        break;
    case 1:
        meth_BossRallyConfig_10069AA0(&gConfig, 1);
        result = 1;
        break;
    case 2:
        meth_BossRallyConfig_10069AA0(&gConfig, 2);
        result = 1;
        break;
    case 3:
        meth_BossRallyConfig_10069AA0(&gConfig, 3);
        goto LABEL_6;
    default:
    LABEL_6:
        result = 1;
        break;
    }
    return result;
}
// 10AA2A0C: using guessed type int dword_10AA2A0C;
