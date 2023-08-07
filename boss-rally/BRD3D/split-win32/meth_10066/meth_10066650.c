#include "../../types-win32.h"
//----- (10066650) --------------------------------------------------------
int *__thiscall meth_10066650(_DWORD *this) {
    int v2;         // ecx
    float *v3;      // esi
    float *v4;      // edi
    int v5;         // ecx
    double v6;      // st7
    double v7;      // st6
    double v8;      // st7
    double v9;      // st7
    double v10;     // st6
    double v11;     // st7
    int v12;        // eax
    int v13;        // ebp
    int v14;        // eax
    double v15;     // st7
    int v16;        // edx
    int *result;    // eax
    int v18;        // ebp
    float *v19;     // ecx
    char *v20;      // esi
    int v21;        // edi
    int v22;        // ecx
    int *v23;       // eax
    bool v24;       // cc
    int *v25;       // ecx
    char *v26;      // edi
    int v27;        // esi
    int v28;        // ecx
    char v29;       // al
    char v30;       // cl
    int v31;        // eax
    int v32;        // eax
    int v33;        // eax
    int v34;        // esi
    char *v35;      // edi
    int v36;        // [esp+0h] [ebp-F4h]
    int v37;        // [esp+4h] [ebp-F0h]
    int v38;        // [esp+8h] [ebp-ECh]
    int v39;        // [esp+8h] [ebp-ECh]
    float v40;      // [esp+1Ch] [ebp-D8h]
    int v41;        // [esp+1Ch] [ebp-D8h]
    int *v42;       // [esp+1Ch] [ebp-D8h]
    float v43;      // [esp+20h] [ebp-D4h]
    int v44;        // [esp+20h] [ebp-D4h]
    int v45;        // [esp+24h] [ebp-D0h]
    int v46;        // [esp+28h] [ebp-CCh] BYREF
    float *v47;     // [esp+2Ch] [ebp-C8h]
    int *v48;       // [esp+30h] [ebp-C4h]
    int v49;        // [esp+34h] [ebp-C0h]
    _DWORD *v50;    // [esp+38h] [ebp-BCh]
    float v51[3];   // [esp+3Ch] [ebp-B8h] BYREF
    float v52[3];   // [esp+48h] [ebp-ACh] BYREF
    float v53;      // [esp+54h] [ebp-A0h] BYREF
    int v54;        // [esp+58h] [ebp-9Ch] BYREF
    char Base[152]; // [esp+5Ch] [ebp-98h] BYREF

    v43 = *(float *)(dword_106C7CB8 + 100);
    v2 = dword_100B36F8;
    v50 = this;
    v45 = 0;
    if (dword_100B36F8 > 0) {
        v3 = &v53;
        v4 = (float *)&unk_10ACD4FC;
        do {
            v5 = *((_DWORD *)v4 - 1);
            if (v5) {
                if ((_DWORD *)v5 == this || *(_DWORD *)(v5 + 320) >= dword_100B4050) {
                    if (g_GameMode || *(_DWORD *)(v5 + 320) < dword_100B4050 ||
                        (*(_BYTE *)(*(_DWORD *)(v5 + 3840) + 104) & 2) == 0 ||
                        *(_BYTE *)(v5 + 10671) != 2 || *(float *)(v5 + 10672) != 0.0) {
                        v6 = *((float *)this + 1021);
                        v46 = *(_DWORD *)(v5 + 4012) - this[1003];
                        v7 = (double)v46 * v43 + v6 - *(float *)(v5 + 4084);
                        v40 = v7;
                        if (v7 <= v43 * 0.5) {
                            if (v43 * -0.5 > v40)
                                v40 = v43 + v40;
                            v8 = sub_1003B0E0((float *)this + 12, (float *)(v5 + 48));
                        } else {
                            v40 = v40 - v43;
                            v8 = sub_1003B0E0((float *)this + 12, (float *)(v5 + 48));
                        }
                        goto LABEL_28;
                    }
                    *v3 = 1000000000.0;
                } else {
                    *v3 = 1.0e10;
                }
            } else {
                if (g_GameMode || *(_DWORD *)v4 < dword_100B4050 || ((_BYTE)v4[1] & 2) == 0) {
                    v9 = *((float *)this + 1021);
                    v46 = *((_DWORD *)v4 - 8) - this[1003];
                    v10 = (double)v46 * v43 + v9 - *(v4 - 5);
                    v40 = v10;
                    if (v10 > v43 * 0.5) {
                        v11 = v40 - v43;
                        goto LABEL_26;
                    }
                    if (v43 * -0.5 > v40) {
                        v11 = v43 + v40;
                    LABEL_26:
                        v40 = v11;
                    }
                    v8 = sub_1003B0E0((float *)this + 12, v4 - 25);
                LABEL_28:
                    *v3 = v8 + v40 * v40;
                    goto LABEL_29;
                }
                *v3 = 1000000000.0;
            }
        LABEL_29:
            v12 = v45;
            v2 = dword_100B36F8;
            *((_DWORD *)v3 + 1) = v45;
            v4 += 32;
            v3 += 2;
            v45 = v12 + 1;
        } while (v12 + 1 < v2);
    }
    if (v2 > 1) {
        v13 = this[80];
        v14 = 8 * v13;
        v15 = *(&v53 + 2 * v13);
        *(float *)((char *)&v53 + v14) = v53;
        v54 = v13;
        v53 = v15;
        *(int *)((char *)&v54 + v14) = 0;
        qsort(Base, v2 - 1, 8u, sub_10066620);
    }
    v16 = 0;
    v49 = 0;
    do {
        result = (int *)dword_100B36F8;
        v18 = 0;
        v41 = 1;
        v45 = 0;
        v44 = 0;
        if (dword_100B36F8 > 0) {
            v48 = &v46;
            v19 = &v53;
            v47 = &v53;
            do {
                v20 = (char *)&unk_10ACD498 + 128 * *((_DWORD *)v19 + 1);
                if (*((_DWORD *)v20 + 29) != v16 || *((_DWORD *)v20 + 25) < dword_100B4050)
                    goto LABEL_47;
                if (v44 >= 1) {
                    v21 = *((_DWORD *)v20 + 24);
                    if (!v21)
                        goto LABEL_47;
                    v41 = 0;
                    if (*(_DWORD *)(v21 + 3844) || *v19 <= 80000.0)
                        goto LABEL_47;
                } else {
                    ++v44;
                    v21 = *((_DWORD *)v20 + 24);
                    if (!v21)
                        goto LABEL_47;
                    v41 = 0;
                    if ((v20[104] & 2) == 0 || *(_BYTE *)(v21 + 10671) != 2 ||
                        *(float *)(v21 + 10672) != 0.0)
                        goto LABEL_47;
                }
                *(_DWORD *)v20 = *(_DWORD *)(v21 + 48);
                *((_DWORD *)v20 + 1) = *(_DWORD *)(v21 + 52);
                *((_DWORD *)v20 + 2) = *(_DWORD *)(v21 + 56);
                *((_DWORD *)v20 + 6) = *(_DWORD *)(v21 + 4132);
                *((_DWORD *)v20 + 7) = *(_DWORD *)(v21 + 4136);
                *((_DWORD *)v20 + 8) = *(_DWORD *)(v21 + 4140);
                *((_DWORD *)v20 + 9) = *(_DWORD *)(v21 + 4144);
                *((_DWORD *)v20 + 10) = *(_DWORD *)(v21 + 3980);
                *((_DWORD *)v20 + 11) = *(_DWORD *)(v21 + 3984);
                *((_DWORD *)v20 + 12) = *(_DWORD *)(v21 + 4016);
                *((_DWORD *)v20 + 13) = *(_DWORD *)(v21 + 4068);
                *((_DWORD *)v20 + 14) = *(_DWORD *)(v21 + 4076);
                *((_DWORD *)v20 + 15) = *(_DWORD *)(v21 + 4080);
                *((_DWORD *)v20 + 16) = *(_DWORD *)(v21 + 4008);
                *((_DWORD *)v20 + 17) = *(_DWORD *)(v21 + 4012);
                *((_DWORD *)v20 + 18) = *(_DWORD *)(v21 + 4000);
                *((_DWORD *)v20 + 19) = *(_DWORD *)(v21 + 4004);
                debugPrint(*((void **)v20 + 16));
                v22 = *((_DWORD *)v20 + 24);
                *((_DWORD *)v20 + 20) = *(_DWORD *)(v21 + 4084);
                v16 = v49;
                *((_DWORD *)v20 + 21) = *(_DWORD *)(v21 + 4088);
                v23 = v48;
                ++v18;
                *((_DWORD *)v20 + 24) = 0;
                *v23 = v22;
                v19 = v47;
                *(_DWORD *)(v21 + 3840) = 0;
                v48 = v23 + 1;
                *(_DWORD *)(v21 + 3844) = 60;
            LABEL_47:
                result = (int *)(v45 + 1);
                v19 += 2;
                v24 = ++v45 < dword_100B36F8;
                v47 = v19;
            } while (v24);
        }
        if (v41) {
            ++v18;
            result = &dword_10ACDEA8[2778 * v16 + 2778 * dword_100B4050];
            *(&v45 + v18) = (int)result;
        }
        v45 = 0;
        if (v18) {
            v25 = &v54;
            v48 = &v54;
            result = &v46 + v18;
            v47 = (float *)(v50 + 940);
            do {
                if (v45 >= dword_100B36F8)
                    break;
                v26 = (char *)&unk_10ACD498 + 128 * *v25;
                if (*((_DWORD *)v26 + 29) == v16 && *((_DWORD *)v26 + 25) >= dword_100B4050 &&
                    (v26[104] & 2) == 0 && !*((_DWORD *)v26 + 24)) {
                    v27 = *(result - 1);
                    v28 = *((_DWORD *)v26 + 9);
                    *((_DWORD *)v26 + 24) = v27;
                    *(_DWORD *)(v27 + 4144) = v28;
                    v42 = result - 1;
                    *(_DWORD *)(v27 + 3980) = *((_DWORD *)v26 + 10);
                    *(_DWORD *)(v27 + 3984) = *((_DWORD *)v26 + 11);
                    *(_DWORD *)(v27 + 4016) = *((_DWORD *)v26 + 12);
                    *(_DWORD *)(v27 + 4068) = *((_DWORD *)v26 + 13);
                    *(_DWORD *)(v27 + 4076) = *((_DWORD *)v26 + 14);
                    *(_DWORD *)(v27 + 4080) = *((_DWORD *)v26 + 15);
                    *(_DWORD *)(v27 + 4008) = *((_DWORD *)v26 + 16);
                    *(_DWORD *)(v27 + 4012) = *((_DWORD *)v26 + 17);
                    *(_DWORD *)(v27 + 4000) = *((_DWORD *)v26 + 18);
                    *(_DWORD *)(v27 + 4004) = *((_DWORD *)v26 + 19);
                    debugPrint(*(void **)(v27 + 4008));
                    *(_DWORD *)(v27 + 4084) = *((_DWORD *)v26 + 20);
                    *(_DWORD *)(v27 + 4088) = *((_DWORD *)v26 + 21);
                    *(_DWORD *)(v27 + 3840) = v26;
                    *(_BYTE *)(v27 + 10671) = 0;
                    *(_DWORD *)(v27 + 10672) = 1065353216;
                    *(_DWORD *)(v27 + 3960) = 1;
                    meth_10062C50(v27);
                    meth_10065630((_DWORD *)v27);
                    *(_DWORD *)(v27 + 3968) = *((_DWORD *)v26 + 3);
                    *(_DWORD *)(v27 + 3972) = *((_DWORD *)v26 + 4);
                    *(_DWORD *)(v27 + 3976) = *((_DWORD *)v26 + 5);
                    *(float *)&v38 = *((float *)v26 + 2) - -0.1;
                    meth_10076420((float *)v27, *(_DWORD *)v26, *((_DWORD *)v26 + 1), v38);
                    *(_BYTE *)(v27 + 10671) = 0;
                    *(_DWORD *)(v27 + 10672) = 1065353216;
                    v29 = v26[94];
                    v30 = v26[93];
                    *(_BYTE *)(v27 + 10668) = v26[92];
                    *(_BYTE *)(v27 + 10669) = v30;
                    *(_BYTE *)(v27 + 10670) = v29;
                    sub_100661B0(v27, (int)v26);
                    v31 = *(_DWORD *)(v27 + 3980) + 40 * *(_DWORD *)(v27 + 3984);
                    sub_1003AEE0(v51, (float *)(v31 + 64), (float *)(v31 + 76));
                    v32 = *(_DWORD *)(v27 + 3980) + 40 * *(_DWORD *)(v27 + 3984);
                    sub_1003AEE0(v52, (float *)(v32 + 104), (float *)(v32 + 116));
                    v33 = *(_DWORD *)(v27 + 3980) + 40 * *(_DWORD *)(v27 + 3984);
                    sub_1003ADA0((float *)v27, (float *)(v33 + 76), (float *)(v33 + 116));
                    sub_1003B050((float *)(v27 + 16), v51, v52);
                    sub_1003AC30((float *)(v27 + 32), (float *)v27, (float *)(v27 + 16));
                    sub_1003AE50((float *)(v27 + 32));
                    sub_1003AC30((float *)(v27 + 16), (float *)(v27 + 32), (float *)v27);
                    sub_1003AE50((float *)(v27 + 16));
                    *(_DWORD *)(v27 + 3988) = *(_DWORD *)v27;
                    *(_DWORD *)(v27 + 3992) = *(_DWORD *)(v27 + 4);
                    *(_DWORD *)(v27 + 3996) = *(_DWORD *)(v27 + 8);
                    meth_10076700(v27, (void *)v27);
                    if ((*(_BYTE *)(*(_DWORD *)(v27 + 3840) + 104) & 1) != 0) {
                        meth_100767A0((_DWORD *)v27, 0, 0, 0);
                    } else {
                        *(float *)&v39 = *(float *)(v27 + 8) * 50.0;
                        *(float *)&v37 = *(float *)(v27 + 4) * 50.0;
                        *(float *)&v36 = *(float *)v27 * 50.0;
                        meth_100767A0((_DWORD *)v27, v36, v37, v39);
                    }
                    --v18;
                    *(_DWORD *)(*(_DWORD *)(v27 + 360) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(v27 + 360) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(v27 + 360) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(v27 + 364) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(v27 + 364) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(v27 + 364) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(v27 + 372) + 412) = 0;
                    *(_DWORD *)(*(_DWORD *)(v27 + 372) + 436) = 0;
                    *(_BYTE *)(*(_DWORD *)(v27 + 372) + 416) = 2;
                    *(_DWORD *)(*(_DWORD *)(v27 + 368) + 412) = 0;
                    result = v42;
                    *(_DWORD *)(*(_DWORD *)(v27 + 368) + 436) = 0;
                    v25 = v48;
                    *(_BYTE *)(*(_DWORD *)(v27 + 368) + 416) = 2;
                    v16 = v49;
                    *(_DWORD *)(v27 + 3744) = 0;
                    *(_DWORD *)(v27 + 3748) = 0;
                    *(_DWORD *)(v27 + 3752) = 0;
                    *(_DWORD *)(v27 + 3756) = -180;
                    *(_DWORD *)(v27 + 860) = 40;
                    *(_DWORD *)(v27 + 3616) = 0;
                }
                v34 = (int)v47;
                v35 = (char *)&unk_10ACD498 + 128 * *v25;
                v25 += 2;
                *(_DWORD *)v47 = v35;
                ++v45;
                v47 = (float *)(v34 + 4);
                v48 = v25;
            } while (v18);
        }
        v49 = ++v16;
    } while (v16 < 2);
    return result;
}
// 100AA010: using guessed type int g_GameMode;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B4050: using guessed type int dword_100B4050;
