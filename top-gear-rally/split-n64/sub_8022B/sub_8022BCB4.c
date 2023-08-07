#include "../../types-n64.h"
//----- (8022BCB4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall sub_8022BCB4(int a1) {
    unsigned int result; // $v0
    int v3;              // $ra
    __int64 *v4;         // $t0
    int v5;              // $t0
    float *v6;           // $a0
    float *v7;           // $a2
    float v8;            // $f0
    int v9;              // $ra
    float v10;           // $f2
    float v11;           // $f0
    float v12;           // $f2
    int v13;             // $t9
    int v14;             // $t9
    int v15;             // $v0
    __int64 *v16;        // $t0
    float v17;           // $f6
    float v19;           // $f4
    int v20;             // $v1
    float v21;           // $f6
    unsigned int v24;    // $t9
    __int64 *v27;        // $t0
    int v28;             // $v1
    int v29;             // $v0
    int v30;             // $v0
    int v31;             // $v0
    int v32;             // $t6
    int v33;             // $v1
    int v34;             // $v0
    int v35;             // $v0
    int v36;             // $t9
    int v37;             // $v1
    int v38;             // $v1
    int v39;             // $v0
    int v40;             // $v1
    int v41;             // $t7
    int v42;             // $a1
    int v43;             // $v0
    int v44;             // $v1
    int v45;             // $v0
    int v46;             // $v0
    int v47;             // $v0
    int v48;             // $v0
    int v49;             // $t9
    int v50;             // $v1
    float v51;           // $f0
    int v52;             // $v0
    float v53;           // $f0
    int v54;             // $t8
    int *v55;            // $v0
    int v56;             // $a1
    int v57;             // $a2
    int v58;             // $a3
    int v59;             // $v0
    float v60;           // $f18
    float v62;           // $f10
    int v63;             // $v1
    float v64;           // $f16
    unsigned int v67;    // $t9
    int v70;             // $v0
    float v71;           // $f6
    __int64 *v72;        // [sp+2Ch] [-4Ch]
    __int64 *v73;        // [sp+2Ch] [-4Ch]
    __int64 *v74;        // [sp+2Ch] [-4Ch]
    int v75;             // [sp+48h] [-30h]
    int v76;             // [sp+50h] [-28h]
    int v77;             // [sp+54h] [-24h] BYREF
    float v78;           // [sp+58h] [-20h] BYREF
    float v79;           // [sp+5Ch] [-1Ch] BYREF
    int v80;             // [sp+60h] [-18h]
    float *v81;          // [sp+64h] [-14h]
    int v82;             // [sp+68h] [-10h]
    int v83;             // [sp+6Ch] [-Ch]
    float v84;           // [sp+70h] [-8h]

    result = 0x72327100u;
    v3 = 2 * *(_DWORD *)(a1 + 320);
    if (!*(_DWORD *)(a1 + 3792)) {
        v4 = &qword_802A4920[6 * *(_DWORD *)(a1 + 320)];
        *((_DWORD *)v4 + 5) = 0;
        *((_DWORD *)v4 + 2) = 0;
        *((_DWORD *)v4 + 3) = 0;
        return result;
    }
    v5 = 0;
    v6 = (float *)(a1 + 48);
    v81 = (float *)MEMORY[0x72328EE8];
    if (*(_DWORD *)(a1 + 3912) || MEMORY[0x72328048]) {
        v5 = 1;
        v7 = v81;
    } else {
        v7 = v81;
    }
    v83 = v3;
    v80 = v5;
    v82 = 0x72327100u;
    *(float *)(a1 + 3908) = sub_8022B0F8(v6, (float *)(a1 + 3920), v7 + 12, (float *)(a1 + 3884));
    sub_8022B1D4((float *)(a1 + 48), v81, &v79, &v78, &v77, 0);
    v8 = *(float *)(a1 + 3572);
    v9 = v83;
    if (v8 <= 0.0)
        v10 = (float)((float)(v8 * -0.5) * 0.00071428571) * 11000.0;
    else
        v10 = (float)((float)(v8 * 0.5) * 0.00071428571) * 11000.0;
    v11 = *(float *)(a1 + 3908) * v10;
    if (v11 > 100000.0) {
        v12 = 0.0;
        v11 = 0.0;
    } else {
        v12 = 0.0;
        if (v11 >= 0.0) {
            v13 = *(_DWORD *)(a1 + 320);
            goto LABEL_17;
        }
        v11 = 0.0;
    }
    v13 = *(_DWORD *)(a1 + 320);
LABEL_17:
    if (v13) {
        v14 = v80;
    } else {
        if ((*(_WORD *)(MEMORY[0x80025C60] + 84 * *(unsigned __int16 *)(a1 + 8128) + 76) & 0x10) !=
            0)
            dword_802A49B0 = 11000;
        else
            dword_802A49B0 = 0;
        v14 = v80;
    }
    if (!v14) {
        v15 = sub_80266A08((float)(v11 * 0.000090909089) * 4294967300.0);
        v9 = v83;
        v16 = &qword_802A4920[3 * v83];
        v17 = (float)v77 * v79;
        _$T9 = 1;
        v12 = 0.0;
        v19 = v78 * (float)v77;
        *((_DWORD *)v16 + 2) = v15;
        *((_DWORD *)v16 + 3) = v20;
        v21 = (float)((int)v17 << 16) + v19;
        __asm
        {
      cfc1    $t7, FCSR
      ctc1    $t9, FCSR
      cfc1    $t9, FCSR
        }
        if ((_$T9 & 0x78) != 0) {
            _$T9 = 1;
            __asm
            {
        ctc1    $t9, FCSR
        cfc1    $t9, FCSR
            }
            if ((_$T9 & 0x78) == 0) {
                v24 = (int)(float)(v21 - 2147483600.0) | 0x80000000;
            LABEL_30:
                __asm { ctc1    $t7, FCSR }
                *((_DWORD *)v16 + 5) = v24;
                goto LABEL_31;
            }
        }
        else {
            v24 = (int)v21;
            if ((int)v21 >= 0)
                goto LABEL_30;
        }
        v24 = -1;
        goto LABEL_30;
    }
LABEL_31:
    v27 = &qword_802A4920[3 * v9];
    v28 = *(_DWORD *)(a1 + 3896);
    v76 = v28;
    if (*((_DWORD *)v27 + 8) || *((_DWORD *)v27 + 9)) {
        if (*(_BYTE *)(a1 + 844)) {
            v29 = *(unsigned __int8 *)(a1 + 838);
            goto LABEL_42;
        }
        if (v28 < 4)
            goto LABEL_41;
        if (v28 >= 8) {
            v29 = *(unsigned __int8 *)(a1 + 838);
            goto LABEL_42;
        }
        *(_DWORD *)(a1 + 3896) = 0;
    } else {
        *(_DWORD *)(a1 + 3896) = 0;
    }
    *(_DWORD *)(a1 + 3900) = 0;
    *(_DWORD *)(a1 + 3904) = 0;
LABEL_41:
    v29 = *(unsigned __int8 *)(a1 + 838);
LABEL_42:
    if (*(_DWORD *)(a1 + 3900) < v29)
        goto LABEL_48;
    if (v29) {
        if (*(int *)(a1 + 3904) >= 100) {
        LABEL_50:
            v30 = *(unsigned __int8 *)(a1 + 839);
            goto LABEL_51;
        }
    LABEL_48:
        *(_DWORD *)(a1 + 3900) = v29;
        *(_DWORD *)(a1 + 3896) = 1;
        *(_DWORD *)(a1 + 3904) = 100;
        v31 = *(_DWORD *)(a1 + 320);
        if (v31 < 1) {
            *((_WORD *)&dword_802A4BFC + v31) = 0;
            *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
            word_802A4BF4[*(_DWORD *)(a1 + 320)] = 5;
            word_802A4BF8[*(_DWORD *)(a1 + 320)] = 1;
            *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 30;
            *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
        }
        goto LABEL_50;
    }
    v30 = *(unsigned __int8 *)(a1 + 839);
LABEL_51:
    v32 = *(_DWORD *)(a1 + 3900);
    *(_BYTE *)(a1 + 838) = 0;
    v33 = v30;
    if (v32 < v30)
        goto LABEL_57;
    if (!v30) {
        v34 = *(unsigned __int8 *)(a1 + 843);
        goto LABEL_61;
    }
    if (*(int *)(a1 + 3904) < 90) {
    LABEL_57:
        v35 = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(a1 + 3900) = v33;
        *(_DWORD *)(a1 + 3896) = 2;
        *(_DWORD *)(a1 + 3904) = 90;
        if (v35 >= 1) {
            v34 = *(unsigned __int8 *)(a1 + 843);
            goto LABEL_61;
        }
        *((_WORD *)&dword_802A4BFC + v35) = 0;
        *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
        word_802A4BF4[*(_DWORD *)(a1 + 320)] = 100;
        word_802A4BF8[*(_DWORD *)(a1 + 320)] = 1;
        *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 30;
        *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
    }
    v34 = *(unsigned __int8 *)(a1 + 843);
LABEL_61:
    v36 = *(_DWORD *)(a1 + 3900);
    *(_BYTE *)(a1 + 839) = 0;
    v37 = v34;
    if (v36 < v34) {
    LABEL_65:
        v39 = *(_DWORD *)(a1 + 320);
        *(_DWORD *)(a1 + 3900) = v37;
        *(_DWORD *)(a1 + 3896) = 3;
        *(_DWORD *)(a1 + 3904) = 80;
        if (v39 >= 1) {
            v38 = *(_DWORD *)(a1 + 3896);
            goto LABEL_69;
        }
        *((_WORD *)&dword_802A4BFC + v39) = 0;
        *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
        word_802A4BF4[*(_DWORD *)(a1 + 320)] = 3;
        word_802A4BF8[*(_DWORD *)(a1 + 320)] = 2;
        *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 20;
        *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
    LABEL_68:
        v38 = *(_DWORD *)(a1 + 3896);
        goto LABEL_69;
    }
    if (v34) {
        if (*(int *)(a1 + 3904) >= 80)
            goto LABEL_68;
        goto LABEL_65;
    }
    v38 = *(_DWORD *)(a1 + 3896);
LABEL_69:
    *(_BYTE *)(a1 + 843) = 0;
    if (v38 && (v38 < 4 || v38 >= 8)) {
        if (v38 < 8)
            goto LABEL_119;
        if (v38 >= 13) {
            v40 = *(_DWORD *)(a1 + 3896);
            goto LABEL_120;
        }
    }
    v41 = *(_DWORD *)(a1 + 1804);
    *(_BYTE *)(a1 + 842) = 0;
    v42 = -1;
    if (v41)
        v42 = *(unsigned __int8 *)(a1 + 1784);
    v43 = *(unsigned __int8 *)(a1 + 844);
    v44 = v43;
    if (*(_DWORD *)(a1 + 3900) < v43)
        goto LABEL_87;
    if (*(_BYTE *)(a1 + 844) && *(int *)(a1 + 3904) < 40) {
        *(_DWORD *)(a1 + 3900) = v43;
    LABEL_88:
        switch (v42) {
        case 0:
        case 3:
            v45 = *(_DWORD *)(a1 + 320);
            if (v45 < 1 && !*((_WORD *)&dword_802A4BEC + v45)) {
                *((_WORD *)&dword_802A4BFC + v45) = 0;
                *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
                word_802A4BF4[*(_DWORD *)(a1 + 320)] = 1;
                word_802A4BF8[*(_DWORD *)(a1 + 320)] = 9;
                *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 10;
                *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
            }
            *(_DWORD *)(a1 + 3896) = 7;
            v44 = *(unsigned __int8 *)(a1 + 844);
            break;
        case 1:
            v46 = *(_DWORD *)(a1 + 320);
            if (v46 < 1 && !*((_WORD *)&dword_802A4BEC + v46)) {
                *((_WORD *)&dword_802A4BFC + v46) = 0;
                *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
                word_802A4BF4[*(_DWORD *)(a1 + 320)] = 1;
                word_802A4BF8[*(_DWORD *)(a1 + 320)] = 14;
                *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 15;
                *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
            }
            *(_DWORD *)(a1 + 3896) = 5;
            v44 = *(unsigned __int8 *)(a1 + 844);
            break;
        case 2:
            v47 = *(_DWORD *)(a1 + 320);
            if (v47 < 1 && !*((_WORD *)&dword_802A4BEC + v47)) {
                *((_WORD *)&dword_802A4BFC + v47) = 0;
                *((_WORD *)&dword_802A4BF0 + *(_DWORD *)(a1 + 320)) = 0;
                word_802A4BF4[*(_DWORD *)(a1 + 320)] = 1;
                word_802A4BF8[*(_DWORD *)(a1 + 320)] = 12;
                *((_WORD *)&dword_802A4C00 + *(_DWORD *)(a1 + 320)) = 13;
                *((_WORD *)&dword_802A4BEC + *(_DWORD *)(a1 + 320)) = 1;
            }
            *(_DWORD *)(a1 + 3896) = 4;
            v44 = *(unsigned __int8 *)(a1 + 844);
            break;
        case 4:
            *(_DWORD *)(a1 + 3896) = 12;
            v44 = *(unsigned __int8 *)(a1 + 844);
            break;
        default:
            break;
        }
        *(_DWORD *)(a1 + 3900) = v44 >> 1;
        v48 = *(__int16 *)(a1 + 324);
        *(_DWORD *)(a1 + 3904) = 40;
        *(_WORD *)(a1 + 324) = v48 + 1;
        if (v48 >= 17)
            *(_WORD *)(a1 + 324) = 16;
        v49 = *(_DWORD *)(a1 + 3900) * *(__int16 *)(a1 + 324);
        *(_DWORD *)(a1 + 3900) = v49;
        *(_DWORD *)(a1 + 3900) = v49 / 12;
        v50 = *(_DWORD *)(a1 + 3896);
        goto LABEL_107;
    }
    if (*(_BYTE *)(a1 + 844)) {
        if (*(_DWORD *)(a1 + 3904) != 40 || v76 < 4) {
            *(_WORD *)(a1 + 324) = 0;
            goto LABEL_106;
        }
        if (v76 >= 8) {
            *(_WORD *)(a1 + 324) = 0;
            goto LABEL_106;
        }
    LABEL_87:
        *(_DWORD *)(a1 + 3900) = v43;
        goto LABEL_88;
    }
    *(_WORD *)(a1 + 324) = 0;
LABEL_106:
    v50 = *(_DWORD *)(a1 + 3896);
LABEL_107:
    if (!v50) {
    LABEL_111:
        switch (v42) {
        case 0:
        case 3:
            *(_DWORD *)(a1 + 3896) = 10;
            break;
        case 1:
            *(_DWORD *)(a1 + 3896) = 8;
            break;
        case 2:
            *(_DWORD *)(a1 + 3896) = 9;
            break;
        case 4:
            *(_DWORD *)(a1 + 3896) = 12;
            break;
        default:
            *(_DWORD *)(a1 + 3896) = 0;
            break;
        }
        *(_DWORD *)(a1 + 3904) = 1;
        v83 = v9;
        v72 = &qword_802A4920[3 * v9];
        v51 = sub_80224B08((float *)(a1 + 4056));
        v27 = v72;
        v9 = v83;
        v12 = 0.0;
        v52 = (int)(float)((float)(v51 * 64.0) / 27.0);
        *(_DWORD *)(a1 + 3900) = v52;
        if (v52 >= 65)
            *(_DWORD *)(a1 + 3900) = 64;
        goto LABEL_119;
    }
    if (v50 >= 8) {
        if (v50 >= 13) {
            v40 = *(_DWORD *)(a1 + 3896);
            goto LABEL_120;
        }
        goto LABEL_111;
    }
LABEL_119:
    v40 = *(_DWORD *)(a1 + 3896);
LABEL_120:
    if (!v40) {
        if (v27 == qword_802A4920) {
            *((_DWORD *)v27 + 11) = 0;
            *((_DWORD *)v27 + 9) = 0;
            *((_DWORD *)v27 + 8) = 0;
        }
        goto LABEL_141;
    }
    v53 = *(float *)(a1 + 3908) * 11000.0;
    if (v53 <= 20000.0) {
        if (v53 < v12)
            v53 = v12;
    } else {
        v53 = v12;
    }
    if (v76 == v40) {
        v54 = v80;
    } else {
        if (!v9) {
            v55 = &dword_8028BC04[6 * v40];
            v56 = *v55;
            v57 = v55[3];
            v58 = v55[4];
            v73 = v27;
            v84 = v53;
            sub_80257B78(1, v56, v57, v58);
            v27 = v73;
            v53 = v84;
        }
        v54 = v80;
    }
    if (v54 || v27 != qword_802A4920)
        goto LABEL_141;
    v74 = v27;
    v75 = (*(_DWORD *)(a1 + 3900) * v77) >> 7;
    v59 = sub_80266A08((float)(v53 * 0.000090909089) * 4294967300.0);
    v60 = v79;
    _$T9 = 1;
    v62 = v78;
    *((_DWORD *)v74 + 8) = v59;
    *((_DWORD *)v74 + 9) = v63;
    v64 = (float)((int)(float)((float)v75 * v60) << 16) + (float)(v62 * (float)v75);
    __asm
    {
    cfc1    $t7, FCSR
    ctc1    $t9, FCSR
    cfc1    $t9, FCSR
    }
    if ((_$T9 & 0x78) == 0) {
        v67 = (int)v64;
        if ((int)v64 >= 0)
            goto LABEL_140;
        goto LABEL_138;
    }
    _$T9 = 1;
    __asm
    {
    ctc1    $t9, FCSR
    cfc1    $t9, FCSR
    }
    if ((_$T9 & 0x78) != 0) {
    LABEL_138:
        v67 = -1;
        goto LABEL_140;
    }
    v67 = (int)(float)(v64 - 2147483600.0) | 0x80000000;
LABEL_140:
    __asm { ctc1    $t7, FCSR }
    *((_DWORD *)v74 + 11) = v67;
LABEL_141:
    v70 = *(_DWORD *)(v82 + 7656);
    v71 = *(float *)(v70 + 48);
    result = v70 + 48;
    *(float *)(a1 + 3884) = v71;
    *(_DWORD *)(a1 + 3888) = *(_DWORD *)(result + 4);
    *(_DWORD *)(a1 + 3892) = *(_DWORD *)(result + 8);
    return result;
}
// 8022BF14: write access to const memory at 802A49B0 has been detected
// 8022BF18: write access to const memory at 802A49B0 has been detected
// 8022BF94: variable 'v20' is possibly undefined
// 8022C8E0: variable 'v63' is possibly undefined
// 8026FF08: using guessed type int dword_8026FF08;
// 8028BC04: using guessed type int dword_8028BC04[];
// 8028C800: using guessed type int dword_8028C800;
// 802A4920: using guessed type __int64 qword_802A4920[];
// 802A49B0: using guessed type int dword_802A49B0;
// 802A4BEC: using guessed type int dword_802A4BEC;
// 802A4BF0: using guessed type int dword_802A4BF0;
// 802A4BF4: using guessed type __int16 word_802A4BF4[];
// 802A4BF8: using guessed type __int16 word_802A4BF8[];
// 802A4BFC: using guessed type int dword_802A4BFC;
// 802A4C00: using guessed type int dword_802A4C00;
// 8031B2D8: using guessed type int dword_8031B2D8;
