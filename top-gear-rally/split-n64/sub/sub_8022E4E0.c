#include "types-n64.h"
//----- (8022E4E0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8022E4E0(const char *a1) {
    int v1;          // $s5
    const char *v2;  // $s1
    int v3;          // $v0
    int v4;          // $v1
    BOOL v5;         // $at
    int v6;          // $a0
    unsigned int v7; // $v1
    int v8;          // $v1
    int v9;          // $t1
    int v10;         // $v1
    int v11;         // $t8
    int v12;         // $s0
    int v13;         // $t0
    __int16 v14;     // $a0
    int v15;         // $t0
    __int16 v16;     // $a0
    int v17;         // $t6
    int v18;         // $a2
    int result;      // $v0

    v1 = 0xA54907FD;
    dword_8028A858 = 8;
    MEMORY[4] = 0xE6E600FF;
    MEMORY[0] = 0xFA00FFFF;
    v2 = a1;
    v3 = *(unsigned __int8 *)a1;
    if (*a1) {
        do {
            v4 = v3;
            if (v3 == 32) {
                v1 = v1 - 42897371 + 1;
                goto LABEL_85;
            }
            if (v3 == 37) {
                v6 = *((unsigned __int8 *)v2 + 1);
                if (v2[1]) {
                    switch (v6) {
                    case '%':
                        v4 = *(unsigned __int8 *)++v2;
                        v5 = (unsigned int)v4 < 0x21;
                        break;
                    case 'i':
                        ++v2;
                        goto LABEL_85;
                    case 'n':
                        ++v2;
                        goto LABEL_85;
                    default:
                        if (v2[2]) {
                            dword_8028A858 = 8;
                            MEMORY[4] = 0;
                            MEMORY[0] = 0xE7000000;
                            v7 = *((unsigned __int8 *)v2 + 1);
                            if (v7 < 0x32) {
                                if (v7 == 48) {
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xFF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    goto LABEL_34;
                                }
                                if (v7 == 49) {
                                LABEL_32:
                                    dword_8028A858 = 8;
                                    MEMORY[4] = -1;
                                    MEMORY[0] = 0xFA00FFFF;
                                    goto LABEL_34;
                                }
                                v8 = *((unsigned __int8 *)v2 + 2);
                            } else if (*((unsigned __int8 *)v2 + 1) < 0x36u) {
                                if (v7 == 53) {
                                    dword_8028A858 = 8;
                                    MEMORY[4] = &byte_808080FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    goto LABEL_34;
                                }
                                v8 = *((unsigned __int8 *)v2 + 2);
                            } else {
                                switch (v2[1]) {
                                case 'O':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xFF7800FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'Y':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xFFFA80FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'b':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xC8FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'g':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0x9600FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'o':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xCD5F00FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'p':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xC800C8FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'r':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xBE0000FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                case 'w':
                                    goto LABEL_32;
                                case 'y':
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xFFF500FF;
                                    MEMORY[0] = 0xFA00FFFF;
                                    break;
                                default:
                                    break;
                                }
                            LABEL_34:
                                v8 = *((unsigned __int8 *)v2 + 2);
                            }
                            if (v8 < 50) {
                                if (v8 == 48) {
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 0xFF;
                                    MEMORY[0] = 0xFB000000;
                                LABEL_54:
                                    v2 += 2;
                                } else if (v8 == 49) {
                                LABEL_51:
                                    v2 += 2;
                                    dword_8028A858 = 8;
                                    MEMORY[4] = -1;
                                    MEMORY[0] = 0xFB000000;
                                } else {
                                    v2 += 2;
                                }
                            } else if (v8 < 54) {
                                v2 += 2;
                                if (v8 == 53) {
                                    dword_8028A858 = 8;
                                    MEMORY[4] = &byte_808080FF;
                                    MEMORY[0] = 0xFB000000;
                                }
                            } else {
                                switch (v8) {
                                case 'O':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = -8912641;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'Y':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = -758617601;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'b':
                                    v2 += 2;
                                    dword_8028A858 = 8;
                                    MEMORY[4] = 51455;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'g':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = 9830655;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'o':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = 0xCD5F00FF;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'p':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = -939472641;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'r':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = -939523841;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                case 'w':
                                    goto LABEL_51;
                                case 'y':
                                    dword_8028A858 = 8;
                                    v2 += 2;
                                    MEMORY[4] = -759299841;
                                    MEMORY[0] = 0xFB000000;
                                    break;
                                default:
                                    goto LABEL_54;
                                }
                            }
                            goto LABEL_85;
                        }
                        v5 = v3 < 33;
                        break;
                    }
                } else {
                    v5 = 0;
                }
            } else {
                v5 = v3 < 33;
            }
            if (!v5 && v4 < 128) {
                v9 = *(unsigned __int8 *)(v4 - 2144731136 + 5919);
                v10 = dword_802A187C[v9];
                v11 = dword_802A187C[v9 + 1];
                v12 = v11 - v10 + 1;
                dword_8028A858 = 8;
                MEMORY[0] = -234872830;
                MEMORY[4] = (((4 * ((_WORD)v11 - (_WORD)v10) + 2) & 0xFFF) << 12) | 0x4E;
                if (v1 >= 0 && (v13 = -1932560944 * v12 / 20, v1 + v13 < 321)) {
                    MEMORY[4] = 1049200;
                    dword_8028A858 = 8;
                    MEMORY[0] = -1291845632;
                    if (!v13)
                        __break(7u, 0);
                    if (v13 == -1 && v12 << 10 == 0x80000000)
                        __break(6u, 0);
                    MEMORY[4] = (unsigned __int16)((v12 << 10) / v13) << 16;
                } else {
                    dword_8028A858 = 8;
                    v14 = 0;
                    v15 = -1932560944 * v12 / 20;
                    if ((__int16)(4 * (v1 + v15)) > 0)
                        v14 = 4 * (v1 + v15);
                    MEMORY[0] = ((v14 & 0xFFF) << 12) | 0xE4000230;
                    if ((__int16)(4 * v1) <= 0)
                        v16 = 0;
                    else
                        v16 = 4 * v1;
                    MEMORY[4] = ((v16 & 0xFFF) << 12) | 0xAF0;
                    v17 = v12 << 10;
                    dword_8028A858 = 8;
                    MEMORY[0] = -1275068416;
                    if (((4 * v1) & 0x8000u) == 0) {
                        v18 = v17 / v15;
                        if (!v15)
                            __break(7u, 0);
                        if (v15 == -1 && v17 == 0x80000000)
                            __break(6u, 0);
                    } else {
                        v18 = (v12 << 10) / v15;
                        if (!v15)
                            __break(7u, 0);
                        if (v15 == -1 && v12 << 10 == 0x80000000)
                            __break(6u, 0);
                    }
                    dword_8028A858 = 8;
                    MEMORY[0] = -1291845632;
                    MEMORY[4] = v18 << 16;
                }
                v1 += -1932560944 * (v11 - v10 - 3) / 20;
                v3 = *((unsigned __int8 *)v2 + 1);
                goto LABEL_86;
            }
        LABEL_85:
            v3 = *((unsigned __int8 *)v2 + 1);
        LABEL_86:
            ++v2;
        } while (v3);
    }
    result = 0;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1174399998;
    return result;
}
// 8022E600: write access to const memory at 8028A858 has been detected
// 8022E61C: write access to const memory at 8028A858 has been detected
// 8022E568: conditional instruction was optimized away because of '$s7.4==8CCF75D0'
// 8022EE58: conditional instruction was optimized away because of '$s7.4==8CCF75D0'
// 8022EE68: conditional instruction was optimized away because of '$s7.4==8CCF75D0'
// 8022F028: conditional instruction was optimized away because of '$s6.4==14'
// 8022F038: conditional instruction was optimized away because of '$s6.4==14'
// 8022F060: conditional instruction was optimized away because of '$fp.4==4D135ABC'
// 8022F0C0: conditional instruction was optimized away because of '$s6.4==14'
// 8022F0D0: conditional instruction was optimized away because of '$s6.4==14'
// 8022F3F0: conditional instruction was optimized away because of '$s6.4==14'
// 8022F400: conditional instruction was optimized away because of '$s6.4==14'
// 8022E678: write access to const memory at 8028A858 has been detected
// 8022E694: write access to const memory at 8028A858 has been detected
// 8022E6B8: write access to const memory at 8028A858 has been detected
// 8022E6E4: write access to const memory at 8028A858 has been detected
// 8022E700: write access to const memory at 8028A858 has been detected
// 8022E720: write access to const memory at 8028A858 has been detected
// 8022E73C: write access to const memory at 8028A858 has been detected
// 8022E758: write access to const memory at 8028A858 has been detected
// 8022E770: write access to const memory at 8028A858 has been detected
// 8022E790: write access to const memory at 8028A858 has been detected
// 8022E7AC: write access to const memory at 8028A858 has been detected
// 8022E7C4: write access to const memory at 8028A858 has been detected
// 8022E7FC: write access to const memory at 8028A858 has been detected
// 8022E818: write access to const memory at 8028A858 has been detected
// 8022E83C: write access to const memory at 8028A858 has been detected
// 8022E978: write access to const memory at 8028A858 has been detected
// 8022E994: write access to const memory at 8028A858 has been detected
// 8022F45C: write access to const memory at 8028A858 has been detected
// 8022F478: write access to const memory at 8028A858 has been detected
// 8022F494: write access to const memory at 8028A858 has been detected
// 8022F30C: write access to const memory at 8028A858 has been detected
// 8022F350: write access to const memory at 8028A858 has been detected
// 8022F388: write access to const memory at 8028A858 has been detected
// 8022F2E0: write access to const memory at 8028A858 has been detected
// 8022F180: write access to const memory at 8028A858 has been detected
// 8022F094: write access to const memory at 8028A858 has been detected
// 8022EEB4: write access to const memory at 8028A858 has been detected
// 8022EEE0: write access to const memory at 8028A858 has been detected
// 8022EF18: write access to const memory at 8028A858 has been detected
// 8022EF3C: write access to const memory at 8028A858 has been detected
// 8022EF90: write access to const memory at 8028A858 has been detected
// 8022EFB0: write access to const memory at 8028A858 has been detected
// 8022EFE4: write access to const memory at 8028A858 has been detected
// 8022EC68: write access to const memory at 8028A858 has been detected
// 8022EC8C: write access to const memory at 8028A858 has been detected
// 8022ECB0: write access to const memory at 8028A858 has been detected
// 8022ECD4: write access to const memory at 8028A858 has been detected
// 8022ECF8: write access to const memory at 8028A858 has been detected
// 8022ED1C: write access to const memory at 8028A858 has been detected
// 8022ED40: write access to const memory at 8028A858 has been detected
// 8022ED60: write access to const memory at 8028A858 has been detected
// 8022ED84: write access to const memory at 8028A858 has been detected
// 8022EDA4: write access to const memory at 8028A858 has been detected
// 8022EDC0: write access to const memory at 8028A858 has been detected
// 8022EAB0: write access to const memory at 8028A858 has been detected
// 8022EAD0: write access to const memory at 8028A858 has been detected
// 8022EAF0: write access to const memory at 8028A858 has been detected
// 8022EB10: write access to const memory at 8028A858 has been detected
// 8022EB30: write access to const memory at 8028A858 has been detected
// 8022EB50: write access to const memory at 8028A858 has been detected
// 8022EB6C: write access to const memory at 8028A858 has been detected
// 8022EB8C: write access to const memory at 8028A858 has been detected
// 8022EBA8: write access to const memory at 8028A858 has been detected
// 8022EBC8: write access to const memory at 8028A858 has been detected
// 8022EBE4: write access to const memory at 8028A858 has been detected
// 8022EA2C: write access to const memory at 8028A858 has been detected
// 8028A850: using guessed type int dword_8028A850;
// 8028A858: using guessed type int dword_8028A858;
// 8028A898: using guessed type int dword_8028A898;
// 8028BDC0: using guessed type char byte_8028BDC0;
// 8028BDC8: using guessed type char byte_8028BDC8;
// 8028BDCC: using guessed type int dword_8028BDCC;
// 8028BDD0: using guessed type int dword_8028BDD0;
// 8028BDD4: using guessed type int dword_8028BDD4;
// 8028BDD8: using guessed type int dword_8028BDD8;
// 8028BDDC: using guessed type int dword_8028BDDC;
// 8028BDE0: using guessed type int dword_8028BDE0;
// 8028BDE4: using guessed type int dword_8028BDE4;
// 802A187C: using guessed type int dword_802A187C[];
// 803519D0: using guessed type int dword_803519D0;
// 803519D4: using guessed type int dword_803519D4;
// 803519D8: using guessed type int dword_803519D8;
// 808080FF: using guessed type char byte_808080FF;
