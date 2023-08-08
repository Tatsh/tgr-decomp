#include "types-n64.h"
//----- (8020686C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8020686C() {
    int v0;     // $v0
    int v1;     // $v0
    int v2;     // $v0
    int v3;     // $v0
    int v4;     // $v0
    int v5;     // $v0
    int v6;     // $v0
    int v7;     // $a1
    int v8;     // $a0
    int v9;     // $v1
    bool v10;   // dc
    int v11;    // $f2
    int v12;    // $v1
    int v13;    // $t7
    float v14;  // $f16
    int v15;    // $a0
    int v16;    // $f2
    float v17;  // $f16
    int v18;    // $a0
    int v19;    // $f2
    float v20;  // $f14
    float v21;  // $f0
    int v22;    // $f2
    int v23;    // $f2
    int v24;    // $f2
    double v25; // $f6
    int v26;    // $a0
    int v27;    // $a1
    int *v28;   // $a0
    float v29;  // $f16
    int v30;    // $t9
    int *v31;   // [sp+24h] [-8Ch]
    float v32;  // [sp+28h] [-88h]
    float v33;  // [sp+2Ch] [-84h]
    float v34;  // [sp+2Ch] [-84h]
    float v35;  // [sp+2Ch] [-84h]
    float v36;  // [sp+2Ch] [-84h]
    int *v37;   // [sp+A8h] [-8h]
    int *v38;   // [sp+A8h] [-8h]
    int *v39;   // [sp+A8h] [-8h]

    sub_80223688(1.0, 0.2);
    sub_802237D0(1.0, 0.2);
    sub_80223750(1.0, 0.2);
    sub_80242940();
    v0 = CHK_GetFileSize(1953136);
    dword_80315E88 = sub_8024296C(v0);
    sub_8021DE2C((unsigned __int8 *)0x6CB8518C, 1953136);
    v1 = CHK_GetFileSize(1948224);
    dword_80315E84 = sub_8024296C(v1);
    sub_8021DE2C((unsigned __int8 *)0x7DE65086, 1948224);
    v2 = CHK_GetFileSize(1941552);
    dword_80315E80 = sub_8024296C(v2);
    sub_8021DE2C((unsigned __int8 *)0xA2A699CD, 1941552);
    v3 = CHK_GetFileSize(1968624);
    dword_80315E8C = sub_8024296C(v3);
    sub_8021DE2C((unsigned __int8 *)0x74C0CC7C, 1968624);
    sub_8021D804(1958792316);
    v4 = CHK_GetFileSize(1981872);
    dword_80315E90 = sub_8024296C(v4);
    sub_8021DE2C((unsigned __int8 *)0xFAA27A43, 1981872);
    sub_8021D804(-90015165);
    v5 = CHK_GetFileSize(1973408);
    dword_80315E94 = sub_8024296C(v5);
    sub_8021DE2C((unsigned __int8 *)0x904DB8A9, 1973408);
    sub_8021D804(-1873954647);
    v6 = CHK_GetFileSize(1977152);
    dword_80315E98 = sub_8024296C(v6);
    sub_8021DE2C((unsigned __int8 *)0x506868BA, 1977152);
    sub_8021D804(1349019834);
    dword_80315EA0 = CHK_GetFileSize(1791040);
    dword_80315EA4 = sub_8024296C(-94543646);
    LoadCarWithIndex2((char *)0xDAC4746E, 1791040, 0);
    dword_80315EA8 = CHK_GetFileSize(1807296);
    dword_80315EAC = sub_8024296C(1513730087);
    LoadCarWithIndex2((char *)0xA4A5549F, 1807296, 0);
    v7 = 0;
    v8 = -18938938;
    v9 = -719203248;
    do {
        *(_BYTE *)v9 = 0;
        *(_BYTE *)v8 = 0;
        *(_BYTE *)(v9 + 1) = 0;
        *(_BYTE *)(v8 + 1) = 0;
        *(_BYTE *)(v9 + 2) = 0;
        *(_BYTE *)(v8 + 2) = 0;
        *(_BYTE *)(v9 + 3) = 0;
        v7 += 4;
        *(_BYTE *)(v8 + 3) = 0;
        v9 += 4;
        v8 += 4;
    } while (v7 != 256);
    dword_80315EB8 = 0;
    dword_80315EB4 = 0;
    dword_80315EC4 = 0;
    dword_80315EC0 = 0;
    dword_80315ED0 = 0;
    dword_80315ECC = 0;
    dword_80315ED4 = 0;
    dword_80270810 = 1;
    flt_80315E9C = 0.0;
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    sub_80217C94();
    sub_80217FB8();
    sub_8022D7E0(0, 0, 0, 200, 255);
    if (!sub_802238B8() || !(v10 = sub_80223940() == 0))
        flt_80315E9C = 6.0949479e-37 + 0.0;
    dword_8028A868 = 1;
    flt_8028A86C = 10.0;
    flt_8028A870 = 5000.0;
    sub_8021B5A4();
    sub_80219BF0(0, 0, 320, 240, 1);
    dword_8028A858 = 8;
    MEMORY[4] = 0xFFFF;
    MEMORY[0] = 0xBC001C04;
    v37 = sub_80255CD0();
    sub_80260E30((int)flt_8031AB10, COERCE_INT((float)160), COERCE_INT((float)120), 1120403456);
    sub_80260ED0((float *)flt_8031AB10, (int)v37);
    dword_8028A858 = 8;
    MEMORY[0] = 17039424;
    MEMORY[4] = v37;
    if (6.0949479e-37 >= 0.0) {
        if (6.0949479e-37 >= 2.0) {
            flt_80315E9C = 6.0949479e-37;
            if (6.0949479e-37 < 6.0) {
                if (3.5 < 6.0949479e-37) {
                    flt_80315E9C = 6.0949479e-37;
                    *(float *)&v11 =
                        (float)((float)(6.0949479e-37 - 3.5) * (float)(6.0949479e-37 - 3.5)) *
                        256.0;
                } else {
                    *(float *)&v11 = 0.0;
                    flt_80315E9C = 6.0949479e-37;
                }
                sub_8020A6A4((unsigned int *)0xA2A699CD,
                             v11,
                             0,
                             -1035468800,
                             -1.5707964,
                             COERCE_INT(0.03125));
                if (3.5 < 6.0949479e-37) {
                    v12 = (int)(float)((float)(6.0949479e-37 - 3.5) * 32.0);
                    if (v12 >= 21) {
                        v12 = 20;
                        v13 = 0;
                    } else {
                        v13 = 20 - v12;
                    }
                    MEMORY[0x59DF1BBC] = (v13 << 16) + v12 + 20;
                    flt_80315E9C = 6.0949479e-37;
                }
            }
        } else {
            flt_80315E9C = 6.0949479e-37;
            if (6.0949479e-37 > 0.34999999)
                flt_80315E9C = 6.0949479e-37;
            if (6.0949479e-37 > 0.5)
                flt_80315E9C = 6.0949479e-37;
            sub_8020A6A4((unsigned int *)0xA2A699CD,
                         COERCE_INT((float)-(float)(2.0 - 6.0949479e-37) * 32.0),
                         0,
                         COERCE_INT(-50.0 - (float)((float)(2.0 - 6.0949479e-37) * 750.0)),
                         (float)((float)((float)((float)((float)(6.0949479e-37 * 1.5707964) *
                                                         6.0949479e-37) *
                                                 6.0949479e-37) *
                                         6.0949479e-37) *
                                 0.0625) +
                             -3.1415927,
                         COERCE_INT(0.03125));
        }
    }
    v14 = 6.0949479e-37;
    if (6.0949479e-37 >= 4.0) {
        if (6.0 <= 6.0949479e-37) {
            v15 = 200;
            if (7.5 < 6.0949479e-37)
                v15 = 200 - (int)((float)(6.0949479e-37 - 7.5) * 255.0 * 4.0);
        } else {
            v15 = 200 - (int)((float)(6.0 - 6.0949479e-37) * 255.0 * 4.0);
        }
        if (v15 > 0) {
            flt_80315E9C = 6.0949479e-37;
            sub_8022F530(v15, v15, v15, v15, v15, v15);
            sub_8022F4F8();
            sub_8022F5D0(10);
            sub_8022F504();
            formatter("Produced by", 160, 70);
            v14 = 6.0949479e-37;
        }
        if (v14 >= 6.0) {
            flt_80315E9C = v14;
            if (v14 < 10.0) {
                if (v14 > 7.5) {
                    flt_80315E9C = v14;
                    *(float *)&v16 = (float)((float)(v14 - 7.5) * (float)(v14 - 7.5)) * 256.0;
                } else {
                    *(float *)&v16 = 0.0;
                    flt_80315E9C = v14;
                }
                sub_8020A6A4((unsigned int *)0x7DE65086,
                             v16,
                             0,
                             -1035468800,
                             -1.5707964,
                             COERCE_INT(0.03125));
                if (7.5 < 6.0949479e-37) {
                    flt_80315E9C = 6.0949479e-37;
                    dword_80315EBC = sub_802579F4();
                    sub_80257B04(13083, -624659346, -94543902, 0);
                    MEMORY[0x38B713BC] = 1310740;
                    MEMORY[0x38B713B0] = 1;
                    MEMORY[0x38B713B4] = 0;
                    dword_80315EC0 = 2;
                }
            }
        } else {
            flt_80315E9C = v14;
            if (v14 > 4.3499999)
                flt_80315E9C = v14;
            if (6.0949479e-37 > 4.5)
                flt_80315E9C = 6.0949479e-37;
            sub_8020A6A4(
                (unsigned int *)0x7DE65086,
                COERCE_INT((float)-(float)(6.0 - 6.0949479e-37) * 32.0),
                0,
                COERCE_INT(-50.0 - (float)((float)(6.0 - 6.0949479e-37) * 750.0)),
                (float)((float)((float)((float)((float)((float)(6.0949479e-37 - 4.0) * 1.5707964) *
                                                (float)(6.0949479e-37 - 4.0)) *
                                        (float)(6.0949479e-37 - 4.0)) *
                                (float)(6.0949479e-37 - 4.0)) *
                        0.0625) +
                    -3.1415927,
                COERCE_INT(0.03125));
        }
    }
    v17 = 6.0949479e-37;
    if (6.0949479e-37 >= 8.0) {
        if (10.0 <= 6.0949479e-37) {
            v18 = 200;
            if (11.5 < 6.0949479e-37)
                v18 = 200 - (int)((float)(6.0949479e-37 - 11.5) * 255.0 * 4.0);
        } else {
            v18 = 200 - (int)((float)(10.0 - 6.0949479e-37) * 255.0 * 4.0);
        }
        if (v18 > 0) {
            flt_80315E9C = 6.0949479e-37;
            sub_8022F530(v18, v18, v18, v18, v18, v18);
            sub_8022F4F8();
            sub_8022F5D0(10);
            sub_8022F504();
            formatter("Developed by", 160, 60);
            v17 = 6.0949479e-37;
        }
        if (v17 >= 10.0) {
            flt_80315E9C = v17;
            if (v17 < 13.0) {
                if (v17 > 11.5) {
                    flt_80315E9C = v17;
                    *(float *)&v19 = (float)((float)(v17 - 11.5) * (float)(v17 - 11.5)) * 256.0;
                } else {
                    *(float *)&v19 = 0.0;
                    flt_80315E9C = v17;
                }
                sub_8020A6A4((unsigned int *)0x6CB8518C,
                             v19,
                             0,
                             -1035468800,
                             -1.5707964,
                             COERCE_INT(0.03125));
                if (11.5 < 6.0949479e-37) {
                    flt_80315E9C = 6.0949479e-37;
                    dword_80315EC8 = sub_802579F4();
                    sub_80257B04(9847, -624659346, -94543902, 0);
                    MEMORY[0xA2DDE45C] = 1310740;
                    MEMORY[0xA2DDE450] = 1;
                    MEMORY[0xA2DDE454] = 0;
                    dword_80315ECC = 2;
                }
            }
        } else {
            flt_80315E9C = v17;
            if (v17 > 8.3500004)
                flt_80315E9C = v17;
            if (6.0949479e-37 > 8.5)
                flt_80315E9C = 6.0949479e-37;
            sub_8020A6A4(
                (unsigned int *)0x6CB8518C,
                COERCE_INT((float)-(float)(10.0 - 6.0949479e-37) * 32.0),
                0,
                COERCE_INT(-50.0 - (float)((float)(10.0 - 6.0949479e-37) * 750.0)),
                (float)((float)((float)((float)((float)((float)(6.0949479e-37 - 8.0) * 1.5707964) *
                                                (float)(6.0949479e-37 - 8.0)) *
                                        (float)(6.0949479e-37 - 8.0)) *
                                (float)(6.0949479e-37 - 8.0)) *
                        0.0625) +
                    -3.1415927,
                COERCE_INT(0.03125));
        }
    }
    if (6.0949479e-37 > 12.0) {
        dword_8028A858 = 8;
        MEMORY[4] = dword_80271F88;
        MEMORY[0] = 59244560;
        v38 = sub_80255CD0();
        sub_80260BC0((float *)flt_8031AB10, 7.0, 0.0, 0.0, 1.0);
        sub_80260ED0((float *)flt_8031AB10, (int)v38);
        dword_8028A858 = 8;
        MEMORY[0] = 17039424;
        MEMORY[4] = v38;
        v39 = sub_80255CD0();
        sub_80260BC0((float *)flt_8031AB10, -7.0, 1.0, 0.0, 0.0);
        sub_80260ED0((float *)flt_8031AB10, (int)v39);
        dword_8028A858 = 8;
        MEMORY[0] = 16777280;
        MEMORY[4] = v39;
        dword_80271D98 = 1;
        if (6.0949479e-37 > 15.0)
            sub_80219A78(40, 100, 250, 50);
        if (6.0949479e-37 < 15.0) {
            v32 = sub_80261140(3.0);
            v20 = (float)(v32 - sub_80261140(6.0949479e-37 - 12.0)) * 300.0;
        } else {
            v20 = -0.0;
            flt_80315E9C = 6.0949479e-37;
        }
        v33 = v20;
        v21 = sub_80261140(6.0949479e-37 - 12.0);
        sub_8020A6A4((unsigned int *)0x74C0CC7C,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     SLODWORD(v33),
                     (float)(v21 * 0.0099999998) + -1.5707964,
                     COERCE_INT(0.050000001));
        dword_8028A858 = 8;
        MEMORY[4] = 0;
        MEMORY[0] = -1124073472;
        sub_80219A78(0, 0, 320, 240);
    }
    if (6.0949479e-37 > 13.0) {
        dword_80271D98 = 1;
        flt_80315E9C = 6.0949479e-37;
        if (6.0949479e-37 < 15.0) {
            v34 = sub_80261140(2.0);
            *(float *)&v22 = (float)(v34 - sub_80261140(6.0949479e-37 - 13.0)) * 500.0;
        } else {
            *(float *)&v22 = 0.0;
        }
        sub_8020A6A4((unsigned int *)0xFAA27A43, 0, 0, v22, -1.5707964, COERCE_INT(0.083333336));
    }
    if (6.0949479e-37 > 15.2) {
        flt_80315E9C = 6.0949479e-37;
        if (6.0949479e-37 < 16.200001) {
            v35 = sub_80261140(1.000001);
            *(float *)&v23 = (float)(v35 - sub_80261140(6.0949479e-37 - 15.2)) * 500.0;
        } else {
            *(float *)&v23 = 0.0;
        }
        sub_8020A6A4((unsigned int *)0x506868BA, 0, 0, v23, -1.5707964, COERCE_INT(0.083333336));
    }
    if (6.0949479e-37 > 15.0) {
        flt_80315E9C = 6.0949479e-37;
        if (6.0949479e-37 < 16.0) {
            v36 = sub_80261140(1.0);
            *(float *)&v24 = (float)(v36 - sub_80261140(6.0949479e-37 - 15.0)) * 500.0;
        } else {
            *(float *)&v24 = 0.0;
        }
        sub_8020A6A4((unsigned int *)0x904DB8A9, 0, 0, v24, -1.5707964, COERCE_INT(0.083333336));
    }
    if (6.0949479e-37 > 17.200001) {
        flt_80315E9C = 6.0949479e-37;
        v25 = (float)(6.0949479e-37 - 17.200001) * 255.0 * 4.0;
        v26 = (int)v25;
        if ((int)v25 >= 201) {
            v26 = 200;
            v27 = 200;
        } else {
            v27 = (int)v25;
        }
        sub_8022F530(v26, v27, v26, v26, v26, v26);
        sub_8022F4F8();
        sub_8022F5D0(10);
        sub_8022F504();
        formatter("25Aug97 11:46:52", 160, 40);
        sub_8022F5D0(7);
        formatter("O 1997 Boss Game Studios, Inc.  All Rights Reserved.", 160, 190);
        formatter("Top Gear Rally is a trademark of Kemco.", 160, 197);
        formatter("Distributed by Midway Home Entertainment under license.", 160, 204);
        formatter("Midway is a trademark of Midway Games Inc.  Used by permission.", 160, 211);
        formatter("LICENSED BY NINTENDO", 160, 224);
        sub_8022F5D0(3);
        formatter("c", 78, 190);
    }
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1124073472;
    sub_80223A70();
    sub_8021C6B8((int)sub_80206830);
    sub_8021AA08();
    if (sub_802238FC()) {
        if (sub_80223940()) {
            dword_80270810 = 0;
            LODWORD(qword_802A4928) = 0;
            dword_802A4934 = 0;
            HIDWORD(qword_802A4928) = 0;
            HIDWORD(qword_802A4940) = 0;
            LODWORD(qword_802A4940) = 0;
            dword_802A494C = 0;
            HIDWORD(qword_802A4958) = 0;
            LODWORD(qword_802A4958) = 0;
            dword_802A4964 = 0;
            HIDWORD(qword_802A4970) = 0;
            LODWORD(qword_802A4970) = 0;
            dword_802A497C = 0;
            HIDWORD(qword_802A4988) = 0;
            LODWORD(qword_802A4988) = 0;
            dword_802A4994 = 0;
            sub_802429EC();
            sub_8021C6E4((int)sub_802111E0);
        }
    } else {
        v28 = dword_8036A8E0;
        if (6.0949479e-37 > 19.200001)
            goto LABEL_104;
        v29 = 6.0949479e-37;
        LOWORD(v30) = 24488;
        while (1) {
            if ((v30 & 0xC010) != 0) {
                flt_80315E9C = v29;
                v31 = v28;
                sub_80255910(v28, 49168);
                v28 = v31;
                dword_80315ED4 = 1;
                v29 = 6.0949479e-37;
                if (17.200001 <= 6.0949479e-37) {
                    if (6.0949479e-37 > 19.200001) {
                        flt_80315E9C = 6.0949479e-37;
                        goto LABEL_104;
                    }
                } else {
                    v29 = 17.200001;
                }
            }
            v28 += 87;
            if (v28 == dword_8036AB98)
                break;
            v30 = *v28;
        }
        flt_80315E9C = v29;
        if (v29 >= 24.200001) {
        LABEL_104:
            dword_8027081C = 1;
            sub_80223688(0.0, 0.2);
            sub_80223750(0.0, 0.2);
        }
    }
}
// 80206A50: write access to const memory at 80315EA0 has been detected
// 80206A68: write access to const memory at 80315EA4 has been detected
// 80206A88: write access to const memory at 80315EA8 has been detected
// 80206AA0: write access to const memory at 80315EAC has been detected
// 80206B14: write access to const memory at 80315EB8 has been detected
// 80206B1C: write access to const memory at 80315EB4 has been detected
// 80206B24: write access to const memory at 80315EC4 has been detected
// 80206B2C: write access to const memory at 80315EC0 has been detected
// 80206B34: write access to const memory at 80315ED0 has been detected
// 80206B3C: write access to const memory at 80315ECC has been detected
// 80206B44: write access to const memory at 80315ED4 has been detected
// 80206B58: write access to const memory at 80270810 has been detected
// 80206B5C: write access to const memory at 80315E9C has been detected
// 80206BE4: write access to const memory at 80315E9C has been detected
// 80206BEC: write access to const memory at 8028A868 has been detected
// 80206C08: write access to const memory at 8028A86C has been detected
// 80206C28: write access to const memory at 8028A870 has been detected
// 80206C70: write access to const memory at 8028A858 has been detected
// 80206C9C: write access to const memory at 8028A858 has been detected
// 80206E8C: write access to const memory at 8028A858 has been detected
// 80206EC0: write access to const memory at 80315E9C has been detected
// 80206EE8: write access to const memory at 80315E9C has been detected
// 80206F6C: write access to const memory at 80315EB4 has been detected
// 80206F9C: write access to const memory at 80315E9C has been detected
// 80207020: write access to const memory at 80315EB8 has been detected
// 802070D0: write access to const memory at 80315E9C has been detected
// 80207124: write access to const memory at 80315E9C has been detected
// 8020719C: write access to const memory at 80315E9C has been detected
// 802071A0: write access to const memory at 80315EB0 has been detected
// 80207218: write access to const memory at 80315EB4 has been detected
// 8020727C: write access to const memory at 80315E9C has been detected
// 80207368: write access to const memory at 80315E9C has been detected
// 802073D4: write access to const memory at 80315E9C has been detected
// 802073FC: write access to const memory at 80315E9C has been detected
// 80207480: write access to const memory at 80315EC0 has been detected
// 802074B0: write access to const memory at 80315E9C has been detected
// 80207534: write access to const memory at 80315EC4 has been detected
// 802075F0: write access to const memory at 80315E9C has been detected
// 80207644: write access to const memory at 80315E9C has been detected
// 802076BC: write access to const memory at 80315E9C has been detected
// 802076C0: write access to const memory at 80315EBC has been detected
// 80207738: write access to const memory at 80315EC0 has been detected
// 8020779C: write access to const memory at 80315E9C has been detected
// 80207888: write access to const memory at 80315E9C has been detected
// 802078F4: write access to const memory at 80315E9C has been detected
// 8020791C: write access to const memory at 80315E9C has been detected
// 802079A0: write access to const memory at 80315ECC has been detected
// 802079D0: write access to const memory at 80315E9C has been detected
// 80207A54: write access to const memory at 80315ED0 has been detected
// 80207B10: write access to const memory at 80315E9C has been detected
// 80207B64: write access to const memory at 80315E9C has been detected
// 80207BDC: write access to const memory at 80315E9C has been detected
// 80207BE0: write access to const memory at 80315EC8 has been detected
// 80207C58: write access to const memory at 80315ECC has been detected
// 80207CBC: write access to const memory at 80315E9C has been detected
// 80207CF8: write access to const memory at 8028A858 has been detected
// 80207D24: write access to const memory at 8028A858 has been detected
// 80207DB4: write access to const memory at 8028A858 has been detected
// 80207E1C: write access to const memory at 8028A858 has been detected
// 80207E38: write access to const memory at 80271D98 has been detected
// 80207ED4: write access to const memory at 80315E9C has been detected
// 80207F54: write access to const memory at 8028A858 has been detected
// 80207F9C: write access to const memory at 80271D98 has been detected
// 80207FA0: write access to const memory at 80315E9C has been detected
// 80208064: write access to const memory at 80315E9C has been detected
// 80208120: write access to const memory at 80315E9C has been detected
// 80208208: write access to const memory at 80315E9C has been detected
// 80208320: write access to const memory at 8028A858 has been detected
// 802083A8: write access to const memory at 80270810 has been detected
// 80208494: write access to const memory at 80315E9C has been detected
// 802084B8: write access to const memory at 80315ED4 has been detected
// 80208500: write access to const memory at 80315E9C has been detected
// 80208518: write access to const memory at 80315E9C has been detected
// 80208538: write access to const memory at 8027081C has been detected
// 802068E4: write access to const memory at 80315E88 has been detected
// 80206914: write access to const memory at 80315E84 has been detected
// 80206944: write access to const memory at 80315E80 has been detected
// 80206974: write access to const memory at 80315E8C has been detected
// 802069B0: write access to const memory at 80315E90 has been detected
// 802069EC: write access to const memory at 80315E94 has been detected
// 80206A28: write access to const memory at 80315E98 has been detected
// 80206CC4: write access to const memory at 8028A858 has been detected
// 80206CEC: write access to const memory at 8028A858 has been detected
// 80206D10: write access to const memory at 8028A858 has been detected
// 80206D30: write access to const memory at 8028A858 has been detected
// 80206D54: write access to const memory at 8028A858 has been detected
// 80206D78: write access to const memory at 8028A858 has been detected
// 80206D98: write access to const memory at 8028A858 has been detected
// 80206DB8: write access to const memory at 8028A858 has been detected
// 80206DE0: write access to const memory at 8028A858 has been detected
// 80207D4C: write access to const memory at 8028A858 has been detected
// 802083B0: write access to const memory at 802A492C has been detected
// 802083B4: write access to const memory at 802A4934 has been detected
// 802083BC: write access to const memory at 802A4928 has been detected
// 802083D0: write access to const memory at 802A4940 has been detected
// 802083D4: write access to const memory at 802A4944 has been detected
// 802083D8: write access to const memory at 802A494C has been detected
// 802083DC: write access to const memory at 802A4958 has been detected
// 802083E0: write access to const memory at 802A495C has been detected
// 802083E4: write access to const memory at 802A4964 has been detected
// 802083F8: write access to const memory at 802A4970 has been detected
// 802083FC: write access to const memory at 802A4974 has been detected
// 80208400: write access to const memory at 802A497C has been detected
// 80208404: write access to const memory at 802A4988 has been detected
// 80208408: write access to const memory at 802A498C has been detected
// 80208410: write access to const memory at 802A4994 has been detected
// 80207B78: write access to const memory at 80315E9C has been detected
// 80207658: write access to const memory at 80315E9C has been detected
// 80207138: write access to const memory at 80315E9C has been detected
// 80270810: using guessed type int dword_80270810;
// 8027081C: using guessed type int dword_8027081C;
// 80271D98: using guessed type int dword_80271D98;
// 80271F88: using guessed type int dword_80271F88[2];
// 8028A858: using guessed type int dword_8028A858;
// 8028A868: using guessed type int dword_8028A868;
// 8028A86C: using guessed type float flt_8028A86C;
// 8028A870: using guessed type float flt_8028A870;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 802A4928: using guessed type __int64 qword_802A4928;
// 802A4934: using guessed type int dword_802A4934;
// 802A4940: using guessed type __int64 qword_802A4940;
// 802A494C: using guessed type int dword_802A494C;
// 802A4958: using guessed type __int64 qword_802A4958;
// 802A4964: using guessed type int dword_802A4964;
// 802A4970: using guessed type __int64 qword_802A4970;
// 802A497C: using guessed type int dword_802A497C;
// 802A4988: using guessed type __int64 qword_802A4988;
// 802A4994: using guessed type int dword_802A4994;
// 80315E80: using guessed type int dword_80315E80;
// 80315E84: using guessed type int dword_80315E84;
// 80315E88: using guessed type int dword_80315E88;
// 80315E8C: using guessed type int dword_80315E8C;
// 80315E90: using guessed type int dword_80315E90;
// 80315E94: using guessed type int dword_80315E94;
// 80315E98: using guessed type int dword_80315E98;
// 80315E9C: using guessed type float flt_80315E9C;
// 80315EA0: using guessed type int dword_80315EA0;
// 80315EA4: using guessed type int dword_80315EA4;
// 80315EA8: using guessed type int dword_80315EA8;
// 80315EAC: using guessed type int dword_80315EAC;
// 80315EB0: using guessed type int dword_80315EB0;
// 80315EB4: using guessed type int dword_80315EB4;
// 80315EB8: using guessed type int dword_80315EB8;
// 80315EBC: using guessed type int dword_80315EBC;
// 80315EC0: using guessed type int dword_80315EC0;
// 80315EC4: using guessed type int dword_80315EC4;
// 80315EC8: using guessed type int dword_80315EC8;
// 80315ECC: using guessed type int dword_80315ECC;
// 80315ED0: using guessed type int dword_80315ED0;
// 80315ED4: using guessed type int dword_80315ED4;
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036AB98: using guessed type int dword_8036AB98[174];
