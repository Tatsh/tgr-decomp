#include "../../types-n64.h"
//----- (80234FF8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_80234FF8() {
    int v0;                  // $a1
    signed int v1;           // $t0
    int *v2;                 // $a0
    int *v3;                 // $a3
    int v4;                  // $a2
    int v5;                  // $v0
    char *v6;                // $s0
    int v7;                  // $a2
    int v8;                  // $a1
    int v9;                  // $s6
    char *v10;               // $v0
    __int16 v11;             // $v1
    __int16 v12;             // $a0
    char *v13;               // $v0
    int v14;                 // $lo
    __int16 v15;             // $a0
    __int16 v16;             // $v1
    __int16 v17;             // $t9
    int v18;                 // $t6
    __int16 v19;             // $t7
    int v20;                 // $a0
    __int16 v21;             // $t5
    int v22;                 // $lo
    int v23;                 // $a2
    char *v24;               // $s0
    int v25;                 // $v0
    int v26;                 // $v0
    int v27;                 // $v1
    int v28;                 // $v0
    int *v29;                // $s0
    float v30;               // $f0
    int v31;                 // $s6
    int *v32;                // $v0
    int *result;             // $v0
    int *v34;                // $s1
    int i;                   // $s0
    __int64 v36;             // $a3
    float v37[4];            // [sp+78h] [-58h] BYREF
    float v38;               // [sp+88h] [-48h]
    float v39;               // [sp+8Ch] [-44h]
    int v40;                 // [sp+A0h] [-30h]
    unsigned __int16 v41[2]; // [sp+A8h] [-28h] BYREF
    int v42;                 // [sp+ACh] [-24h]

    dword_8028C76C = 0;
    v0 = 0;
    v1 = 0;
    v2 = dword_8034E5B0;
    v3 = dword_8034E6B0;
    while (1) {
        v4 = *v2;
        v5 = *v3;
        ++v2;
        if (*v3 >= v4)
            break;
    LABEL_7:
        ++v0;
        ++v3;
        if (v0 > 0) {
            v6 = &byte_8035D1D0[4 * v1];
            goto LABEL_9;
        }
    }
    v6 = &byte_8035D1D0[4 * v1];
    while (v1 != 192) {
        *v6 = v4++;
        v6[1] = v0;
        ++v1;
        v6 += 4;
        if (v5 < v4)
            goto LABEL_7;
    }
    dword_8028C76C = 1;
LABEL_9:
    *v6 = -1;
    v6[1] = -1;
    v7 = (int)(float)(MEMORY[0x30] * 0.03125);
    if (v7 == 64)
        v7 = 63;
    v8 = (int)(float)(MEMORY[0x34] * 0.03125);
    if (v8 == 64)
        v8 = 63;
    v9 = 0;
    if (v1 > 0) {
        if ((v1 & 3) == 0)
            goto LABEL_20;
        v10 = byte_8035D1D0;
        do {
            ++v9;
            v11 = (unsigned __int8)*v10 - (_WORD)v7;
            v12 = (unsigned __int8)v10[1] - (_WORD)v8;
            v10 += 4;
            *((_WORD *)v10 - 1) = v11 * v11 + v12 * v12;
        } while ((v1 & 3) != v9);
        if (v9 != v1) {
        LABEL_20:
            v13 = &byte_8035D1D0[4 * v9];
            do {
                v14 = ((unsigned __int8)*v13 - v7) * ((unsigned __int8)*v13 - v7);
                v15 = (unsigned __int8)v13[1] - (_WORD)v8;
                v16 = (unsigned __int8)v13[4] - (_WORD)v7;
                v17 = (unsigned __int8)v13[5];
                v13 += 16;
                v18 = v14;
                v19 = (unsigned __int8)*(v13 - 8);
                *((_WORD *)v13 - 7) = v18 + v15 * v15;
                v20 = (unsigned __int8)*(v13 - 7) - v8;
                v21 = (unsigned __int8)*(v13 - 4);
                *((_WORD *)v13 - 5) = v16 * v16 + (v17 - v8) * (v17 - v8);
                v22 = v20 * v20;
                LOWORD(v20) = (unsigned __int8)*(v13 - 3) - (_WORD)v8;
                *((_WORD *)v13 - 3) = (v19 - v7) * (v19 - v7) + v22;
                *((_WORD *)v13 - 1) = (v21 - v7) * (v21 - v7) + v20 * v20;
            } while (v13 != &byte_8035D1D0[4 * v1]);
        }
        v9 = 0;
    }
    sub_80255E80((unsigned int)byte_8035D1D0,
                 v1,
                 4u,
                 (int(__fastcall *)(unsigned int, unsigned int))sub_80234FC0);
    sub_80256290((int)byte_80351D80, MEMORY[0x80025C66], -1);
    dword_8028C740 = 0;
    dword_8028C778 = -1;
    dword_8028C780 = 0;
    dword_8028C788 = -1;
    v42 = ((int)(float)(0.0 / 32.0) - 3) * ((int)(float)(0.0 / 32.0) - 3);
    v40 = 1;
    v23 = 196;
    v24 = byte_8035D1D0;
    do {
        v25 = sub_8021EA0C(v23, (unsigned __int8)v24[1]);
        v41[1] = HIWORD(v25);
        v41[0] = v25;
        if (v25) {
            v26 = sub_8021EADC(v41);
            v27 = (unsigned __int16)v26;
            if (v26) {
                while (1) {
                    if (byte_80351D80[v27] && v27) {
                        word_80352580 = v27;
                        dword_8028C740 = 1;
                        byte_80351D80[v27] = 0;
                    }
                    v28 = sub_8021EADC(v41);
                    if (!v28)
                        break;
                    v27 = (unsigned __int16)v28;
                }
            }
        }
        v23 = (unsigned __int8)v24[4];
        v24 += 4;
    } while (v23 != 255);
    dword_8035D4FC = 0;
    v29 = dword_80351C70;
    do {
        if (*v29) {
            sub_80224808(
                (float *)dword_8035D500, (float *)&dword_8031B760[2084 * v9 + 12], (float *)0x30);
            v30 = sub_80224404(0, (float *)dword_8035D500);
            if (v30 >= 2.0) {
                MEMORY[0x52EBF9DC] = v30;
                MEMORY[0x52EBF9EC] = v9;
                dword_8035D4FC = -1263695550;
            }
            ++v9;
        } else {
            ++v9;
        }
        ++v29;
    } while (v9 < 2);
    v31 = 0;
    word_8028C770 = 0;
    if (0.0 == MEMORY[0]) {
        if (0.0 == MEMORY[4])
            v39 = 0.000099999997;
        else
            v39 = MEMORY[0];
    } else {
        v39 = MEMORY[0];
    }
    v38 = MEMORY[4];
    v32 = sub_80255DD8();
    dword_8028C774 = (int)v32;
    sub_80261150(__SPAIR64__(&flt_8031AB10, (unsigned int)v32),
                 v39 * 50.0,
                 v38 * 50.0,
                 0.0,
                 0.0,
                 0.0,
                 0.0,
                 0.0,
                 0.0,
                 1.0);
    flt_8035D510 = -4.1999114e19;
    flt_8035D514 = -1.2171046e36;
    flt_8035D518 = -28948.373;
    sub_80224760(&flt_8035D510);
    sub_80224528(&flt_8035D510, 120.0);
    dword_8028C6A0 = 1;
    result = dword_8028C640;
    dword_8028C640[0] = 858996736;
    dword_8028C640[1] = 858996736;
    dword_8028C640[2] = -286340096;
    dword_8028C640[3] = -286340096;
    v34 = dword_803239A0;
    dword_8028C640[4] = 1414812672;
    dword_8028C640[5] = 0;
    HIBYTE(dword_8028C640[4]) = (int)-14.50958;
    BYTE1(dword_8028C640[4]) = (int)-0.0000000013841032;
    BYTE2(dword_8028C640[4]) = (int)-0.034951609;
    for (i = 1805591161;; i = v34[24]) {
        if (i) {
            v37[0] = *(float *)(i + 48);
            HIDWORD(v36) = i + 8272;
            LODWORD(v36) = i + 8276;
            v37[1] = *(float *)(i + 52);
            v37[2] = *(float *)(i + 56) - *(float *)(i + 8264);
            sub_80233E10(v37, 8, v36);
            *(_WORD *)(i + 8274) = 12144;
            *(_WORD *)(i + 8278) = 12144;
            *(_WORD *)(i + 8272) = -5427;
            *(_WORD *)(i + 8276) = -5427;
            result = &dword_8031B2C8;
        }
        ++v31;
        v34 += 30;
        if (v31 >= 1)
            break;
    }
    return result;
}
// 802352E8: write access to const memory at 8028C788 has been detected
// 802353E0: write access to const memory at 8028C788 has been detected
// 80235520: write access to const memory at 8035D4FC has been detected
// 80235694: write access to const memory at 8035D4FC has been detected
// 80235004: write access to const memory at 8028C76C has been detected
// 802352DC: write access to const memory at 8028C740 has been detected
// 802352E0: write access to const memory at 8028C778 has been detected
// 802352E4: write access to const memory at 8028C780 has been detected
// 80235728: write access to const memory at 8028C770 has been detected
// 80235804: write access to const memory at 8028C774 has been detected
// 80235874: write access to const memory at 8035D510 has been detected
// 80235888: write access to const memory at 8035D514 has been detected
// 802358A0: write access to const memory at 8035D518 has been detected
// 802358B4: write access to const memory at 8035D510 has been detected
// 802358B8: write access to const memory at 8035D514 has been detected
// 802358BC: write access to const memory at 8035D518 has been detected
// 80235920: write access to const memory at 8028C6A0 has been detected
// 8023565C: write access to const memory at 8035D4FC has been detected
// 802354E4: write access to const memory at 8028C740 has been detected
// 802354DC: write access to const memory at 80352580 has been detected
// 80235484: write access to const memory at 8028C740 has been detected
// 80235478: write access to const memory at 80352580 has been detected
// 80235488: write access to const memory at 80351D80 has been detected
// 80235408: write access to const memory at 8028C780 has been detected
// 802353B8: write access to const memory at 8028C778 has been detected
// 80235098: write access to const memory at 8028C76C has been detected
// 80235A34: conditional instruction was optimized away because of '$t5.4 in (<8000u|>=FFFF8000u)'
// 80235A8C: conditional instruction was optimized away because of '$t8.4 in (<8000u|>=FFFF8000u)'
// 80235AF4: conditional instruction was optimized away because of '$t9.4 in (<8000u|>=FFFF8000u)'
// 80235B5C: conditional instruction was optimized away because of '$t6.4 in (<8000u|>=FFFF8000u)'
// 80235938: write access to const memory at 8028C640 has been detected
// 80235948: write access to const memory at 8028C644 has been detected
// 80235958: write access to const memory at 8028C648 has been detected
// 80235968: write access to const memory at 8028C64C has been detected
// 80235978: write access to const memory at 8028C650 has been detected
// 80235988: write access to const memory at 8028C654 has been detected
// 80235990: write access to const memory at 8028C650 has been detected
// 80235994: write access to const memory at 8028C651 has been detected
// 8023599C: write access to const memory at 8028C652 has been detected
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AACC: using guessed type float flt_8028AACC;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028BD94: using guessed type int dword_8028BD94;
// 8028BD9C: using guessed type int dword_8028BD9C;
// 8028C640: using guessed type int dword_8028C640[6];
// 8028C6A0: using guessed type int dword_8028C6A0;
// 8028C740: using guessed type int dword_8028C740;
// 8028C76C: using guessed type int dword_8028C76C;
// 8028C770: using guessed type __int16 word_8028C770;
// 8028C774: using guessed type int dword_8028C774;
// 8028C778: using guessed type int dword_8028C778;
// 8028C780: using guessed type int dword_8028C780;
// 8028C788: using guessed type int dword_8028C788;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 8031B338: using guessed type float flt_8031B338;
// 8031B33C: using guessed type float flt_8031B33C;
// 8031B340: using guessed type float flt_8031B340;
// 8031B760: using guessed type int dword_8031B760[512];
// 803239A0: using guessed type int dword_803239A0[24];
// 8034E5B0: using guessed type int dword_8034E5B0[64];
// 8034E6B0: using guessed type int dword_8034E6B0[64];
// 80351C70: using guessed type int dword_80351C70[12];
// 80352580: using guessed type __int16 word_80352580;
// 8035D4FC: using guessed type int dword_8035D4FC;
// 8035D500: using guessed type int dword_8035D500[4];
// 8035D510: using guessed type float flt_8035D510;
// 8035D514: using guessed type float flt_8035D514;
// 8035D518: using guessed type float flt_8035D518;
