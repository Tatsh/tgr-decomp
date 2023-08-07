#include "../../types-n64.h"
//----- (8020D004) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8020D004() {
    int v0;        // $s5
    int *v1;       // $s6
    float *v2;     // $s4
    int *v3;       // $s0
    int *v4;       // $s1
    int *v5;       // $s1
    int v6;        // $s5
    int *v7;       // $s1
    int v8;        // $a0
    BOOL v9;       // $v0
    int v10;       // $s0
    int v11;       // $t5
    BOOL v12;      // $at
    int v13;       // $s5
    int v14;       // $a0
    int v15;       // $v1
    float *v16;    // $v0
    float i;       // $f0
    float j;       // $f16
    float *v19;    // $s4
    float k;       // $f0
    int v21;       // $s5
    int *v22;      // $s6
    int v23;       // $s3
    int v24;       // $v0
    int *v25;      // $s0
    char v26[280]; // [sp+E8h] [-118h] BYREF

    dword_80316250 = 0;
    sub_80223688(1.0, 0.2);
    sub_80223750(1.0, 0.2);
    sub_802237D0(1.0, 0.2);
    dword_803162FC = MEMORY[0xC74C1D3C];
    dword_80316300 = MEMORY[0xC74C1D3D];
    dword_8031630C = 1;
    dword_80316310 = 0;
    dword_8028C328 = 0;
    flt_80316268 = 0.0;
    flt_8031626C = 1.0;
    dword_80316304 = MEMORY[0xC74C1D38];
    v0 = 0;
    dword_80316308 = 2;
    v1 = &dword_803162B0;
    v2 = &flt_80316260;
    v3 = dword_80316258;
    v4 = dword_8031B760;
    do {
        sub_802260A0((int)v4);
        v4[950] = (int)sub_80226D7C;
        *v3 = v0;
        *v1 = 0;
        v4[2048] = 0;
        v4[2065] = 0;
        *v2 = 0.0;
        ++v0;
        dword_803162B8 = 0;
        v4 += 2084;
        ++v3;
        ++v2;
        ++v1;
    } while (v0 < 1);
    if (v0 < 4) {
        v5 = &dword_8031B760[2084 * v0];
        do {
            sub_802260A0((int)v5);
            v5 += 2084;
            *(v5 - 1134) = (int)sub_802288B4;
        } while (v5 < dword_803239A0);
    }
    dword_8028B7F4 = 2;
    v6 = 0;
    v7 = dword_8031B760;
    do {
        sub_80225F88((int)v7);
        v8 = v7[2071];
        v7[2070] = v8;
        v10 = v8;
        v9 = sub_8020C66C(v8);
        v11 = v10 + 1;
        if (!v9) {
            while (1) {
                v10 = v11 % 13;
                if (sub_8020C66C(v11 % 13))
                    break;
                v11 = v10 + 1;
            }
        }
        v7[2071] = v10;
        v7[2070] = v10;
        sub_80220438((int)v7, v6++, v10);
        v7 += 2084;
        v12 = v6 < 1;
    } while (v6 < 1);
    v13 = 0;
    *(float *)&dword_8031B760[2] = 0.0;
    *(float *)&dword_8031B760[1] = 0.0;
    *(float *)&dword_8031B760[6] = 0.0;
    *(float *)&dword_8031B760[4] = 0.0;
    *(float *)&dword_8031B760[9] = 0.0;
    *(float *)&dword_8031B760[8] = 0.0;
    *(float *)&dword_8031B760[13] = 0.0;
    *(float *)&dword_8031B760[12] = 0.0;
    *(float *)&dword_8031D7D8[8] = 0.0;
    *(float *)&dword_8031D7D8[7] = 0.0;
    *(float *)&dword_8031D7D8[12] = 0.0;
    *(float *)&dword_8031D7D8[10] = 0.0;
    *(float *)&dword_8031D7D8[15] = 0.0;
    *(float *)&dword_8031D7D8[14] = 0.0;
    *(float *)&dword_8031D7D8[19] = 0.0;
    *(float *)&dword_8031D7D8[18] = 0.0;
    dword_8031B760[14] = 0.25400001;
    dword_8031D7D8[20] = 0.25400001;
    dword_8031B760[0] = 1.0;
    dword_8031B760[5] = v12;
    dword_8031B760[10] = v12;
    dword_8031D7D8[6] = v12;
    dword_8031D7D8[11] = v12;
    dword_8031D7D8[16] = v12;
    dword_8031D64C[0] = 10.0;
    dword_8031D64C[1] = 10.0;
    dword_8031D64C[2] = 5.0;
    sub_802244FC((float *)dword_8031D61C, (float *)dword_8031D64C, -1.0);
    sub_80224760((float *)dword_8031D61C);
    flt_8031D63C = 0.0;
    flt_8031D640 = 0.0;
    flt_8031D644 = 1.0;
    sub_8022439C((float *)dword_8031D62C, &flt_8031D63C, (float *)dword_8031D61C);
    sub_8022439C(&flt_8031D63C, (float *)dword_8031D61C, (float *)dword_8031D62C);
    sub_80260B20((char *)dword_8031F6AC, (const char *)dword_8031D61C, 68);
    sub_80242940();
    sub_8020C27C((int)&off_802720B4, &dword_802720C4);
    sub_8020C27C((int)&off_802720F0, &dword_802720FC);
    sub_8020C27C((int)&off_8027213C, &dword_8027214C);
    sub_8020C27C((int)&off_8027218C, &dword_8027219C);
    sub_8020C27C((int)off_802721DC, &dword_802721EC);
    sub_8023DF4C(dword_80272048, sub_8024296C);
    sub_8023DF4C(dword_80271D70, sub_8024296C);
    sub_8023DF4C(dword_80271D84, sub_8024296C);
    sub_8023DF4C(dword_8027205C, sub_8024296C);
    dword_803162A0 = CHK_GetFileSize(1832064);
    dword_8031629C = sub_8024296C(-426583690);
    LoadCarWithIndex2((char *)0xA641911A, 1832064, 0);
    dword_803162A8 = CHK_GetFileSize(1834688);
    dword_803162A4 = sub_8024296C(-604933110);
    LoadCarWithIndex2((char *)0xC0E0765D, 1834688, 0);
    v14 = -1663964825;
    v15 = -1932236400;
    do {
        *(_BYTE *)v15 = 0;
        *(_BYTE *)v14 = 0;
        *(_BYTE *)(v15 + 1) = 0;
        *(_BYTE *)(v14 + 1) = 0;
        *(_BYTE *)(v15 + 2) = 0;
        *(_BYTE *)(v14 + 2) = 0;
        *(_BYTE *)(v15 + 3) = 0;
        v13 += 4;
        *(_BYTE *)(v14 + 3) = 0;
        v15 += 4;
        v14 += 4;
    } while (v13 != 256);
    sub_80248F38();
    dword_803162AC = 2;
    dword_80272238 = 1;
    dword_80316274 = (int)&off_802720B4;
    dword_80316270 = -299424896;
    dword_8031627C = 0;
    dword_80316278 = 0;
    dword_80316314 = 0;
    sub_8021C4B4();
    sub_80223F54();
    sub_80219A3C();
    dword_8028AA78 = 0;
    dword_8028AA80 = 0;
    dword_8028AA8C = 0;
    dword_8028AA84 = 0;
    sub_802182A8();
    sub_80218D5C();
    sub_8022D7E0(0, 0, 0, 200, 255);
    dword_8031B2D8 = 0;
    dword_8031B2EC = 1;
    dword_803162AC = 2;
    sub_80217C94();
    sub_8023DF9C((int)dword_80272048, 0, 0, 320, 240, 0, 0, 0, 255, 80, 0, 0, 255, 4);
    flt_80316268 = -8.0823454e-18 + 0.0;
    flt_8031626C = (float)(6.2831855 - 0.0) + -28537700.0;
    v16 = &flt_80316268;
    for (i = -8.0823454e-18;; i = *v16) {
        if (i > 6.2831855) {
            for (j = i - 6.2831855;; j = *v16 - 6.2831855) {
                *v16 = j;
                if (*v16 <= 6.2831855)
                    break;
            }
            ++v16;
        } else {
            ++v16;
        }
        if (v16 >= &flt_8031626C)
            break;
    }
    v19 = &flt_80316260;
    for (k = -6.3911034e32;; k = *v19) {
        if (k >= 0.0) {
            if (k <= 0.0) {
                ++v19;
                goto LABEL_33;
            }
            *v19 = k - (float)(0.0 + 0.0);
            if (*v19 >= 0.0) {
                ++v19;
                goto LABEL_33;
            }
            *v19 = 0.0;
        } else {
            *v19 = k + (float)(0.0 + 0.0);
            if (*v19 <= 0.0) {
                ++v19;
                goto LABEL_33;
            }
            *v19 = 0.0;
        }
        ++v19;
    LABEL_33:
        if (v19 >= &flt_80316264)
            break;
    }
    v21 = 0;
    v22 = &dword_803162B0;
    v23 = 0;
    do {
        if (*v22 == 6) {
            dword_80316258[v23] = (2 * *(_DWORD *)(8336 * v21 - 2144221768)) ^ v21 ^ 2;
        } else if (*v22 == 5) {
            v24 = *(_DWORD *)(v23 * 4 - 2144272384 + 25208);
            if (v24) {
                if (v24 == 2) {
                    dword_80316258[v23] = v21;
                } else if (v24 == 1) {
                    v25 = &dword_80316258[v23];
                    if (*(_DWORD *)(v23 * 4 - 2144272384 + 25216))
                        *v25 = v21 ^ 2;
                    else
                        *v25 = v21;
                }
            } else {
                dword_80316258[v23] = v21 ^ 2;
            }
        }
        ++v21;
        ++v23;
        ++v22;
    } while (v21 < 1);
    dword_8028AA84 = 0;
    dword_8028AA78 = 0;
    dword_8028AA8C = 0;
    dword_8028AA80 = 0;
    sub_8020C6D0(*(_DWORD *)(MEMORY[0xF5D3262] + 8),
                 *(_DWORD *)(MEMORY[0x256F7156] + 8),
                 0,
                 0.0,
                 45,
                 320,
                 240,
                 -6.3911034e32,
                 0.0,
                 -1031783280,
                 -1031783278,
                 8.0,
                 -8.0823454e-18);
    sub_8021B5A4();
    sub_80219BF0(0, 0, 320, 240, 1);
    sub_8023DF9C((int)dword_8027205C, 22, 9, 280, 42, 0, 0, 0, 255, 255, 255, 255, 255, 2);
    sub_8022F4F8();
    sub_8022F504();
    sub_8022F5D0(30);
    formatter("%ryCar Select", 160, 38);
    if (sub_80223940())
        dword_803162AC = 395100777;
    sub_8022F5D0(20);
    sub_80260DD4(v26, "%%ry%s: %%i%s", (const char *)0x304B6223, (const char *)*MEMORY[0xF5D3262]);
    formatter(v26, 160, 75);
    sub_8022F5D0(8);
    sub_8022F504();
    sub_8020AAE0();
    sub_80223A70();
    dword_803162C0 = 1230261298;
    sub_80244D84(1230261298, 9, 1);
    if ((*MEMORY[0x3BC37FC4] & 0x30) != 0) {
        sub_80255910(MEMORY[0x3BC37FC4], 48);
        byte_803162C4 = 1;
    }
    MEMORY[0xFF6C4BA4] = -1;
    dword_803162C0 = 0;
    sub_8021AA08();
    if (sub_802238FC()) {
        if (sub_80223940()) {
            dword_80272238 = 0;
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
            LODWORD(qword_802A4970) = 0;
            dword_802A4998[0] = (int)&dword_802A4A08;
            dword_802A4998[3] = 0;
            dword_802A4998[2] = 0;
            dword_802A4998[4] = 0;
            dword_802A4998[5] = 0;
            HIDWORD(qword_802A4980) = &dword_802A4A08;
            LODWORD(qword_802A4988) = 0;
            HIDWORD(qword_802A4988) = 0;
            dword_802A4990 = 0;
            dword_802A4994 = 0;
            HIDWORD(qword_802A4968) = &dword_802A4A08;
            dword_802A4978 = 0;
            dword_802A497C = 0;
            dword_802A4964 = 0;
            dword_802A4960 = 0;
            LODWORD(qword_802A4958) = 0;
            HIDWORD(qword_802A4958) = 0;
            HIDWORD(qword_802A4950) = &dword_802A4A08;
            sub_8021A540();
            sub_8021C6E4((int)sub_8020082C);
        }
    } else {
        byte_803162C4 = 0;
        dword_803162B8 = 0;
    }
}
// 8020D048: write access to const memory at 80316250 has been detected
// 8020D0AC: write access to const memory at 803162FC has been detected
// 8020D0BC: write access to const memory at 80316300 has been detected
// 8020D0C4: write access to const memory at 8031630C has been detected
// 8020D0CC: write access to const memory at 80316310 has been detected
// 8020D0D4: write access to const memory at 8028C328 has been detected
// 8020D100: write access to const memory at 80316304 has been detected
// 8020D114: write access to const memory at 80316308 has been detected
// 8020D18C: write access to const memory at 803162B8 has been detected
// 8020D218: write access to const memory at 8028B7F4 has been detected
// 8020D4F8: write access to const memory at 803162A0 has been detected
// 8020D508: write access to const memory at 8031629C has been detected
// 8020D530: write access to const memory at 803162A8 has been detected
// 8020D540: write access to const memory at 803162A4 has been detected
// 8020D5C0: write access to const memory at 803162AC has been detected
// 8020D5D0: write access to const memory at 80272238 has been detected
// 8020D5E4: write access to const memory at 80316274 has been detected
// 8020D5E8: write access to const memory at 80316270 has been detected
// 8020D5F8: write access to const memory at 80316314 has been detected
// 8020D63C: write access to const memory at 8028AA80 has been detected
// 8020D650: write access to const memory at 8028AA84 has been detected
// 8020D698: write access to const memory at 803162AC has been detected
// 8020D9D4: write access to const memory at 8028AA80 has been detected
// 8020DEA8: write access to const memory at 80316314 has been detected
// 8020DEE4: write access to const memory at 80316308 has been detected
// 8020DEF0: write access to const memory at 80316308 has been detected
// 8020E0B4: write access to const memory at 803162AC has been detected
// 8020E114: write access to const memory at 80316314 has been detected
// 8020E5F4: write access to const memory at 80316314 has been detected
// 8020E7CC: write access to const memory at 80316304 has been detected
// 8020E800: write access to const memory at 80316304 has been detected
// 8020E814: write access to const memory at 80316304 has been detected
// 8020E858: write access to const memory at 80316304 has been detected
// 8020FCA0: write access to const memory at 803162C0 has been detected
// 8020FCC0: write access to const memory at 803162C4 has been detected
// 8020FCC4: write access to const memory at 803162C0 has been detected
// 8020FD28: write access to const memory at 803162C4 has been detected
// 8020FD70: write access to const memory at 803162C0 has been detected
// 8020FD80: write access to const memory at 803162C0 has been detected
// 8020FE48: write access to const memory at 803162BC has been detected
// 8020FE78: write access to const memory at 80272238 has been detected
// 8020FE7C: write access to const memory at 802A4934 has been detected
// 8020FE84: write access to const memory at 802A4930 has been detected
// 8020FE94: write access to const memory at 802A4928 has been detected
// 8020FEA0: write access to const memory at 802A492C has been detected
// 8020FEAC: write access to const memory at 802A4920 has been detected
// 8020FEB4: write access to const memory at 802A494C has been detected
// 8020FEBC: write access to const memory at 802A4948 has been detected
// 8020FED4: write access to const memory at 802A4940 has been detected
// 8020FEF0: write access to const memory at 802A4944 has been detected
// 8020FEF8: write access to const memory at 802A4938 has been detected
// 8020FF94: write access to const memory at 8026FF08 has been detected
// 8020FFAC: write access to const memory at 80270850 has been detected
// 8020FFD4: write access to const memory at 802724F4 has been detected
// 8020FFFC: write access to const memory at 8026FF18 has been detected
// 80210030: write access to const memory at 802724F4 has been detected
// 80210118: write access to const memory at 80270850 has been detected
// 8021015C: write access to const memory at 803162C4 has been detected
// 80210168: write access to const memory at 803162B8 has been detected
// 802107E8: write access to const memory at 80316298 has been detected
// 80210CAC: write access to const memory at 803162B8 has been detected
// 80210CB4: write access to const memory at 803162C4 has been detected
// 80210CBC: write access to const memory at 803162C0 has been detected
// 80210CD0: write access to const memory at 803162BC has been detected
// 80210D9C: write access to const memory at 80316314 has been detected
// 80210DCC: write access to const memory at 80316310 has been detected
// 80210DE0: write access to const memory at 80316314 has been detected
// 80210E18: write access to const memory at 80316314 has been detected
// 80210E74: write access to const memory at 80316298 has been detected
// 8020D0F4: write access to const memory at 80316268 has been detected
// 8020D0F8: write access to const memory at 8031626C has been detected
// 8020D3F4: write access to const memory at 8031D63C has been detected
// 8020D3F8: write access to const memory at 8031D640 has been detected
// 8020D40C: write access to const memory at 8031D644 has been detected
// 8020D5F0: write access to const memory at 8031627C has been detected
// 8020D5F4: write access to const memory at 80316278 has been detected
// 8020D630: write access to const memory at 8028AA78 has been detected
// 8020D644: write access to const memory at 8028AA8C has been detected
// 8020D684: write access to const memory at 8031B2D8 has been detected
// 8020D688: write access to const memory at 8031B2EC has been detected
// 8020D9C0: write access to const memory at 8028AA84 has been detected
// 8020FF10: write access to const memory at 802A4970 has been detected
// 8020FF14: write access to const memory at 802A4974 has been detected
// 8020FF18: write access to const memory at 802A4998 has been detected
// 8020FF1C: write access to const memory at 802A49A4 has been detected
// 8020FF20: write access to const memory at 802A49A0 has been detected
// 8020FF24: write access to const memory at 802A49A8 has been detected
// 8020FF28: write access to const memory at 802A49AC has been detected
// 8020FF2C: write access to const memory at 802A4980 has been detected
// 8020FF30: write access to const memory at 802A498C has been detected
// 8020FF34: write access to const memory at 802A4988 has been detected
// 8020FF38: write access to const memory at 802A4990 has been detected
// 8020FF3C: write access to const memory at 802A4994 has been detected
// 8020FF40: write access to const memory at 802A4968 has been detected
// 8020FF44: write access to const memory at 802A4978 has been detected
// 8020FF48: write access to const memory at 802A497C has been detected
// 8020FF4C: write access to const memory at 802A4964 has been detected
// 8020FF50: write access to const memory at 802A4960 has been detected
// 8020FF54: write access to const memory at 802A495C has been detected
// 8020FF58: write access to const memory at 802A4958 has been detected
// 8020FF5C: write access to const memory at 802A4950 has been detected
// 80210E08: write access to const memory at 803162B4 has been detected
// 80210E0C: write access to const memory at 803162B0 has been detected
// 8020D9C4: write access to const memory at 8028AA78 has been detected
// 8020D9C8: write access to const memory at 8028AA8C has been detected
// 8020D7B8: write access to const memory at 80316268 has been detected
// 8020D7BC: write access to const memory at 8031626C has been detected
// 8020D384: write access to const memory at 8031D64C has been detected
// 8020D388: write access to const memory at 8031D650 has been detected
// 8020D390: write access to const memory at 8031D654 has been detected
// 8020D3A4: write access to const memory at 8031D64C has been detected
// 8020D3A8: write access to const memory at 8031D650 has been detected
// 8020D3AC: write access to const memory at 8031D654 has been detected
// 8020D304: write access to const memory at 8031B768 has been detected
// 8020D308: write access to const memory at 8031B764 has been detected
// 8020D30C: write access to const memory at 8031B778 has been detected
// 8020D310: write access to const memory at 8031B770 has been detected
// 8020D314: write access to const memory at 8031B784 has been detected
// 8020D318: write access to const memory at 8031B780 has been detected
// 8020D31C: write access to const memory at 8031B794 has been detected
// 8020D320: write access to const memory at 8031B790 has been detected
// 8020D324: write access to const memory at 8031D7F8 has been detected
// 8020D328: write access to const memory at 8031D7F4 has been detected
// 8020D32C: write access to const memory at 8031D808 has been detected
// 8020D330: write access to const memory at 8031D800 has been detected
// 8020D334: write access to const memory at 8031D814 has been detected
// 8020D338: write access to const memory at 8031D810 has been detected
// 8020D33C: write access to const memory at 8031D824 has been detected
// 8020D340: write access to const memory at 8031D820 has been detected
// 8020D344: write access to const memory at 8031B798 has been detected
// 8020D348: write access to const memory at 8031D828 has been detected
// 8020D34C: write access to const memory at 8031B760 has been detected
// 8020D350: write access to const memory at 8031B774 has been detected
// 8020D354: write access to const memory at 8031B788 has been detected
// 8020D358: write access to const memory at 8031D7F0 has been detected
// 8020D35C: write access to const memory at 8031D804 has been detected
// 8020D364: write access to const memory at 8031D818 has been detected
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 802707A8: using guessed type int dword_802707A8;
// 802707C0: using guessed type int dword_802707C0;
// 80270850: using guessed type int dword_80270850;
// 80271D70: using guessed type int dword_80271D70[3];
// 80271D84: using guessed type int dword_80271D84[3];
// 80271FA0: using guessed type int dword_80271FA0;
// 80272048: using guessed type int dword_80272048[3];
// 8027205C: using guessed type int dword_8027205C[3];
// 80272070: using guessed type int dword_80272070;
// 80272074: using guessed type int dword_80272074;
// 802720B4: using guessed type char **off_802720B4;
// 802720C4: using guessed type int dword_802720C4;
// 802720F0: using guessed type char **off_802720F0;
// 802720FC: using guessed type int dword_802720FC;
// 8027213C: using guessed type char **off_8027213C;
// 8027214C: using guessed type int dword_8027214C;
// 8027218C: using guessed type char **off_8027218C;
// 8027219C: using guessed type int dword_8027219C;
// 802721DC: using guessed type char **off_802721DC[2];
// 802721EC: using guessed type int dword_802721EC;
// 80272238: using guessed type int dword_80272238;
// 802724F4: using guessed type char byte_802724F4;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAB0: using guessed type int gWidth;
// 8028AAB4: using guessed type int gHeight;
// 8028AAD4: using guessed type int dword_8028AAD4;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B304: using guessed type int dword_8028B304;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028B940: using guessed type int dword_8028B940;
// 8028C328: using guessed type int dword_8028C328;
// 8028C800: using guessed type int dword_8028C800;
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
// 80316250: using guessed type int dword_80316250;
// 80316258: using guessed type int dword_80316258[];
// 80316260: using guessed type float flt_80316260;
// 80316264: using guessed type float flt_80316264;
// 80316268: using guessed type float flt_80316268;
// 8031626C: using guessed type float flt_8031626C;
// 80316270: using guessed type int dword_80316270;
// 80316274: using guessed type int dword_80316274;
// 80316278: using guessed type int dword_80316278;
// 8031627C: using guessed type int dword_8031627C;
// 80316298: using guessed type int dword_80316298;
// 8031629C: using guessed type int dword_8031629C;
// 803162A0: using guessed type int dword_803162A0;
// 803162A4: using guessed type int dword_803162A4;
// 803162A8: using guessed type int dword_803162A8;
// 803162AC: using guessed type int dword_803162AC;
// 803162B0: using guessed type int dword_803162B0;
// 803162B4: using guessed type int dword_803162B4;
// 803162B8: using guessed type int dword_803162B8;
// 803162BC: using guessed type int dword_803162BC;
// 803162C0: using guessed type int dword_803162C0;
// 803162C4: using guessed type char byte_803162C4;
// 803162FC: using guessed type int dword_803162FC;
// 80316300: using guessed type int dword_80316300;
// 80316304: using guessed type int dword_80316304;
// 80316308: using guessed type int dword_80316308;
// 8031630C: using guessed type int dword_8031630C;
// 80316310: using guessed type int dword_80316310;
// 80316314: using guessed type int dword_80316314;
// 8031B2D8: using guessed type int dword_8031B2D8;
// 8031B2EC: using guessed type int dword_8031B2EC;
// 8031B744: using guessed type float flt_8031B744;
// 8031B760: using guessed type int dword_8031B760[512];
// 8031D61C: using guessed type int dword_8031D61C[4];
// 8031D62C: using guessed type int dword_8031D62C[4];
// 8031D63C: using guessed type float flt_8031D63C;
// 8031D640: using guessed type float flt_8031D640;
// 8031D644: using guessed type float flt_8031D644;
// 8031D64C: using guessed type int dword_8031D64C[69];
// 8031D7D8: using guessed type int dword_8031D7D8[512];
// 8031F6AC: using guessed type int dword_8031F6AC[103];
// 803239A0: using guessed type int dword_803239A0[24];
