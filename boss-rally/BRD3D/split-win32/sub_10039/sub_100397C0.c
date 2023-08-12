#include "types-win32.h"
//----- (100397C0) --------------------------------------------------------
int sub_100397C0() {
    __int64 v0;   // rax
    int v1;       // ebx
    double v2;    // st7
    double v3;    // st7
    double v4;    // st7
    _WORD *v5;    // ecx
    float *v6;    // edx
    double v7;    // st6
    double v8;    // st7
    double v9;    // st6
    double v10;   // st7
    double v11;   // st7
    double v12;   // st6
    double v13;   // st7
    double v14;   // st6
    int v15;      // eax
    int v16;      // ebp
    int v17;      // eax
    int v18;      // ecx
    double v19;   // st7
    __int16 *v20; // esi
    double v21;   // st7
    double v22;   // st7
    double v23;   // st5
    double v24;   // st6
    double v25;   // st7
    bool v26;     // cc
    int v28;      // [esp+4h] [ebp-84h]
    int v29;      // [esp+4h] [ebp-84h]
    int v30;      // [esp+8h] [ebp-80h]
    _WORD *v31;   // [esp+8h] [ebp-80h]
    int v32;      // [esp+Ch] [ebp-7Ch]
    _DWORD *v33;  // [esp+10h] [ebp-78h]
    int v34;      // [esp+14h] [ebp-74h]
    float v35;    // [esp+18h] [ebp-70h]
    int v36;      // [esp+1Ch] [ebp-6Ch]
    int *i;       // [esp+20h] [ebp-68h]
    float v38;    // [esp+24h] [ebp-64h]
    float v39;    // [esp+28h] [ebp-60h]
    int v40;      // [esp+2Ch] [ebp-5Ch]
    char *v41;    // [esp+30h] [ebp-58h]
    int v42;      // [esp+34h] [ebp-54h]
    int v43;      // [esp+38h] [ebp-50h]
    int v44;      // [esp+3Ch] [ebp-4Ch]
    __int16 v45;  // [esp+40h] [ebp-48h]
    int v46;      // [esp+44h] [ebp-44h]
    int v47[16];  // [esp+48h] [ebp-40h] BYREF

    v32 = (__int64)(*(float *)&dword_106C2CFC * 4096.0);
    v0 = (__int64)(*(float *)&dword_106C2CFC * 9.8100004 * 127.0);
    v45 = v0;
    if (!dword_106909B4 && dword_106909E0 != 2) {
        LODWORD(v0) = dword_100B36F8;
        v43 = 0;
        if (dword_100B36F8 > 0) {
            for (i = &dword_10ACD4F8;; i += 32) {
                v1 = *i;
                if (*i)
                    break;
            LABEL_48:
                LODWORD(v0) = v43 + 1;
                v26 = ++v43 < dword_100B36F8;
                if (!v26)
                    return v0;
            }
            v40 = (__int16)(__int64)((*(float *)(v1 + 9928) - *(float *)(v1 + 48)) * 127.0);
            v2 = (double)v40;
            v38 = v2;
            v42 = (__int16)(__int64)((*(float *)(v1 + 9932) - *(float *)(v1 + 52)) * 127.0);
            v44 = (__int16)(__int64)((*(float *)(v1 + 9936) - *(float *)(v1 + 56)) * 127.0);
            *(float *)&v30 = *(float *)(v1 + 9928) - v2 * 0.0078740157;
            *(float *)(v1 + 9928) = *(float *)&v30;
            v3 = (double)v42;
            v39 = v3;
            *(float *)&v28 = *(float *)(v1 + 9932) - v3 * 0.0078740157;
            *(float *)(v1 + 9932) = *(float *)&v28;
            v4 = (double)v44;
            v35 = v4;
            *(float *)&v36 = *(float *)(v1 + 9936) - v4 * 0.0078740157;
            *(float *)(v1 + 9936) = *(float *)&v36;
            sub_10031140((_DWORD *)(v1 + 9940), v30, v28, v36);
            sub_100310F0((int)v47, 0.0078740157, 1006699012, 1006699012);
            sub_100306C0((float *)v47, (float *)(v1 + 9940), (float *)(v1 + 9940));
            v5 = (_WORD *)(v1 + 9856);
            v41 = (char *)(v1 + 9016);
            v34 = 0;
            v33 = (_DWORD *)(v1 + 4316);
            v31 = (_WORD *)(v1 + 9856);
            v6 = (float *)(v1 + 4404);
            while (1) {
                if (!*v33)
                    goto LABEL_30;
                if (!*v5)
                    break;
                if (*v5 != 3) {
                    if (*v5 == 4) {
                        if (gChosenTrack == 2 || gChosenTrack == 8) {
                            if (*(_DWORD *)&gUnk06594.gap1C8[12504]) {
                                *v6 = 70.0;
                                v6[1] = 100.0;
                                v6[2] = 100.0;
                                v6[8] = 215.0;
                                v6[9] = 235.0;
                                v6[10] = 195.0;
                            } else {
                                *v6 = 50.0;
                                v6[1] = 100.0;
                                v6[2] = 95.0;
                                v6[8] = 210.0;
                                v6[9] = 240.0;
                                v6[10] = 190.0;
                            }
                        } else if (gChosenTrack == 3 || gChosenTrack == 9) {
                            *v6 = 16.0;
                            v6[1] = 16.0;
                            v6[2] = 0.0;
                            v6[8] = 64.0;
                            v6[9] = 64.0;
                            v6[10] = 16.0;
                        } else {
                            *v6 = 48.0;
                            v6[1] = 24.0;
                            v6[2] = 8.0;
                            v6[8] = 128.0;
                            v6[9] = 96.0;
                            v6[10] = 64.0;
                        }
                        if (*(_DWORD *)&gUnk06594.gap1C8[12508]) {
                            v7 = v6[2] * -0.5;
                            v8 = 32.0 - v6[1] * -0.5;
                            *v6 = 32.0 - *v6 * -0.5;
                            v6[1] = v8;
                            v6[2] = 32.0 - v7;
                            v9 = v6[10] * -0.5;
                            v10 = 32.0 - v6[9] * -0.5;
                            v6[8] = 32.0 - v6[8] * -0.5;
                            v6[9] = v10;
                            v6[10] = 32.0 - v9;
                        } else if (*(_DWORD *)&gUnk06594.gap1C8[12500]) {
                            v11 = v6[1] * 0.5;
                            v12 = v6[2] * 0.5;
                            *v6 = *v6 * 0.5;
                            v6[1] = v11;
                            v6[2] = v12;
                            v13 = v6[9] * 0.5;
                            v14 = v6[10] * 0.5;
                            v6[8] = v6[8] * 0.5;
                            v6[9] = v13;
                            v6[10] = v14;
                        }
                        goto LABEL_29;
                    }
                LABEL_26:
                    *v5 = -1;
                    v6[8] = v6[40];
                    v6[9] = v6[41];
                    v6[10] = v6[42];
                    *v6 = v6[32];
                    v6[1] = v6[33];
                    v15 = *((_DWORD *)v6 + 34);
                LABEL_28:
                    *((_DWORD *)v6 + 2) = v15;
                    goto LABEL_29;
                }
                if (!*(_DWORD *)&gUnk06594.gap1C8[12508])
                    goto LABEL_26;
                *v6 = 100.0;
                v6[1] = 104.0;
                v6[2] = 108.0;
                v6[8] = 160.0;
                v6[9] = 168.0;
                v6[10] = 176.0;
            LABEL_29:
                qmemcpy(v6 + 27, v6 - 5, 0x80u);
                qmemcpy(v41, v41 - 24, 0x18u);
                v31[1] = *v31;
            LABEL_30:
                v16 = 8;
                v17 = v34 + 4928;
                v29 = v34 + 4928;
                do {
                    if (v16 == 1 || *v33) {
                        qmemcpy((void *)(v1 + ((v16 + v34) << 7) + 4384),
                                (const void *)(v1 + ((v16 + v34) << 7) + 4256),
                                0x80u);
                        v29 = v17;
                        qmemcpy((void *)(v1 + 24 * (v16 + v34) + 8992),
                                (const void *)(v1 + 24 * (v16 + v34) + 8968),
                                0x18u);
                        *(_WORD *)(v1 + 2 * (v16 + v17)) = *(_WORD *)(v1 + 2 * (v16 + v17) - 2);
                    }
                    v46 = *(__int16 *)(v1 + 2 * (v16 + v29));
                    v18 = v1 + ((v16 + v34) << 7);
                    if (v46 == 3) {
                        *(_DWORD *)(v18 + 4396) = 1149370368;
                        *(_DWORD *)(v18 + 4428) = 1098907648;
                    } else {
                        *(_DWORD *)(v18 + 4396) = 1098907648;
                        *(_DWORD *)(v18 + 4428) = 1149370368;
                    }
                    v19 = (double)(v16 << 11);
                    *(float *)(v18 + 4400) = v19;
                    *(float *)(v18 + 4432) = v19;
                    if (v46 == -1 || v16 == 1 || v16 == 2 && *v33) {
                        v22 = v39 + *(float *)(v18 + 4388);
                        v23 = v35 + *(float *)(v18 + 4392);
                        *(float *)(v18 + 4384) = *(float *)(v18 + 4384) + v38;
                        *(float *)(v18 + 4388) = v22;
                        *(float *)(v18 + 4392) = v23;
                        v24 = v39 + *(float *)(v18 + 4420);
                        v25 = v35 + *(float *)(v18 + 4424);
                        *(float *)(v18 + 4416) = *(float *)(v18 + 4416) + v38;
                        *(float *)(v18 + 4420) = v24;
                        *(float *)(v18 + 4424) = v25;
                    } else if (v16 != 8) {
                        v20 = (__int16 *)(v1 + 24 * (v16 + v34));
                        *(float *)(v18 + 4384) =
                            (double)(v40 + ((v32 * v20[4496]) >> 12)) + *(float *)(v18 + 4384);
                        *(float *)(v18 + 4388) =
                            (double)(v42 + ((v32 * v20[4497]) >> 12)) + *(float *)(v18 + 4388);
                        *(float *)(v18 + 4392) = v35 + *(float *)(v18 + 4392);
                        *(float *)(v18 + 4416) =
                            (double)(v40 + ((v32 * v20[4499]) >> 12)) + *(float *)(v18 + 4416);
                        *(float *)(v18 + 4420) =
                            (double)(v42 + ((v32 * v20[4500]) >> 12)) + *(float *)(v18 + 4420);
                        v21 = (double)(v44 + ((v20[4501] * v32) >> 12)) + *(float *)(v18 + 4424);
                        *(float *)(v18 + 4424) = v21;
                        if (v21 >= *(float *)(v18 + 4392)) {
                            v17 = v34 + 4928;
                            v20[4501] -= v45;
                        } else {
                            *(_DWORD *)(v18 + 4424) = *(_DWORD *)(v18 + 4392);
                            v17 = v34 + 4928;
                        }
                    }
                    --v16;
                } while (v16 > 0);
                v41 += 216;
                v6 += 288;
                v5 = v31 + 9;
                v26 = v34 + 9 < 36;
                v31 += 9;
                ++v33;
                v34 += 9;
                if (!v26)
                    goto LABEL_48;
            }
            v6[8] = 48.0;
            *v6 = 48.0;
            v6[9] = 32.0;
            v6[1] = 32.0;
            v15 = 1098907648;
            v6[10] = 16.0;
            goto LABEL_28;
        }
    }
    return v0;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B380C: using guessed type int gChosenTrack;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
