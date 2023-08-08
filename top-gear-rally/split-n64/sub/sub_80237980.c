#include "types-n64.h"
//----- (80237980) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
char **sub_80237980() {
    int v0;              // $t4
    int v1;              // $a3
    unsigned __int16 v2; // $t8
    int v3;              // $a0
    char **result;       // $v0
    int v5;              // $v1
    float v6;            // $f12
    float v7;            // $f2
    float v8;            // $f0
    float v9;            // $f0
    float v10;           // $f0
    float v11;           // $f0
    float v12;           // $f0
    unsigned int v13;    // $t0
    int v14;             // $a2
    int v15;             // $t0
    int v16;             // $a3
    double v17;          // $f18
    int v18;             // $a2
    BOOL v19;            // $at
    int v20;             // $t8
    __int16 *v21;        // $v0
    char *v22;           // $v1
    __int16 v23;         // $t8
    int v24;             // $a3
    char *v25;           // $v1
    int v26;             // $t7
    int v27;             // $a3
    char *v28;           // $v1
    __int16 v29;         // $t9
    float v30;           // [sp+44h] [-ACh]
    float v31;           // [sp+48h] [-A8h]
    float v32;           // [sp+48h] [-A8h]
    float v33;           // [sp+80h] [-70h]
    int v34;             // [sp+D8h] [-18h]
    int v35;             // [sp+D8h] [-18h]
    float v36;           // [sp+DCh] [-14h]
    int v37;             // [sp+E4h] [-Ch]
    int v38;             // [sp+E8h] [-8h]
    int v39;             // [sp+ECh] [-4h]

    v0 = 0;
    if (MEMORY[0xE38] >= 0.0)
        v0 = MEMORY[0xE40] + 1;
    v1 = MEMORY[0x205C];
    if (MEMORY[0x205C] == -1) {
        if (v0 == -1)
            goto LABEL_7;
    } else {
        HIWORD(dword_8028C7B4[0]) = HIBYTE((&gCarData)[24 * MEMORY[0x205C] + 10]);
        v2 = *((unsigned __int8 *)&gCarData + 96 * MEMORY[0x205C] + 41);
        LOWORD(dword_8028C7B4[0]) = v2;
        v34 = v0;
        v37 = MEMORY[0x205C];
        sub_8021C748((unsigned int)dword_8035D530,
                     (int)((&gCarData)[24 * MEMORY[0x205C] + 8] + 1024),
                     v2 << 6);
        sub_8021C748(
            (unsigned int)dword_80361530, *(_DWORD *)(96 * MEMORY[0x205C] - 2144817620), 512);
        v0 = v34;
        HIWORD(dword_8028C7DC[0]) = HIBYTE((&gCarData)[24 * MEMORY[0x205C] + 11]);
        LOWORD(dword_8028C7DC[0]) = *((unsigned __int8 *)&gCarData + 96 * MEMORY[0x205C] + 45);
        dword_8028C790[0] = v37;
        v1 = MEMORY[0x205C];
    }
    v35 = v0;
    sub_8021C748(
        (unsigned int)dword_8035F530, (int)&(&gCarData)[24 * v1 + 8][4096 * v0 + 5120], 4096);
    dword_8028C798 = v35;
LABEL_7:
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -419430400;
    sub_8023DF9C((int)dword_8028C7A8, 232, 1160283653, 64, 64, 0, 0, 0, 255, 255, 255, 255, 255, 0);
    sub_8023DF9C((int)dword_8028C7D0,
                 *((char *)&gCarData + 96 * MEMORY[0x205C] + 42) + 232,
                 *((char *)&gCarData + 96 * MEMORY[0x205C] + 43) + 1160283653,
                 64,
                 64,
                 0,
                 0,
                 0,
                 255,
                 255,
                 255,
                 255,
                 255,
                 0);
    v3 = sub_80225EE4() & 0x7F;
    result = &(&gCarData)[24 * MEMORY[0x205C]];
    v5 = *((unsigned __int8 *)result + 46);
    v6 = (float)v3 + MEMORY[0xDF4];
    if (*((_BYTE *)result + 46)) {
        if (v5 == 1 || v5 == 2) {
            v13 = (256 - *((unsigned __int8 *)result + 47)) & 0xFFFFFFFC;
            v33 = v6;
            sub_8021C748(
                (unsigned int)dword_80361930 + 2 * v13, (int)&result[8][2 * v13], 2 * (256 - v13));
            result = &(&gCarData)[24 * MEMORY[0x205C]];
            v14 = *((unsigned __int8 *)result + 47);
            v15 = 256 - v14;
            v16 = 2 * (256 - v14);
            v17 = v33 / 8000.0 * (float)(v14 + 1) - 0.5;
            if ((int)v17 < 0)
                v18 = 256 - v14;
            else
                v18 = (int)v17 + v15;
            if (v18 >= 257) {
                v18 = 256;
                v19 = v15 < 256;
            } else {
                v19 = v15 < v18;
            }
            if (v19) {
                v21 = (__int16 *)((char *)dword_80361930 + v16);
                v22 = (char *)dword_80361530 + v16;
                do {
                    v23 = *v21++;
                    v22 += 2;
                    *((_WORD *)v22 - 1) = v23;
                } while (v21 < (__int16 *)dword_80361930 + v18);
                result = &(&gCarData)[24 * MEMORY[0x205C]];
                v20 = *((unsigned __int8 *)result + 46);
            } else {
                v20 = *((unsigned __int8 *)result + 46);
            }
            if (v20 == 1) {
                v24 = 2 * v18;
                if (v18 < 256) {
                    result = (char **)((char *)dword_80361930 + v24);
                    v25 = (char *)dword_80361530 + v24;
                    do {
                        v26 = *(unsigned __int16 *)result;
                        result = (char **)((char *)result + 2);
                        v25 += 2;
                        *((_WORD *)v25 - 1) = (v26 >> 3) & 0x18C6 | 1;
                    } while (result < (char **)dword_80361B30);
                }
            } else {
                v27 = 2 * v18;
                if (v18 < 256) {
                    result = (char **)((char *)dword_80361930 + v27);
                    v28 = (char *)dword_80361530 + v27;
                    do {
                        v29 = *(_WORD *)result;
                        result = (char **)((char *)result + 2);
                        v28 += 2;
                        *((_WORD *)v28 - 1) = v29 & 0xFFFE;
                    } while (result < (char **)dword_80361B30);
                }
            }
        }
    } else {
        v39 = *((unsigned __int8 *)result + 47) + 232;
        v7 = *((float *)result + 14);
        v38 = 240 - (*((unsigned __int8 *)result + 48) + 1160283653);
        v8 = v7;
        if (v6 > 0.0)
            v8 = v7 - (float)((float)(v6 * (float)(v7 - *((float *)result + 13))) / 8000.0);
        v36 = v8;
        v31 = v8 - 0.050000001;
        HIWORD(dword_80361B30[0]) = (int)(float)((float)(sub_802617D0(v31) * 20.0) + (float)v39);
        v30 = (float)v39;
        v9 = sub_80261610(v31);
        HIWORD(dword_80361B30[1]) = 0;
        LOWORD(dword_80361B30[0]) = (int)(float)((float)(v9 * 20.0) + (float)v38);
        v32 = (float)v38;
        HIWORD(dword_80361B30[4]) =
            (int)(float)((float)(sub_802617D0(v36 + 0.050000001) * 20.0) + v30);
        v10 = sub_80261610(v36 + 0.050000001);
        HIWORD(dword_80361B30[5]) = 0;
        LOWORD(dword_80361B30[4]) = (int)(float)((float)(v10 * 20.0) + v32);
        HIWORD(dword_80361B30[8]) =
            (int)(float)((float)(sub_802617D0(v36 + 0.30000001) * 7.0) + v30);
        v11 = sub_80261610(v36 + 0.30000001);
        HIWORD(dword_80361B30[9]) = 0;
        LOWORD(dword_80361B30[8]) = (int)(float)((float)(v11 * 7.0) + v32);
        HIWORD(dword_80361B30[12]) =
            (int)(float)((float)(sub_802617D0(v36 - 0.30000001) * 7.0) + v30);
        v12 = sub_80261610(v36 - 0.30000001);
        HIWORD(dword_80361B30[13]) = 0;
        HIWORD(dword_80361B30[3]) = 255;
        LOWORD(dword_80361B30[3]) = 255;
        HIBYTE(dword_80361B30[7]) = 0;
        BYTE1(dword_80361B30[7]) = -1;
        LOWORD(dword_80361B30[7]) = 255;
        HIWORD(dword_80361B30[11]) = 255;
        LOWORD(dword_80361B30[11]) = 255;
        HIWORD(dword_80361B30[15]) = 255;
        LOWORD(dword_80361B30[15]) = 255;
        LOWORD(dword_80361B30[12]) = (int)(float)((float)(v12 * 7.0) + v32);
        result = 0;
        dword_8028A858 = 8;
        MEMORY[4] = 0;
        MEMORY[0] = -419430400;
    }
    return result;
}
// 80237B54: write access to const memory at 8028C7DC has been detected
// 80237B7C: write access to const memory at 8028C7DE has been detected
// 80237B80: write access to const memory at 8028C790 has been detected
// 80237C38: write access to const memory at 8028C798 has been detected
// 80237C54: write access to const memory at 8028A858 has been detected
// 80237C70: write access to const memory at 8028A858 has been detected
// 80237CA0: write access to const memory at 8028A858 has been detected
// 80237CBC: write access to const memory at 8028A858 has been detected
// 80237CD8: write access to const memory at 8028A858 has been detected
// 80237CF4: write access to const memory at 8028A858 has been detected
// 80237D10: write access to const memory at 8028A858 has been detected
// 802383C0: write access to const memory at 8028A858 has been detected
// 802383DC: write access to const memory at 8028A858 has been detected
// 802383F8: write access to const memory at 8028A858 has been detected
// 80238418: write access to const memory at 8028A858 has been detected
// 8023843C: write access to const memory at 8028A858 has been detected
// 8023845C: write access to const memory at 8028A858 has been detected
// 80238478: write access to const memory at 8028A858 has been detected
// 80238494: write access to const memory at 8028A858 has been detected
// 802384B0: write access to const memory at 8028A858 has been detected
// 80237A58: write access to const memory at 8028C7B4 has been detected
// 80237A70: write access to const memory at 8028C7B6 has been detected
// 802381F0: write access to const memory at 80361B30 has been detected
// 80238210: write access to const memory at 80361B34 has been detected
// 8023822C: write access to const memory at 80361B32 has been detected
// 8023826C: write access to const memory at 80361B40 has been detected
// 80238284: write access to const memory at 80361B44 has been detected
// 80238298: write access to const memory at 80361B42 has been detected
// 802382D4: write access to const memory at 80361B50 has been detected
// 802382EC: write access to const memory at 80361B54 has been detected
// 80238300: write access to const memory at 80361B52 has been detected
// 8023833C: write access to const memory at 80361B60 has been detected
// 8023835C: write access to const memory at 80361B64 has been detected
// 80238364: write access to const memory at 80361B3C has been detected
// 80238370: write access to const memory at 80361B3E has been detected
// 80238374: write access to const memory at 80361B4C has been detected
// 8023837C: write access to const memory at 80361B4D has been detected
// 80238384: write access to const memory at 80361B4E has been detected
// 80238390: write access to const memory at 80361B5C has been detected
// 80238398: write access to const memory at 80361B5E has been detected
// 802383A0: write access to const memory at 80361B6C has been detected
// 802383A8: write access to const memory at 80361B6E has been detected
// 802383AC: write access to const memory at 80361B62 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A85C: using guessed type int dword_8028A85C;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AE0C: using guessed type char *off_8028AE0C;
// 8028C790: using guessed type int[2];
// 8028C798: using guessed type int dword_8028C798;
// 8028C7A8: using guessed type int dword_8028C7A8[2];
// 8028C7B4: using guessed type int[4];
// 8028C7D0: using guessed type int dword_8028C7D0[2];
// 8028C7DC: using guessed type int[4];
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 8035D530: using guessed type int dword_8035D530[512];
// 8035F530: using guessed type int dword_8035F530[512];
// 80361530: using guessed type int dword_80361530[256];
// 80361930: using guessed type int dword_80361930[128];
// 80361B30: using guessed type int dword_80361B30[64];
