#include "../types-win32.h"
//----- (10039200) --------------------------------------------------------
int __thiscall meth_10039200(int this) {
    int result;          // eax
    double v3;           // st7
    double v4;           // st7
    _WORD *v5;           // ebx
    int v6;              // ecx
    float *v7;           // esi
    unsigned __int8 v9;  // c0
    unsigned __int8 v10; // c3
    int v11;             // edx
    int v12;             // eax
    int v13;             // ebp
    int v14;             // ebx
    double v15;          // st7
    float v16;           // ecx
    float v17;           // edx
    float v18;           // edx
    float v19;           // eax
    double v20;          // st7
    __int64 v21;         // rax
    double v22;          // st7
    double v23;          // st7
    bool v24;            // cc
    float v25;           // [esp+0h] [ebp-84h]
    float v26;           // [esp+0h] [ebp-84h]
    int v27;             // [esp+14h] [ebp-70h]
    float v28;           // [esp+18h] [ebp-6Ch]
    int v29;             // [esp+1Ch] [ebp-68h]
    int v30;             // [esp+20h] [ebp-64h]
    int *v31;            // [esp+24h] [ebp-60h]
    float v32;           // [esp+28h] [ebp-5Ch]
    int *v33;            // [esp+2Ch] [ebp-58h]
    int v34;             // [esp+30h] [ebp-54h]
    int v35;             // [esp+34h] [ebp-50h]
    int v36;             // [esp+34h] [ebp-50h]
    _WORD *v37;          // [esp+38h] [ebp-4Ch]
    int v38;             // [esp+3Ch] [ebp-48h]
    float v39;           // [esp+40h] [ebp-44h]
    float v40;           // [esp+44h] [ebp-40h]
    int v41;             // [esp+48h] [ebp-3Ch]
    float v42;           // [esp+4Ch] [ebp-38h]
    int v43;             // [esp+50h] [ebp-34h] BYREF
    float v44;           // [esp+54h] [ebp-30h]
    float v45;           // [esp+58h] [ebp-2Ch]
    int v46[2];          // [esp+5Ch] [ebp-28h] BYREF
    float v47;           // [esp+64h] [ebp-20h]
    int v48;             // [esp+68h] [ebp-1Ch]
    float v49;           // [esp+6Ch] [ebp-18h]
    float v50;           // [esp+70h] [ebp-14h]
    int v51[4];          // [esp+74h] [ebp-10h] BYREF

    v38 = 0;
    if (*(_DWORD *)(this + 10572) &&
        (*(_BYTE *)(dword_106C7CA8 + 84 * *(unsigned __int16 *)(this + 10508) + 76) & 0x10) != 0) {
        v38 = 1;
    }
    if (!dword_106C6620 || (result = g_chosenTrack, g_chosenTrack == 2) || g_chosenTrack == 8) {
        v3 = *(float *)(this + 4144) - -50.0;
        v51[1] = this + 1404;
        v51[0] = this + 2452;
        v51[2] = this + 880;
        v51[3] = this + 1928;
        v42 = (1.0 - 50.0 / v3) * 3.0;
        v4 = sub_1003AC90((float *)this, (float *)(this + 4132));
        if (v4 < 0.0)
            v4 = -v4;
        v33 = v51;
        v37 = (_WORD *)(this + 9856);
        v5 = (_WORD *)(this + 8998);
        v6 = this + 4268;
        v27 = 0;
        v7 = (float *)(this + 4416);
        v35 = this + 8998;
        v31 = (int *)(this + 112);
        v29 = this + 4332;
        v34 = this + 4268;
        v40 = (1.0 - 25.0 / (25.0 - v4 * -2.24)) * 3.0;
        while (1) {
            v32 = *(float *)(v6 + 32) - *(float *)&dword_106C2CFC * -4.0;
            *(float *)(v6 + 32) = v32;
            if (v9 | v10) {
                v30 = 1;
                *(_DWORD *)(v6 + 48) = 0;
                v11 = 1;
            } else {
                v11 = 0;
                v30 = 0;
                if (v32 < 1.7)
                    *(_DWORD *)(v6 + 32) = 0;
                else
                    *(float *)(v6 + 32) = v32 - 1.0;
                *(_DWORD *)(v6 + 48) = 1;
            }
            v12 = *v33;
            if (*(_DWORD *)(*v33 + 436)) {
                *(_DWORD *)v6 = 1077936128;
                *(_DWORD *)(v6 + 16) = *(char *)(v12 + 416);
            } else if (*(float *)v6 != 0.0) {
                *(float *)v6 = *(float *)v6 - 1.0;
            }
            v13 = *(_DWORD *)(v6 + 16);
            if (*(float *)v6 == 0.0) {
            LABEL_52:
                sub_1003B090(v46);
                v18 = *((float *)v31 + 1);
                v19 = *((float *)v31 + 2);
                v43 = *v31;
                v44 = v18;
                v45 = v19;
                goto LABEL_53;
            }
            if (v11) {
                v28 = 1.5;
            } else if (v13 == 4) {
                v28 = 2.5;
            } else {
                if (v13 != 3 || !dword_106C6624 || v38)
                    goto LABEL_52;
                v28 = 1.5;
                *(_DWORD *)(v6 + 32) = 1089994752;
            }
            if (!v11) {
                sub_1003ACE0((int)v46, this + 32, v28);
                if (v13 == 3) {
                    sub_1003AD10((int)v46, v40);
                    if (v40 == 0.0)
                        goto LABEL_42;
                    if (v27 >= 2)
                        v47 = v47 + v47;
                    v14 = this + 16;
                    v15 = sub_1003AC90((float *)(this + 16), (float *)(this + 4132)) * 0.30000001;
                } else {
                    if (v27 && v27 < 3) {
                        v39 = -v28;
                        sub_1003B020((int)v46, this + 16, v39);
                    } else {
                        sub_1003B020((int)v46, this + 16, v28);
                    }
                    sub_1003AD10((int)v46, v42);
                    sub_1003B020((int)v46, this + 4132, 0.30000001);
                    v14 = this + 16;
                    v15 = sub_1003AC90((float *)(this + 16), (float *)(this + 4132)) * 0.5;
                }
                v25 = v15;
                sub_1003B020((int)v46, v14, v25);
                v5 = (_WORD *)v35;
            }
        LABEL_42:
            sub_1003AFE0((int)&v43, (int)v31, this + 32, -0.25);
            if (v13 != 3 || v27 < 2) {
                if (!v27 || (v41 = -1105618534, v27 >= 3))
                    v41 = 1041865114;
                sub_1003B020((int)&v43, this + 16, *(float *)&v41);
            }
            v48 = v43;
            v49 = v44;
            v50 = v45;
            if (!v30 && sub_1003B130((float *)&v43, (float *)v29) < 256.0) {
                v36 = (unsigned __int16)sub_1003BD50();
                v26 = (double)v36 * 0.000015259022 * ((double)v36 * 0.000015259022);
                sub_1003AFA0((int)&v43, v29, (int)&v43, v26);
            }
            v16 = v49;
            *(_DWORD *)v29 = v48;
            v17 = v50;
            *(float *)(v29 + 4) = v16;
            *(float *)(v29 + 8) = v17;
        LABEL_53:
            if (!v30) {
                v20 = *(float *)&v46[1] * 127.0;
                *v5 = (__int64)(*(float *)v46 * 127.0);
                v21 = (__int64)v20;
                v22 = v47 * 127.0;
                v5[1] = v21;
                v5[2] = (__int64)v22;
                if (v13 == 3 && dword_106C6624) {
                    *(v5 - 3) = *v5;
                    *(v5 - 2) = v5[1];
                } else {
                    *(v5 - 3) = (__int16)*v5 >> 1;
                    *(v5 - 2) = (__int16)v5[1] >> 1;
                }
                *(v5 - 1) = 0;
            }
            v23 = *(float *)&v43;
            *v37 = v13;
            *v7 = (float)(__int16)(__int64)((v23 - *(float *)(this + 9928)) * 127.0);
            v7[1] = (float)(__int16)(__int64)((v44 - *(float *)(this + 9932)) * 127.0);
            v5 += 108;
            v29 += 12;
            v7[2] = (float)(__int16)(__int64)((v45 - *(float *)(this + 9936)) * 127.0);
            v35 = (int)v5;
            *(v7 - 8) = *v7;
            *(v7 - 7) = v7[1];
            *(v7 - 6) = v7[2];
            result = v27 + 1;
            ++v33;
            v31 += 16;
            v7 += 288;
            v24 = ++v27 < 4;
            v34 += 4;
            v37 += 9;
            if (!v24)
                return result;
            v6 = v34;
        }
    }
    return result;
}
// 100394A1: conditional instruction was optimized away because of 'ebp.4!=3'
// 10039356: variable 'v9' is possibly undefined
// 10039356: variable 'v10' is possibly undefined
// 100B380C: using guessed type int g_chosenTrack;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 106C7CA8: using guessed type int dword_106C7CA8;
