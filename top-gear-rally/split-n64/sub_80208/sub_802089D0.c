#include "../../types-n64.h"
//----- (802089D0) --------------------------------------------------------
int sub_802089D0() {
    int result; // $v0
    int i;      // $v1

    result = -951313096;
    if (MEMORY[0xC74C1D38] < 0) {
        MEMORY[0xC74C1D38] = 0;
        goto LABEL_4;
    }
    for (i = MEMORY[0xC74C1D3C];; i = MEMORY[0xC74C1D3C]) {
        if (i >= 6) {
        LABEL_4:
            MEMORY[0xC74C1D3C] = 0;
            MEMORY[0xC74C1D3D] = 0;
            goto LABEL_5;
        }
        if (MEMORY[0xC74C1D3D] < *(int *)(28 * i - 2144814772))
            break;
        MEMORY[0xC74C1D3D] = 0;
    LABEL_5:
        *(_WORD *)(2 * MEMORY[0xC74C1D3C] - 951313096 + 30) = 0;
        result = -951313096;
    }
    return result;
}
// 80208A1C: conditional instruction was optimized away because of '$v1.4<100u'
