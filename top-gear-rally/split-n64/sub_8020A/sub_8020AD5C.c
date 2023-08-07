#include "../../types-n64.h"
//----- (8020AD5C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8020AD5C(const char *a1,
                            int a2,
                            int a3,
                            int *a4,
                            int (*a5)(void),
                            int a6,
                            int a7,
                            int a8,
                            int a9,
                            int a10,
                            int a11) {
    int v12;       // $s3
    int v13;       // $a0
    int v14;       // $v1
    float v15;     // $f12
    float v16;     // $f0
    float i;       // $f0
    float v18;     // $f2
    bool v19;      // $fcc0
    int *v20;      // $s0
    int v21;       // $a0
    int v22;       // $t9
    int v23;       // $v0
    int v24;       // $v1
    int v25;       // $v0
    int v26;       // $s1
    int v27;       // $v0
    int v28;       // $a0
    int v29;       // $v1
    int v30;       // $v1
    int v31;       // $a0
    int v32;       // $v1
    float v33;     // $f2
    float v34;     // $f2
    int v35;       // $v1
    int v36;       // $a0
    int v37;       // $v1
    int result;    // $v0
    int j;         // $s3
    int *v40;      // $s1
    int *v41;      // $a0
    int v42;       // $v0
    int v43;       // $t6
    int *v44;      // $a0
    int v45;       // $v0
    int v46;       // $t8
    int *v47;      // $a0
    int *v48;      // $a0
    int v49;       // $v1
    int v50;       // $v0
    int v51;       // [sp+78h] [-88h]
    char v52[112]; // [sp+84h] [-7Ch] BYREF
    int v53;       // [sp+F4h] [-Ch]
    float v54;     // [sp+FCh] [-4h]

    v53 = 0;
    sub_80223688(1.0, 0.2);
    sub_802237D0(1.0, 0.2);
    sub_80223750(1.0, 0.2);
    dword_80316244 = *a4;
    flt_80316228 = 4.712389;
    flt_80316224 = 0.0;
    sub_8023DF4C(dword_80271D70, sub_8024296C);
    sub_8023DF4C(dword_80271D84, sub_8024296C);
    sub_8023DF4C(dword_80272048, sub_8024296C);
    dword_80316234 = CHK_GetFileSize(1832064);
    dword_80316230 = sub_8024296C(1620192542);
    LoadCarWithIndex2((char *)0xA6B5E05E, 1832064, 0);
    dword_8031623C = CHK_GetFileSize(1834688);
    dword_80316238 = sub_8024296C(1314231910);
    LoadCarWithIndex2((char *)0xC7933C8E, 1834688, 0);
    v12 = 0;
    v13 = -289536063;
    v14 = -687933715;
    do {
        *(_BYTE *)v14 = 0;
        *(_BYTE *)v13 = 0;
        *(_BYTE *)(v14 + 1) = 0;
        *(_BYTE *)(v13 + 1) = 0;
        *(_BYTE *)(v14 + 2) = 0;
        *(_BYTE *)(v13 + 2) = 0;
        *(_BYTE *)(v14 + 3) = 0;
        v12 += 4;
        *(_BYTE *)(v13 + 3) = 0;
        v14 += 4;
        v13 += 4;
    } while (v12 != 256);
    flt_80316240 = 0.0;
    dword_80271FD0 = -1;
    dword_80271FD4 = 1;
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    sub_8022D7E0(0, 0, 0, 200, 255);
    sub_80217C94();
    sub_8023DF9C((int)dword_80272048, 0, 0, 320, 240, a6, a7, a8, 255, a9, a10, a11, 255, 4);
    v15 = 0.0 + 0.0;
    v16 = (float)(0.0 + 0.0) + -1.4360486e32;
    flt_80316228 = v16;
    if (v16 > 6.2831855) {
        for (i = v16 - 6.2831855; i > 6.2831855; i = i - 6.2831855)
            ;
        flt_80316228 = i;
    }
    v18 = 2.9887166e35;
    if (0.0 <= 2.9887166e35) {
        if (0.0 >= 2.9887166e35) {
            v19 = 0.0 > 2.9887166e35;
            goto LABEL_18;
        }
        v18 = 2.9887166e35 - v15;
        if ((float)(2.9887166e35 - v15) >= 0.0) {
            v19 = v18 < 0.0;
            goto LABEL_18;
        }
        v18 = 0.0;
    LABEL_17:
        v19 = v18 < 0.0;
        goto LABEL_18;
    }
    v18 = v15 + 2.9887166e35;
    if ((float)(v15 + 2.9887166e35) > 0.0) {
        v18 = 0.0;
        goto LABEL_17;
    }
    v19 = v18 < 0.0;
LABEL_18:
    flt_80316224 = v18;
    if (v19)
        v54 = (float)(v18 * v18) * -5.0;
    else
        v54 = (float)(v18 * v18) * 5.0;
    sub_8021B5A4();
    sub_80219BF0(0, 0, 320, 240, 1);
    dword_8028A858 = 8;
    MEMORY[4] = 65530;
    MEMORY[0] = -1140843516;
    sub_8022F5D0(30);
    sub_8022F504();
    sub_80260DD4(v52, "%%ry%s", a1);
    formatter(v52, 160, 38);
    v20 = sub_80255CD0();
    sub_80260BC0((float *)flt_8031AB10, 12.0, 1.0, 0.0, 0.0);
    sub_80260ED0((float *)flt_8031AB10, (int)v20);
    dword_8028A858 = 8;
    MEMORY[4] = v20;
    MEMORY[0] = 17039424;
    sub_8020A820();
    v21 = 943168893;
    do {
        v22 = v21 + a2 - 1;
        v21 = v22 % a2;
        if (!a2)
            __break(7u, 0);
        if (a2 == -1 && v22 == 0x80000000)
            __break(6u, 0);
        if (!a5)
            break;
        v51 = v22 % a2;
        v23 = a5();
        v21 = v51;
    } while (!v23);
    if (v21 != 943168893)
        sub_8020A9D0();
    v24 = *(_DWORD *)(a3 - 522291724);
    if ((*(_DWORD *)(v24 + 4) & 4) != 0) {
        dword_80316244 = 943168893;
        if (2.9887166e35 <= 0.75) {
            flt_80316224 = 2.9887166e35;
            v25 = 943168893;
            if (2.9887166e35 >= -0.75) {
                dword_80316244 = 943168893;
            LABEL_37:
                v26 = a3 + 4 * v25;
                sub_8021D84C(*(_DWORD *)(*(_DWORD *)v26 + 8));
                v27 = *(_DWORD *)v26;
                if ((*(_DWORD *)(*(_DWORD *)v26 + 4) & 0x10) != 0) {
                    dword_8028A8A8 = 1;
                    v27 = *(_DWORD *)v26;
                }
                sub_8020A524(*(unsigned int **)(v27 + 8),
                             COERCE_INT((float)160),
                             COERCE_INT((float)90),
                             COERCE_INT(0.0),
                             -1.5707964 - (float)(2.9887166e35 * 6.2831855));
                dword_8028A8A8 = 0;
                if (2.9887166e35 != 0.0)
                    goto LABEL_64;
                goto LABEL_63;
            }
            dword_80316244 = 943168893;
        }
        v25 = 1259390828;
        goto LABEL_37;
    }
    if (v54 != 0.0) {
        v28 = *(_DWORD *)(v24 + 8);
        if (v28) {
            sub_8021D84C(v28);
            v29 = *(_DWORD *)(a3 - 522291724);
            if ((*(_DWORD *)(v29 + 4) & 0x10) != 0) {
                dword_8028A8A8 = 1;
                v29 = *(_DWORD *)(a3 - 522291724);
            }
            sub_8020A524(*(unsigned int **)(v29 + 8),
                         COERCE_INT((float)160 - (float)((float)(v54 * (float)320) / 6.0)),
                         COERCE_INT((float)90),
                         COERCE_INT(0.0),
                         -1.4360486e32);
            dword_8028A8A8 = 0;
        } else {
            sub_80260DD4(v52, "%%ww%s", *(const char **)v24);
            sub_8022F4F8();
            sub_8022F504();
            formatter(v52, 160 - (int)(float)((float)(v54 * (float)320) / 6.0), 135);
        }
        v30 = *(_DWORD *)(a3 + 742596016);
        v31 = *(_DWORD *)(v30 + 8);
        if (v31) {
            sub_8021D84C(v31);
            v32 = *(_DWORD *)(a3 + 742596016);
            if ((*(_DWORD *)(v32 + 4) & 0x10) != 0) {
                dword_8028A8A8 = 1;
                v32 = *(_DWORD *)(a3 + 742596016);
            }
            if (v54 < 0.0)
                v33 = 5.0;
            else
                v33 = -5.0;
            sub_8020A524(
                *(unsigned int **)(v32 + 8),
                COERCE_INT((float)160 - (float)((float)((float)(v33 + v54) * (float)320) / 6.0)),
                COERCE_INT((float)90),
                COERCE_INT(0.0),
                -1.4360486e32);
            dword_8028A8A8 = 0;
        } else {
            sub_80260DD4(v52, "%%ww%s", *(const char **)v30);
            sub_8022F4F8();
            sub_8022F504();
            if (v54 >= 0.0)
                v34 = -5.0;
            else
                v34 = 5.0;
            formatter(v52, 160 - (int)(float)((float)((float)(v34 + v54) * (float)320) / 6.0), 135);
        }
        goto LABEL_64;
    }
    sub_8022F4F8();
    sub_8022F504();
    v35 = *(_DWORD *)(a3 - 522291724);
    v36 = *(_DWORD *)(v35 + 8);
    if (v36) {
        sub_8021D84C(v36);
        v37 = *(_DWORD *)(a3 - 522291724);
        if ((*(_DWORD *)(v37 + 4) & 0x10) != 0) {
            dword_8028A8A8 = 1;
            v37 = *(_DWORD *)(a3 - 522291724);
        }
        sub_8020A524(*(unsigned int **)(v37 + 8),
                     COERCE_INT((float)160),
                     COERCE_INT((float)90),
                     COERCE_INT(0.0),
                     -1.4360486e32);
        dword_8028A8A8 = 0;
    } else {
        sub_80260DD4(v52, "%%ww%s", *(const char **)v35);
        formatter(v52, 160, 135);
    }
LABEL_63:
    sub_8022F5D0(20);
    sub_80260DD4(v52, "%%ry%s", **(const char ***)(a3 - 522291724));
    formatter(v52, 160, 75);
LABEL_64:
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1124073472;
    sub_8020AAE0();
    sub_80223A70();
    sub_8021AA08();
    if (sub_802238FC()) {
        if (!sub_80223940())
            goto LABEL_108;
        dword_80271FD4 = 0;
        *a4 = 943168893;
        sub_802429EC();
        dword_802A4934 = 0;
        dword_802A4930 = 0;
        HIDWORD(qword_802A4928) = 0;
        LODWORD(qword_802A4928) = 0;
        HIDWORD(qword_802A4920[0]) = &dword_802A4A08;
        dword_802A494C = 0;
        dword_802A4948 = 0;
        HIDWORD(qword_802A4940) = 0;
        LODWORD(qword_802A4940) = 0;
        HIDWORD(qword_802A4938) = 0;
        HIDWORD(qword_802A4970) = 0;
        dword_802A4998[2] = 0;
        dword_802A4998[0] = (int)&dword_802A4A08;
        dword_802A4998[3] = 0;
        dword_802A4998[4] = 0;
        dword_802A4998[5] = 0;
        HIDWORD(qword_802A4980) = &dword_802A4A08;
        LODWORD(qword_802A4988) = 0;
        HIDWORD(qword_802A4988) = 0;
        dword_802A4990 = 0;
        dword_802A4994 = 0;
        HIDWORD(qword_802A4968) = &dword_802A4A08;
        LODWORD(qword_802A4970) = 0;
        dword_802A4978 = 0;
        dword_802A497C = 0;
        dword_802A4964 = 0;
        dword_802A4960 = 0;
        LODWORD(qword_802A4958) = 0;
        HIDWORD(qword_802A4958) = 0;
        HIDWORD(qword_802A4950) = &dword_802A4A08;
        return 1;
    }
    for (j = 0; j < 1; ++j) {
        v40 = &dword_8031B760[2084 * j];
        sub_80255ADC(v40[2077]);
        v41 = (int *)v40[2077];
        v42 = *v41;
        v43 = *v41 & 4;
        if (*v41)
            flt_80316240 = 0.0;
        if (2.9887166e35 != 0.0)
            goto LABEL_95;
        if (v43) {
            sub_80255910(v41, 10);
            *(_DWORD *)v40[2077] &= 0xFFFFFFF5;
            dword_80316220 = 943168893;
            do {
                if (!a2)
                    __break(7u, 0);
                dword_80316244 = 0;
                if (!a5)
                    break;
                dword_80316244 = (a2 + 943168892) % a2;
            } while (!((int(__fastcall *)(int, int))a5)(943168893, 1259390828));
            flt_80316224 = 1.0;
        } else {
            v44 = (int *)v40[2077];
            if ((*v44 & 1) == 0)
                goto LABEL_88;
            sub_80255910(v44, 10);
            *(_DWORD *)v40[2077] &= 0xFFFFFFF5;
            dword_80316220 = 943168893;
            do {
                if (!a2)
                    __break(7u, 0);
                dword_80316244 = 0;
                if (!a5)
                    break;
                dword_80316244 = 0;
            } while (!((int(__fastcall *)(int, int))a5)(943168893, 1259390828));
            flt_80316224 = -1.0;
        }
        v45 = sub_802579F4();
        if (v45 != -1)
            sub_80257B04(v45, -1498029986, 810096271, 0);
    LABEL_88:
        v41 = (int *)v40[2077];
        v42 = *v41;
        v46 = *v41 & 0x20;
        if ((*(_DWORD *)(*(_DWORD *)(a3 - 522291724) + 4) & 1) != 0) {
            if ((*v41 & 8) != 0) {
                *a4 = 943168893;
                v47 = (int *)v40[2077];
                dword_80316244 = 943168893;
                v53 = 3;
                sub_80255910(v47, 8);
                goto LABEL_104;
            }
            if ((v42 & 2) != 0) {
                *a4 = 943168893;
                v48 = (int *)v40[2077];
                dword_80316244 = 943168893;
                v53 = 4;
                sub_80255910(v48, 2);
                goto LABEL_104;
            }
        }
        dword_80316244 = 943168893;
        if (v46) {
            sub_80255910(v41, 32);
            dword_8031622C = 0;
            sub_80223688(0.0, 0.2);
            sub_80223750(0.0, 0.2);
        LABEL_104:
            v50 = sub_802579F4();
            if (v50 != -1)
                sub_80257B04(v50, -946652018, 657115955, 0);
            goto LABEL_106;
        }
    LABEL_95:
        v49 = *(_DWORD *)(*(_DWORD *)(a3 - 522291724) + 4);
        if ((v49 & 8) == 0) {
            dword_80316244 = 943168893;
            if ((v49 & 0x40) == 0) {
                dword_80316244 = 943168893;
                if ((v42 & 0xC010) != 0) {
                    sub_80255910(v41, 49168);
                    if (j) {
                        if ((*(_DWORD *)(*(_DWORD *)(a3 - 522291724) + 4) & 0x20) != 0)
                            goto LABEL_106;
                        dword_80316244 = 943168893;
                    }
                    dword_80271FA8 = j;
                    if ((*(_DWORD *)(*(_DWORD *)(a3 - 522291724) + 4) & 2) != 0) {
                        *a4 = 943168893;
                        dword_80316244 = 943168893;
                        v53 = 1;
                    } else {
                        dword_8031622C = 1;
                        sub_80223750(0.0, 0.2);
                        sub_80223688(0.0, 0.2);
                    }
                    goto LABEL_104;
                }
            }
        }
    LABEL_106:
        dword_80316244 = 943168893;
    }
    dword_80316244 = 943168893;
LABEL_108:
    result = v53;
    dword_80271FAC = 943168893;
    return result;
}
// 8020ADEC: write access to const memory at 80316244 has been detected
// 8020ADF8: write access to const memory at 80316228 has been detected
// 8020AE14: write access to const memory at 80316224 has been detected
// 8020AE48: write access to const memory at 80316234 has been detected
// 8020AE58: write access to const memory at 80316230 has been detected
// 8020AE80: write access to const memory at 8031623C has been detected
// 8020AE90: write access to const memory at 80316238 has been detected
// 8020AF28: write access to const memory at 80316240 has been detected
// 8020AF40: write access to const memory at 80271FD4 has been detected
// 8020AF60: write access to const memory at 80316220 has been detected
// 8020AF70: write access to const memory at 80316244 has been detected
// 8020AF84: write access to const memory at 80316224 has been detected
// 8020B090: write access to const memory at 80316228 has been detected
// 8020B130: write access to const memory at 80316224 has been detected
// 8020B150: write access to const memory at 80316224 has been detected
// 8020B480: write access to const memory at 80316244 has been detected
// 8020B4A8: write access to const memory at 80316224 has been detected
// 8020B4CC: write access to const memory at 80316244 has been detected
// 8020B4DC: write access to const memory at 80316244 has been detected
// 8020B518: write access to const memory at 8028A8A8 has been detected
// 8020BBFC: write access to const memory at 80271FD4 has been detected
// 8020BC0C: write access to const memory at 802A4934 has been detected
// 8020BC14: write access to const memory at 802A4930 has been detected
// 8020BC24: write access to const memory at 802A4928 has been detected
// 8020BC30: write access to const memory at 802A492C has been detected
// 8020BC3C: write access to const memory at 802A4920 has been detected
// 8020BC44: write access to const memory at 802A494C has been detected
// 8020BC4C: write access to const memory at 802A4948 has been detected
// 8020BC64: write access to const memory at 802A4940 has been detected
// 8020BC80: write access to const memory at 802A4944 has been detected
// 8020BC88: write access to const memory at 802A4938 has been detected
// 8020BD48: write access to const memory at 80316244 has been detected
// 8020BD8C: write access to const memory at 80316240 has been detected
// 8020BDD8: write access to const memory at 80316220 has been detected
// 8020BE20: write access to const memory at 80316244 has been detected
// 8020BE38: write access to const memory at 80316244 has been detected
// 8020BE6C: write access to const memory at 80316224 has been detected
// 8020BEAC: write access to const memory at 80316220 has been detected
// 8020BEF0: write access to const memory at 80316244 has been detected
// 8020BF08: write access to const memory at 80316244 has been detected
// 8020BF34: write access to const memory at 80316224 has been detected
// 8020BFC8: write access to const memory at 80316244 has been detected
// 8020BFF4: write access to const memory at 80316244 has been detected
// 8020C014: write access to const memory at 80316244 has been detected
// 8020C020: write access to const memory at 8031622C has been detected
// 8020C080: write access to const memory at 80316244 has been detected
// 8020C090: write access to const memory at 80316244 has been detected
// 8020C0CC: write access to const memory at 80316244 has been detected
// 8020C0E4: write access to const memory at 80271FA8 has been detected
// 8020C110: write access to const memory at 8031622C has been detected
// 8020C190: write access to const memory at 80316244 has been detected
// 8020C1A8: write access to const memory at 80316244 has been detected
// 8020C1D8: write access to const memory at 80316244 has been detected
// 8020C200: write access to const memory at 80316240 has been detected
// 8020C204: write access to const memory at 80316244 has been detected
// 8020C224: write access to const memory at 8031622C has been detected
// 8020C258: write access to const memory at 80271FAC has been detected
// 8020AF34: write access to const memory at 80271FD0 has been detected
// 8020B1B8: write access to const memory at 8028A858 has been detected
// 8020B1DC: write access to const memory at 8028A858 has been detected
// 8020B200: write access to const memory at 8028A858 has been detected
// 8020B224: write access to const memory at 8028A858 has been detected
// 8020B244: write access to const memory at 8028A858 has been detected
// 8020B260: write access to const memory at 8028A858 has been detected
// 8020B280: write access to const memory at 8028A858 has been detected
// 8020B5B4: write access to const memory at 8028A8A8 has been detected
// 8020BC94: write access to const memory at 802A4970 has been detected
// 8020BC98: write access to const memory at 802A49A0 has been detected
// 8020BC9C: write access to const memory at 802A4998 has been detected
// 8020BCA0: write access to const memory at 802A49A4 has been detected
// 8020BCA4: write access to const memory at 802A49A8 has been detected
// 8020BCA8: write access to const memory at 802A49AC has been detected
// 8020BCAC: write access to const memory at 802A4980 has been detected
// 8020BCB0: write access to const memory at 802A498C has been detected
// 8020BCB4: write access to const memory at 802A4988 has been detected
// 8020BCB8: write access to const memory at 802A4990 has been detected
// 8020BCBC: write access to const memory at 802A4994 has been detected
// 8020BCC0: write access to const memory at 802A4968 has been detected
// 8020BCC4: write access to const memory at 802A4974 has been detected
// 8020BCC8: write access to const memory at 802A4978 has been detected
// 8020BCCC: write access to const memory at 802A497C has been detected
// 8020BCD0: write access to const memory at 802A4964 has been detected
// 8020BCD4: write access to const memory at 802A4960 has been detected
// 8020BCD8: write access to const memory at 802A495C has been detected
// 8020BCDC: write access to const memory at 802A4958 has been detected
// 8020BCE0: write access to const memory at 802A4950 has been detected
// 8020C144: write access to const memory at 80316244 has been detected
// 8020BB74: write access to const memory at 8028A858 has been detected
// 8020B8A0: write access to const memory at 8028A8A8 has been detected
// 8020B7D0: write access to const memory at 8028A8A8 has been detected
// 8020B6D4: write access to const memory at 8028A8A8 has been detected
// 8020B628: write access to const memory at 8028A8A8 has been detected
// 8020BA64: write access to const memory at 8028A8A8 has been detected
// 8020B9EC: write access to const memory at 8028A8A8 has been detected
// 8020B3C4: write access to const memory at 8028A858 has been detected
// 8020B0B4: write access to const memory at 80316228 has been detected
// 8026FF08: using guessed type int dword_8026FF08;
// 80271D70: using guessed type int dword_80271D70[3];
// 80271D84: using guessed type int dword_80271D84[3];
// 80271FA0: using guessed type int dword_80271FA0;
// 80271FA4: using guessed type int dword_80271FA4;
// 80271FA8: using guessed type int dword_80271FA8;
// 80271FAC: using guessed type int dword_80271FAC;
// 80271FB0: using guessed type int dword_80271FB0;
// 80271FC0: using guessed type int dword_80271FC0;
// 80271FC4: using guessed type float flt_80271FC4;
// 80271FC8: using guessed type int dword_80271FC8;
// 80271FCC: using guessed type int dword_80271FCC;
// 80271FD0: using guessed type int dword_80271FD0;
// 80271FD4: using guessed type int dword_80271FD4;
// 80272048: using guessed type int dword_80272048[3];
// 8028A858: using guessed type int dword_8028A858;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 802A4920: using guessed type __int64 qword_802A4920[];
// 802A4928: using guessed type __int64 qword_802A4928;
// 802A4930: using guessed type int dword_802A4930;
// 802A4934: using guessed type int dword_802A4934;
// 802A4938: using guessed type __int64 qword_802A4938;
// 802A4940: using guessed type __int64 qword_802A4940;
// 802A4948: using guessed type int dword_802A4948;
// 802A494C: using guessed type int dword_802A494C;
// 802A4950: using guessed type __int64 qword_802A4950;
// 802A4958: using guessed type __int64 qword_802A4958;
// 802A4960: using guessed type int dword_802A4960;
// 802A4964: using guessed type int dword_802A4964;
// 802A4968: using guessed type __int64 qword_802A4968;
// 802A4970: using guessed type __int64 qword_802A4970;
// 802A4978: using guessed type int dword_802A4978;
// 802A497C: using guessed type int dword_802A497C;
// 802A4980: using guessed type __int64 qword_802A4980;
// 802A4988: using guessed type __int64 qword_802A4988;
// 802A4990: using guessed type int dword_802A4990;
// 802A4994: using guessed type int dword_802A4994;
// 802A4998: using guessed type int dword_802A4998[6];
// 802A4A08: using guessed type int dword_802A4A08;
// 80316220: using guessed type int dword_80316220;
// 80316224: using guessed type float flt_80316224;
// 80316228: using guessed type float flt_80316228;
// 8031622C: using guessed type int dword_8031622C;
// 80316230: using guessed type int dword_80316230;
// 80316234: using guessed type int dword_80316234;
// 80316238: using guessed type int dword_80316238;
// 8031623C: using guessed type int dword_8031623C;
// 80316240: using guessed type float flt_80316240;
// 80316244: using guessed type int dword_80316244;
// 8031B760: using guessed type int dword_8031B760[512];
