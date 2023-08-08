#include "types-n64.h"
//----- (8021E620) --------------------------------------------------------
int __fastcall sub_8021E620(float a1, float a2) {
    unsigned int v6;  // $t7
    unsigned int v12; // $t0

    if (a1 < 0.0 || a1 >= 2048.0 || a2 < 0.0 || a2 >= 2048.0)
        return 0;
    _$T7 = 1;
    __asm
    {
    cfc1    $t6, FCSR
    ctc1    $t7, FCSR
    cfc1    $t7, FCSR
    }
    if ((_$T7 & 0x78) != 0) {
        _$T7 = 1;
        __asm
        {
      ctc1    $t7, FCSR
      cfc1    $t7, FCSR
        }
        if ((_$T7 & 0x78) == 0) {
            v6 = (int)(float)((float)(a1 * 0.03125) - 2147483600.0) | 0x80000000;
            goto LABEL_12;
        }
        goto LABEL_10;
    }
    v6 = (int)(float)(a1 * 0.03125);
    if ((int)(float)(a1 * 0.03125) < 0)
    LABEL_10:
        LOBYTE(v6) = -1;
LABEL_12:
    __asm { ctc1    $t6, FCSR }
    _$T0 = 1;
    __asm
    {
    cfc1    $t9, FCSR
    ctc1    $t0, FCSR
    cfc1    $t0, FCSR
    }
    if ((_$T0 & 0x78) == 0) {
        v12 = (int)(float)(a2 * 0.03125);
        if ((int)(float)(a2 * 0.03125) >= 0)
            goto LABEL_18;
        goto LABEL_16;
    }
    _$T0 = 1;
    __asm
    {
    ctc1    $t0, FCSR
    cfc1    $t0, FCSR
    }
    if ((_$T0 & 0x78) != 0) {
    LABEL_16:
        LOBYTE(v12) = -1;
        goto LABEL_18;
    }
    v12 = (int)(float)((float)(a2 * 0.03125) - 2147483600.0) | 0x80000000;
LABEL_18:
    __asm { ctc1    $t9, FCSR }
    return ((*(unsigned __int16 *)(MEMORY[0x80025C24] +
                                   2 * (unsigned __int16)((unsigned __int8)v6 +
                                                          ((unsigned __int8)v12 << 6) + 1)) -
             *(unsigned __int16 *)(MEMORY[0x80025C24] +
                                   2 * (unsigned __int16)((unsigned __int8)v6 +
                                                          ((unsigned __int8)v12 << 6))))
            << 16) |
           *(unsigned __int16 *)(MEMORY[0x80025C24] +
                                 2 * (unsigned __int16)((unsigned __int8)v6 +
                                                        ((unsigned __int8)v12 << 6)));
}
