#include "../../types-n64.h"
//----- (8022A0E0) --------------------------------------------------------
// sub_10066E90 on PC
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8022A0E0(int a1) {
    int v1;          // $s1
    int v3;          // $s3
    int v4;          // $s0
    int v5;          // $t5
    int v6;          // $t8
    int v7;          // $t3
    int v8;          // $t9
    int v9;          // $s0
    int v10;         // $t6
    float *v11;      // $s1
    int v12;         // $t4
    int v13;         // $t6
    float v14;       // $f2
    float v15;       // $f2
    float v16;       // $f0
    const char *v17; // $s1
    float v18;       // $f16
    int v19;         // $s0
    float v20;       // $f4
    int v21;         // $s0
    float v22;       // $f4
    float v23;       // $f6
    int v24;         // $t3
    int v25;         // $t1
    float v26;       // $f0
    const char *v27; // $s1
    float v28;       // $f6
    int v29;         // $t5
    float v30;       // [sp+60h] [-20h]
    int v31;         // [sp+64h] [-1Ch]
    int v32;         // [sp+68h] [-18h]

    v1 = MEMORY[0x80025D60];
    if (MEMORY[0x80025D60]) {
        v3 = *(_DWORD *)(a1 + 96);
        if (v3) {
            *(_DWORD *)a1 = *(_DWORD *)(v3 + 48);
            *(_DWORD *)(a1 + 4) = *(_DWORD *)(v3 + 52);
            *(_DWORD *)(a1 + 8) = *(_DWORD *)(v3 + 56);
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 3920);
            *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 3924);
            *(_DWORD *)(a1 + 20) = *(_DWORD *)(v3 + 3928);
            *(_DWORD *)(a1 + 72) = *(_DWORD *)(v3 + 3952);
            *(_DWORD *)(a1 + 76) = *(_DWORD *)(v3 + 3956);
            *(_DWORD *)(a1 + 64) = *(_DWORD *)(v3 + 3960);
            *(_DWORD *)(a1 + 68) = *(_DWORD *)(v3 + 3964);
            *(_DWORD *)(a1 + 48) = *(_DWORD *)(v3 + 3968);
            *(_DWORD *)(a1 + 52) = *(_DWORD *)(v3 + 3992);
            *(_DWORD *)(a1 + 80) = *(_DWORD *)(v3 + 4008);
            v1 = MEMORY[0x80025D60];
        }
        v4 = *(_DWORD *)(a1 + 76);
        if (v4 >= 0) {
            v32 = v4 % v1;
            if (!v1)
                __break(7u, 0);
            v6 = v4 % -1;
        } else {
            v5 = v1 - (-1 - v4) % v1 - 1;
            if (!v1)
                __break(7u, 0);
            if (v1 == -1 && v4 == 0x7FFFFFFF)
                __break(6u, 0);
            v32 = v5 % v1;
            if (!v1)
                __break(7u, 0);
            if (v1 == -1 && (-1 - v4) % -1 == 2147483646)
                __break(6u, 0);
            v6 = v5 % v1;
        }
        if (!v1)
            __break(7u, 0);
        if (v1 == -1 && v6 == 0x7FFFFFFF)
            __break(6u, 0);
        v31 = (v6 + 1) % v1;
        v30 = (float)sub_802562E0(*(float *)(a1 + 48) * 100.0) / 100.0;
        if (sub_80225B64((float *)(20 * v32 - 2147329024 + 160),
                         (float *)(20 * v32 - 2147329024 + 152),
                         (float *)(a1 + 12),
                         (float *)a1)) {
            debugPrint("%d went backwards, from gate %d to gate %d\n",
                       *(_DWORD *)(a1 + 100),
                       *(_DWORD *)(a1 + 76),
                       *(_DWORD *)(a1 + 76) - 1);
            if (!v32)
                --*(_DWORD *)(a1 + 68);
            if (!MEMORY[0x80025D60])
                __break(7u, 0);
            if (MEMORY[0x80025D60] == -1 && *(_DWORD *)(a1 + 72) == 0x80000000)
                __break(6u, 0);
            if (!MEMORY[0x80025D60])
                __break(7u, 0);
            if (MEMORY[0x80025D60] == -1 &&
                *(_DWORD *)(a1 + 76) + 2 * MEMORY[0x80025D60] == 0x80000000)
                __break(6u, 0);
            debugPrint("Hmm %d == %d %% %d && %d < 0 ? %d\n");
            v7 = *(_DWORD *)(a1 + 72);
            if (!MEMORY[0x80025D60])
                __break(7u, 0);
            if (MEMORY[0x80025D60] == -1 && v7 == 0x80000000)
                __break(6u, 0);
            if (v32 == v7 % MEMORY[0x80025D60]) {
                v9 = *(_DWORD *)(a1 + 76);
                if (v9 < 0) {
                    v10 = *(_DWORD *)(a1 + 68);
                    *(_DWORD *)(a1 + 76) = v9 + MEMORY[0x80025D60];
                    *(_DWORD *)(a1 + 68) = v10 + 1;
                    if (MEMORY[0x80025C70])
                        *(float *)(a1 + 80) =
                            *(float *)(a1 + 80) + *(float *)(MEMORY[0x80025C70] + 100);
                    debugPrint("lapping %d forward to -1\n", *(_DWORD *)(a1 + 100));
                    v8 = *(_DWORD *)(a1 + 76);
                } else {
                    v8 = *(_DWORD *)(a1 + 76);
                }
            } else {
                v8 = *(_DWORD *)(a1 + 76);
            }
            *(_DWORD *)(a1 + 76) = v8 - 1;
            goto LABEL_99;
        }
        v11 = (float *)(20 * v31 - 2147329024);
        if (!sub_80225B64(v11 + 40, v11 + 38, (float *)(a1 + 12), (float *)a1))
            goto LABEL_99;
        debugPrint("%d went forward, from gate %d to gate %d\n",
                   *(_DWORD *)(a1 + 100),
                   *(_DWORD *)(a1 + 76),
                   *(_DWORD *)(a1 + 76) + 1);
        v12 = *(_DWORD *)(a1 + 76);
        v13 = *(_DWORD *)(a1 + 72);
        v14 = v30;
        *(_DWORD *)(a1 + 76) = v12 + 1;
        if (v13 < v12 + 1) {
            *(_DWORD *)(a1 + 72) = v12 + 1;
            debugPrint("moved ahead one gate, getting %f seconds\n", v11[42]);
            v15 = v30;
            if (v31)
                goto LABEL_99;
            if (*(int *)(a1 + 64) >= 3)
                goto LABEL_71;
            v16 = *(float *)(a1 + 52);
            v17 = 0;
            if (0.0 == v16) {
                *(float *)(a1 + 52) = v30;
            } else {
                if (v30 >= v16)
                    goto LABEL_66;
                *(float *)(a1 + 52) = v30;
            }
            if (*(int *)(a1 + 100) < 1) {
                *(_DWORD *)(*(_DWORD *)(a1 + 96) + 3996) = *(_DWORD *)(a1 + 64);
                if (0.0 == MEMORY[0xC74C1DCC]) {
                    v18 = *(float *)(a1 + 52);
                } else {
                    if (*(float *)(a1 + 52) >= MEMORY[0xC74C1DCC]) {
                        if (*(_DWORD *)(a1 + 64))
                            v17 = "%ryBEST LAP!";
                        goto LABEL_66;
                    }
                    v18 = *(float *)(a1 + 52);
                }
                v17 = "%ryNEW LAP RECORD!";
                MEMORY[0xC74C1DCC] = v18;
            }
        LABEL_66:
            v19 = *(_DWORD *)(a1 + 64);
            if (v3) {
                debugPrint("veh->lapTimeFinal[%d]=%f\n", *(_DWORD *)(a1 + 64), v30);
                v15 = v30;
                *(float *)(v3 + 4 * *(_DWORD *)(a1 + 64) + 3972) = v30;
                v19 = *(_DWORD *)(a1 + 64);
            }
            v20 = *(float *)(a1 + 48);
            *(_DWORD *)(a1 + 64) = v19 + 1;
            *(_DWORD *)(a1 + 68) = v19 + 1;
            *(float *)(a1 + 48) = v20 - v15;
            v21 = v19 + 1;
            if (v3) {
                debugPrint("******* LAP #%d ********\n", v21);
                sub_80260DD4((char *)(v3 + 4032), "%%ryLAP %d", *(_DWORD *)(a1 + 64) + 1);
                *(_DWORD *)(v3 + 4016) = v3 + 4032;
                *(float *)(v3 + 4020) = 1.0;
                if (v17) {
                    *(_DWORD *)(v3 + 4024) = v17;
                    *(float *)(v3 + 4028) = 1.0;
                }
            }
        LABEL_71:
            if (*(_DWORD *)(a1 + 64) == 3) {
                *(_DWORD *)(a1 + 104) |= 2u;
                if (!v3)
                    goto LABEL_79;
                v22 = *(float *)(v3 + 4000);
                *(float *)(v3 + 8292) = 0.89999998;
                *(float *)(v3 + 4000) = v22 - *(float *)(a1 + 48);
                *(float *)(a1 + 48) = 0.0;
                *(_DWORD *)(v3 + 4012) = 0;
                *(float *)(v3 + 4020) = 5.0;
                *(_DWORD *)(v3 + 4016) = "%ryFirst!";
                if (*(int *)(a1 + 100) >= 1)
                    goto LABEL_79;
                if (0.0 == MEMORY[0xC74C1E28]) {
                    v23 = *(float *)(v3 + 4000);
                } else {
                    if (*(float *)(v3 + 4000) >= MEMORY[0xC74C1E28]) {
                    LABEL_79:
                        dword_8028B300 = 1;
                        goto LABEL_99;
                    }
                    v23 = *(float *)(v3 + 4000);
                }
                MEMORY[0xC74C1E28] = v23;
                *(_DWORD *)(v3 + 4024) = "%ryNEW COURSE RECORD!";
                *(_DWORD *)(v3 + 4020) = 1069547520;
                *(float *)(v3 + 4028) = 3.5;
                goto LABEL_79;
            }
        LABEL_99:
            if (v3) {
                *(_DWORD *)(v3 + 3952) = *(_DWORD *)(a1 + 72);
                *(_DWORD *)(v3 + 3956) = *(_DWORD *)(a1 + 76);
                *(_DWORD *)(v3 + 3960) = *(_DWORD *)(a1 + 64);
                *(_DWORD *)(v3 + 3964) = *(_DWORD *)(a1 + 68);
                *(_DWORD *)(v3 + 3968) = *(_DWORD *)(a1 + 48);
                *(_DWORD *)(v3 + 3992) = *(_DWORD *)(a1 + 52);
                *(_DWORD *)(v3 + 4008) = *(_DWORD *)(a1 + 80);
            }
            return;
        }
        if (20 * v31)
            goto LABEL_99;
        v24 = *(_DWORD *)(a1 + 64);
        v25 = *(_DWORD *)(a1 + 68) + 1;
        *(_DWORD *)(a1 + 68) = v25;
        if (v24 >= v25) {
        LABEL_98:
            debugPrint("granting technically-earned lap %d/%d to %d\n",
                       *(_DWORD *)(a1 + 68),
                       *(_DWORD *)(a1 + 64),
                       *(_DWORD *)(a1 + 100));
            goto LABEL_99;
        }
        v26 = *(float *)(a1 + 52);
        v27 = 0;
        if (0.0 == v26) {
            *(float *)(a1 + 52) = v30;
        } else {
            if (v30 >= v26) {
            LABEL_93:
                if (v3) {
                    debugPrint("veh->lapTimeFinal[%d]=%f\n", *(_DWORD *)(a1 + 64), v30);
                    v14 = v30;
                    *(float *)(v3 + 4 * *(_DWORD *)(a1 + 64) + 3972) = v30;
                }
                v28 = *(float *)(a1 + 48);
                v29 = *(_DWORD *)(a1 + 68);
                *(_DWORD *)(a1 + 64) = v29;
                *(float *)(a1 + 48) = v28 - v14;
                if (v3) {
                    debugPrint("******* LAP #%d ********\n", v29);
                    sub_80260DD4((char *)(v3 + 4032), "%%ryLAP %d", *(_DWORD *)(a1 + 64) + 1);
                    *(_DWORD *)(v3 + 4016) = v3 + 4032;
                    *(float *)(v3 + 4020) = 1.0;
                    if (v27) {
                        *(_DWORD *)(v3 + 4024) = v27;
                        *(float *)(v3 + 4028) = 1.0;
                    }
                }
                goto LABEL_98;
            }
            *(float *)(a1 + 52) = v30;
        }
        if (*(int *)(a1 + 100) < 1) {
            *(_DWORD *)(*(_DWORD *)(a1 + 96) + 3996) = *(_DWORD *)(a1 + 64);
            if (0.0 == MEMORY[0xC74C1DCC] || *(float *)(a1 + 52) < MEMORY[0xC74C1DCC]) {
                MEMORY[0xC74C1DCC] = v30;
                v27 = "%ryNEW LAP RECORD!";
            } else if (*(_DWORD *)(a1 + 64)) {
                v27 = "%ryBEST LAP!";
            }
        }
        goto LABEL_93;
    }
}
// 8022A830: write access to const memory at 8028B300 has been detected
// 8022A228: conditional instruction was optimized away because of '$s0.4>=0'
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 80270788: using guessed type int dword_80270788;
// 8028B300: using guessed type int dword_8028B300;
// 8028B304: using guessed type int dword_8028B304;
// 8028B940: using guessed type int dword_8028B940;
// 8028C800: using guessed type int dword_8028C800;
