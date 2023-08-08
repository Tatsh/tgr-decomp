#include "types-n64.h"
//----- (8023DF9C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8023DF9C(int a1,
                            int a2,
                            int a3,
                            int a4,
                            int a5,
                            int a6,
                            int a7,
                            int a8,
                            int a9,
                            int a10,
                            int a11,
                            int a12,
                            int a13,
                            int a14) {
    int v15;    // $s4
    int v17;    // $s2
    int v18;    // $a3
    int v19;    // $v0
    int v20;    // $a3
    int v21;    // $t9
    int v22;    // $t1
    int v23;    // $t9
    int v24;    // $v0
    int v25;    // $t1
    int v26;    // $s3
    int v27;    // $s1
    int v28;    // $a3
    int result; // $v0
    int v30;    // [sp+148h] [-20h]
    int v31;    // [sp+150h] [-18h]
    int v32;    // [sp+158h] [-10h] BYREF
    int v33;    // [sp+15Ch] [-Ch] BYREF
    int v34;    // [sp+160h] [-8h] BYREF
    int v35;    // [sp+164h] [-4h] BYREF

    v15 = a4;
    if (a4 < 0)
        v15 = -a4;
    sub_80217614(*(unsigned __int16 *)(a1 + 12), &v33, &v35);
    sub_80217614(*(unsigned __int16 *)(a1 + 14), &v32, &v34);
    dword_8028A858 = 8;
    MEMORY[0] = -1174402046;
    MEMORY[4] = 0;
    switch (a14) {
    case 1:
        dword_8028A858 = 8;
        MEMORY[4] = 5259840;
        MEMORY[0] = -1191181539;
        break;
    case 2:
        dword_8028A858 = 8;
        MEMORY[4] = 5259840;
        MEMORY[0] = -1191181539;
        break;
    case 3:
        dword_8028A858 = 8;
        MEMORY[4] = 5259840;
        MEMORY[0] = -1191181539;
        break;
    case 4:
        dword_8028A858 = 8;
        MEMORY[4] = 252329984;
        MEMORY[0] = -1191181539;
        break;
    default:
        dword_8028A858 = 8;
        MEMORY[4] = 5259840;
        MEMORY[0] = -1191181539;
        break;
    }
    v17 = 0;
    if (*(_BYTE *)(a1 + 16) == 2) {
        dword_8028A858 = 8;
        MEMORY[4] = 0x8000;
    } else {
        dword_8028A858 = 8;
        MEMORY[4] = 0;
    }
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1174400255;
    v18 = *(unsigned __int8 *)(a1 + 17);
    if (*(_BYTE *)(a1 + 17)) {
        if (v18 == 1) {
            v19 = 8;
        } else {
            v19 = 4;
            if (v18 != 2)
                v19 = v31;
        }
    } else {
        v19 = 16;
    }
    v20 = *(unsigned __int16 *)(a1 + 12);
    if (!v19)
        __break(7u, 0);
    v21 = 8 * ((v20 + v19 - 1) / v19);
    if (*(_BYTE *)(a1 + 16) == 2) {
        v22 = 2048 / v21;
        if (!v21)
            __break(7u, 0);
        v23 = v20 << 10;
    } else {
        v22 = 4096 / v21;
        if (!v21)
            __break(7u, 0);
        v23 = v20 << 10;
    }
    v24 = *(unsigned __int16 *)(a1 + 14);
    v25 = v22 - 1;
    v26 = (a3 + a5) << 10;
    v27 = v24;
    if (!v15)
        __break(7u, 0);
    if (v15 == -1 && v23 == 0x80000000)
        __break(6u, 0);
    if (!a5)
        __break(7u, 0);
    if (a5 == -1 && v24 << 10 == 0x80000000)
        __break(6u, 0);
    if (*(_WORD *)(a1 + 14)) {
        v30 = (v24 << 10) / a5;
        do {
            v28 = *(unsigned __int8 *)(a1 + 17);
            if (v27 < v25)
                v25 = v27;
            v27 -= v25;
            if (!v30)
                __break(7u, 0);
            if (v30 == -1 && v25 << 10 == 0x80000000)
                __break(6u, 0);
            v26 -= ((v25 << 10) / v30) << 10;
            if (*(_BYTE *)(a1 + 17)) {
                if (v28 == 1) {
                    MEMORY[4] = ((v34 & 0xF) << 14) | 0x80200 | (16 * (v35 & 0xF));
                    dword_8028A858 = 8;
                    MEMORY[0] = -234881024;
                    MEMORY[4] = (((4 * (*(unsigned __int16 *)(a1 + 12) - 1)) & 0xFFF) << 12) |
                                (4 * v25) & 0xFFF;
                } else if (v28 == 2) {
                    MEMORY[4] = ((v34 & 0xF) << 14) | 0x80200 | (16 * (v35 & 0xF));
                    dword_8028A858 = 8;
                    MEMORY[0] = -234881024;
                    MEMORY[4] = (((4 * (*(unsigned __int16 *)(a1 + 12) - 1)) & 0xFFF) << 12) |
                                (4 * v25) & 0xFFF;
                }
            } else {
                MEMORY[4] = ((v34 & 0xF) << 14) | 0x80200 | (16 * (v35 & 0xF));
                dword_8028A858 = 8;
                MEMORY[0] = -234881024;
                MEMORY[4] = (((4 * (*(unsigned __int16 *)(a1 + 12) - 1)) & 0xFFF) << 12) |
                            (4 * v25) & 0xFFF;
            }
            v17 += v25;
            dword_8028A858 = 8;
            MEMORY[0] = -1291845632;
            MEMORY[4] = ((v23 / v15) << 16) | (unsigned __int16)-((v24 << 10) / a5);
        } while (v27);
    }
    result = 0;
    dword_8028A858 = 8;
    MEMORY[4] = 0x80000;
    MEMORY[0] = -1174400255;
    return result;
}
// 8023E018: write access to const memory at 8028A858 has been detected
// 8023E034: write access to const memory at 8028A858 has been detected
// 8023E050: write access to const memory at 8028A858 has been detected
// 8023E06C: write access to const memory at 8028A858 has been detected
// 8023ED54: write access to const memory at 8028A858 has been detected
// 8023ED70: write access to const memory at 8028A858 has been detected
// 8023ECD0: write access to const memory at 8028A858 has been detected
// 8023ED0C: write access to const memory at 8028A858 has been detected
// 8023ED2C: write access to const memory at 8028A858 has been detected
// 8023EC10: write access to const memory at 8028A858 has been detected
// 8023EC28: write access to const memory at 8028A858 has been detected
// 8023EC98: write access to const memory at 8028A858 has been detected
// 8023EAC0: write access to const memory at 8028A858 has been detected
// 8023EAFC: write access to const memory at 8028A858 has been detected
// 8023EB50: write access to const memory at 8028A858 has been detected
// 8023EB6C: write access to const memory at 8028A858 has been detected
// 8023EA00: write access to const memory at 8028A858 has been detected
// 8023EA18: write access to const memory at 8028A858 has been detected
// 8023EA84: write access to const memory at 8028A858 has been detected
// 8023E8B0: write access to const memory at 8028A858 has been detected
// 8023E8EC: write access to const memory at 8028A858 has been detected
// 8023E940: write access to const memory at 8028A858 has been detected
// 8023E954: write access to const memory at 8028A858 has been detected
// 8023E7F0: write access to const memory at 8028A858 has been detected
// 8023E808: write access to const memory at 8028A858 has been detected
// 8023E874: write access to const memory at 8028A858 has been detected
// 8023E6A0: write access to const memory at 8028A858 has been detected
// 8023E6DC: write access to const memory at 8028A858 has been detected
// 8023E730: write access to const memory at 8028A858 has been detected
// 8023E744: write access to const memory at 8028A858 has been detected
// 8023E404: write access to const memory at 8028A858 has been detected
// 8023E3C8: write access to const memory at 8028A858 has been detected
// 8023E3E8: write access to const memory at 8028A858 has been detected
// 8023E0B4: write access to const memory at 8028A858 has been detected
// 8023E0D8: write access to const memory at 8028A858 has been detected
// 8023E128: write access to const memory at 8028A858 has been detected
// 8023E150: write access to const memory at 8028A858 has been detected
// 8023E174: write access to const memory at 8028A858 has been detected
// 8023E19C: write access to const memory at 8028A858 has been detected
// 8023E1C0: write access to const memory at 8028A858 has been detected
// 8023E20C: write access to const memory at 8028A858 has been detected
// 8023E25C: write access to const memory at 8028A858 has been detected
// 8023E284: write access to const memory at 8028A858 has been detected
// 8023E2A8: write access to const memory at 8028A858 has been detected
// 8023E2F4: write access to const memory at 8028A858 has been detected
// 8023E344: write access to const memory at 8028A858 has been detected
// 8023E36C: write access to const memory at 8028A858 has been detected
// 8023E390: write access to const memory at 8028A858 has been detected
// 8023E7E0: conditional instruction was optimized away because of '$a3.4>=1'
// 8023E9F0: conditional instruction was optimized away because of '$a3.4>=1'
// 8023EC00: conditional instruction was optimized away because of '$a3.4>=1'
// 8023E4B8: conditional instruction was optimized away because of '$a3.4<10000u'
// 8023E46C: variable 'v31' is possibly undefined
// 8028A858: using guessed type int dword_8028A858;
