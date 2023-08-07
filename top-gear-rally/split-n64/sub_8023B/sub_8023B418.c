#include "../../types-n64.h"
//----- (8023B418) --------------------------------------------------------
void __fastcall sub_8023B418(int a1) {
    int v2;               // $v1
    float v3;             // $f10
    float v4;             // $f0
    int v5;               // $s3
    int v6;               // $s1
    _WORD *v7;            // $s5
    float v8;             // $f0
    float v9;             // $f0
    float v10;            // $f0
    bool v11;             // $fcc0
    int v12;              // $s7
    float v13;            // $f2
    float *v14;           // $s6
    float *v15;           // $s4
    float *v16;           // $fp
    float v17;            // $f0
    float v18;            // $f0
    float v19;            // $f0
    int v20;              // $t5
    float v21;            // $f0
    float v22;            // $f8
    unsigned __int16 v23; // $v0
    _WORD *v24;           // $v0
    int v25;              // $t0
    int v26;              // $t2
    __int16 v27;          // $t1
    float v28;            // $f10
    float v29;            // $f4
    __int16 v30;          // $t2
    int v31;              // [sp+54h] [-9Ch]
    float *v32;           // [sp+60h] [-90h]
    int *v33;             // [sp+68h] [-88h]
    float *v34;           // [sp+74h] [-7Ch]
    float v35;            // [sp+94h] [-5Ch]
    int v36[6];           // [sp+9Ch] [-54h] BYREF
    int v37;              // [sp+B4h] [-3Ch]
    float v38;            // [sp+BCh] [-34h]
    float v39;            // [sp+C4h] [-2Ch]
    float v40;            // [sp+CCh] [-24h] BYREF
    float v41;            // [sp+D0h] [-20h]
    float v42;            // [sp+D4h] [-1Ch]
    float v43[2];         // [sp+D8h] [-18h] BYREF
    float v44;            // [sp+E0h] [-10h]
    float v45;            // [sp+E4h] [-Ch]
    float v46;            // [sp+E8h] [-8h]
    float v47;            // [sp+ECh] [-4h]

    v2 = 0;
    if (*(_DWORD *)(a1 + 0x2000) &&
        (*(_WORD *)(MEMORY[0x80025C60] + 84 * *(unsigned __int16 *)(a1 + 8128) + 76) & 0x10) != 0) {
        v2 = 1;
    }
    v36[0] = a1 + 2408;
    v36[1] = a1 + 1368;
    v36[2] = a1 + 848;
    v36[3] = a1 + 1888;
    v3 = 50.0 / (float)(*(float *)(a1 + 4068) + 50.0);
    v34 = (float *)(a1 + 4056);
    v36[4] = v2;
    v39 = (float)(1.0 - v3) * 3.0;
    v4 = sub_80224404((float *)a1, (float *)(a1 + 4056));
    v5 = 0;
    v6 = a1;
    v7 = (_WORD *)a1;
    if (v4 >= 0.0)
        v35 = v4;
    else
        v35 = -v4;
    v33 = v36;
    v32 = (float *)a1;
    v31 = a1;
    do {
        *(float *)(v6 + 4224) = *(float *)(v6 + 4224) + (float)(0.0 * 4.0);
        v8 = *(float *)(v6 + 4224);
        if (v8 > 0.75) {
            v37 = 0;
            if (v8 >= 1.7)
                *(float *)(v6 + 4224) = v8 - 1.0;
            else
                *(float *)(v6 + 4224) = 0.0;
            *(_DWORD *)(v6 + 4240) = 1;
        } else {
            v37 = 1;
            *(_DWORD *)(v6 + 4240) = 0;
        }
        if (*(_DWORD *)(*v33 + 436)) {
            *(_DWORD *)(v6 + 4192) = 1077936128;
            v10 = *(float *)(v6 + 4192);
            *(_DWORD *)(v6 + 4208) = *(unsigned __int8 *)(*v33 + 416);
        } else {
            v9 = *(float *)(v6 + 4192);
            if (0.0 == v9) {
                v11 = 0.0 == v9;
                goto LABEL_21;
            }
            *(float *)(v6 + 4192) = v9 - 1.0;
            v10 = *(float *)(v6 + 4192);
        }
        v11 = 0.0 == v10;
    LABEL_21:
        v12 = *(_DWORD *)(v6 + 4208);
        if (!v11) {
            if (v37) {
                v13 = 1.5;
                v14 = (float *)(a1 + 12 * v5);
                v15 = (float *)(a1 + 32);
                v16 = v32 + 28;
                goto LABEL_27;
            }
            v15 = (float *)(a1 + 32);
            if (v12 == 4) {
                v13 = 2.5;
                v14 = (float *)(a1 + 12 * v5);
                v16 = v32 + 28;
            LABEL_27:
                if (!v37) {
                    v38 = v13;
                    sub_802244FC(v43, v15, v13);
                    if (v12 != 3) {
                        if (v5) {
                            if (v5 < 3)
                                v17 = -v38;
                            else
                                v17 = v38;
                        } else {
                            v17 = v38;
                        }
                        sub_80224990(v43, (float *)(a1 + 16), v17);
                    }
                    if (v12 == 3) {
                        sub_80224528(
                            v43,
                            (float)(1.0 - (float)(25.0 / (float)((float)(2.24 * v35) + 25.0))) *
                                3.0);
                        if ((float)((float)(1.0 -
                                            (float)(25.0 / (float)((float)(2.24 * v35) + 25.0))) *
                                    3.0) != 0.0) {
                            if (v5 >= 2)
                                v44 = v44 + v44;
                            v19 = sub_80224404((float *)(a1 + 16), v34);
                            sub_80224990(v43, (float *)(a1 + 16), v19 * 0.30000001);
                        }
                    } else {
                        sub_80224528(v43, v39);
                        sub_80224990(v43, v34, 0.30000001);
                        v18 = sub_80224404((float *)(a1 + 16), v34);
                        sub_80224990(v43, (float *)(a1 + 16), v18 * 0.5);
                    }
                }
                sub_8022494C(&v40, v16, v15, -0.25);
                if (v12 == 3 && v5 >= 2) {
                    v20 = v37;
                } else {
                    if (v5 && v5 < 3)
                        v21 = -0.15000001;
                    else
                        v21 = 0.15000001;
                    sub_80224990(&v40, (float *)(a1 + 16), v21);
                    v20 = v37;
                }
                v45 = v40;
                v46 = v41;
                v47 = v42;
                if (!v20) {
                    if (sub_80224ACC(&v40, v14 + 1064) >= 256.0) {
                        v22 = v45;
                    LABEL_54:
                        v14[1064] = v22;
                        v14[1065] = v46;
                        v14[1066] = v47;
                        goto LABEL_56;
                    }
                    v23 = sub_80225EE4();
                    sub_802248FC(&v40,
                                 v14 + 1064,
                                 &v40,
                                 (float)((float)v23 * 0.000015259022) *
                                     (float)((float)v23 * 0.000015259022));
                }
                v22 = v45;
                goto LABEL_54;
            }
        }
        sub_80224A1C(v43);
        v40 = v32[28];
        v41 = v32[29];
        v42 = v32[30];
    LABEL_56:
        if (!v37) {
            v24 = (_WORD *)(a1 + 216 * v5);
            v24[3307] = (int)(float)(v43[0] * 127.0);
            v24[3308] = (int)(float)(v43[1] * 127.0);
            v24[3309] = (int)(float)(v44 * 127.0);
            v25 = (__int16)v24[3307];
            v26 = (__int16)v24[3308];
            v24[3306] = 0;
            v24[3304] = v25 >> 1;
            v24[3305] = v26 >> 1;
        }
        ++v5;
        *(_WORD *)(v31 + 7472) = v12;
        v6 += 4;
        v7 += 288;
        v7[1872] = (int)(float)((float)(v40 - *(float *)(a1 + 7544)) * 127.0);
        v27 = v7[1872];
        v7[1873] = (int)(float)((float)(v41 - *(float *)(a1 + 7548)) * 127.0);
        v28 = *(float *)(a1 + 7552);
        v29 = v42;
        v30 = v7[1873];
        v7[1864] = v27;
        v7[1865] = v30;
        v7[1874] = (int)(float)((float)(v29 - v28) * 127.0);
        v7[1866] = v7[1874];
        ++v33;
        v32 += 16;
        v31 += 18;
    } while (v5 != 4);
}
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8028B940: using guessed type int dword_8028B940;
