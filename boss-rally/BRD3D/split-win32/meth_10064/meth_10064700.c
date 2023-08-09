#include "types-win32.h"
//----- (10064700) --------------------------------------------------------
void __thiscall meth_10064700(_DWORD *this) {
    _DWORD *v1;          // esi
    _DWORD *v2;          // ecx
    int *i;              // edi
    int v4;              // ebp
    double v5;           // st7
    int v6;              // ecx
    int v7;              // edx
    double v8;           // st7
    int v9;              // eax
    int *v10;            // edi
    double v11;          // st7
    _DWORD *v12;         // eax
    int v13;             // eax
    int v14;             // eax
    int v15;             // eax
    double v17;          // st7
    unsigned __int8 v18; // c0
    unsigned __int8 v19; // c3
    double v20;          // st7
    double v22;          // st6
    unsigned __int8 v23; // c0
    unsigned __int8 v24; // c3
    float *v25;          // ebx
    int v26;             // edi
    double v27;          // st7
    double v28;          // st7
    double v29;          // st7
    double v30;          // st6
    int v31;             // eax
    int v32;             // eax
    int v33;             // eax
    int v34;             // eax
    int v35;             // eax
    int v36;             // ebx
    int v37;             // edx
    int *v38;            // edi
    double v39;          // st7
    double v40;          // st6
    double v41;          // st7
    double v42;          // st7
    double v44;          // st7
    char v45;            // c0
    double v46;          // st7
    __int16 v47;         // ax
    double v48;          // st7
    double v49;          // st7
    int v50;             // edi
    double v51;          // st7
    int v52;             // ebx
    double v53;          // st7
    int v54;             // eax
    float v55;           // [esp+0h] [ebp-A0h]
    float v56;           // [esp+0h] [ebp-A0h]
    float v57;           // [esp+0h] [ebp-A0h]
    float v58;           // [esp+14h] [ebp-8Ch]
    float v59;           // [esp+14h] [ebp-8Ch]
    float v60;           // [esp+14h] [ebp-8Ch]
    float v61;           // [esp+18h] [ebp-88h]
    float v62;           // [esp+18h] [ebp-88h]
    float v63;           // [esp+18h] [ebp-88h]
    float v64;           // [esp+1Ch] [ebp-84h]
    float v65;           // [esp+1Ch] [ebp-84h]
    float v66;           // [esp+1Ch] [ebp-84h]
    float j;             // [esp+1Ch] [ebp-84h]
    float v68;           // [esp+20h] [ebp-80h]
    int v69;             // [esp+24h] [ebp-7Ch]
    float v70;           // [esp+24h] [ebp-7Ch]
    float k;             // [esp+24h] [ebp-7Ch]
    float v72;           // [esp+24h] [ebp-7Ch]
    float v73;           // [esp+24h] [ebp-7Ch]
    float v74;           // [esp+28h] [ebp-78h]
    float v75;           // [esp+2Ch] [ebp-74h]
    float v76;           // [esp+30h] [ebp-70h]
    int v77;             // [esp+34h] [ebp-6Ch] BYREF
    int v78;             // [esp+38h] [ebp-68h]
    int v79;             // [esp+3Ch] [ebp-64h]
    float v80[2];        // [esp+40h] [ebp-60h] BYREF
    float v81;           // [esp+48h] [ebp-58h]
    float v82[3];        // [esp+4Ch] [ebp-54h] BYREF
    float v83[3];        // [esp+58h] [ebp-48h] BYREF
    int v84[3];          // [esp+64h] [ebp-3Ch] BYREF
    float v85[3];        // [esp+70h] [ebp-30h] BYREF
    float v86[3];        // [esp+7Ch] [ebp-24h] BYREF
    float v87[3];        // [esp+88h] [ebp-18h] BYREF
    char v88[12];        // [esp+94h] [ebp-Ch] BYREF

    v1 = this;
    if ((*(_BYTE *)(this[960] + 104) & 1) != 0)
        goto LABEL_131;
    v2 = (_DWORD *)this[2672];
    if ((*v2 & 0x2000000) != 0) {
        v1[990] = 1;
        meth_10001970((#481 *)v1);
    }
    meth_DebugPrint(v2);
    i = (int *)v1[995];
    v4 = v1[996];
    v5 = sub_1003B170((float *)v1 + 1033);
    v6 = v1[996];
    v7 = v1[995];
    v8 = 20.0 - v5 * -3.0;
    v77 = *(_DWORD *)(v7 + 40 * v6 + 76);
    v78 = *(_DWORD *)(v7 + 40 * v6 + 80);
    v79 = *(_DWORD *)(v7 + 40 * v6 + 84);
    if (v8 > 80.0)
        v8 = 80.0;
    do {
        v9 = 5 * v4++;
        v8 = v8 - (*(float *)&i[2 * v9 + 25] - *(float *)&i[2 * v9 + 35]);
        if (v4 == *((unsigned __int16 *)i + 10)) {
            for (i = (int *)*i; (*((_BYTE *)i + 22) & 1) != 0; i = (int *)i[1])
                ;
            v4 = 0;
        }
    } while (v8 >= 0.0);
    v10 = &i[10 * v4 + 19];
    v77 = *v10;
    v78 = v10[1];
    v79 = v10[2];
    if (meth_10063FF0(v1, 0, v6, v7)) {
        sub_1003B050((float *)&dword_10AF9B28, (float *)&dword_10AF9B28, (float *)&dword_10ACDE98);
        if (*((float *)v1 + 963) == 0.0 && *((float *)v1 + 964) == 0.0 &&
            *((float *)v1 + 965) == 0.0) {
            v1[963] = dword_10AF9B28;
            v1[964] = dword_10AF9B2C;
            v1[965] = dword_10AF9B30;
        } else {
            v55 = *(float *)&dword_106C2CFC - -0.5;
            sub_1003AFA0((int)(v1 + 963), (int)(v1 + 963), (int)&dword_10AF9B28, v55);
        }
    }
    sub_1003AFA0((int)(v1 + 963), (int)(v1 + 963), (int)&v77, 0.40000001);
    v76 = sub_1003AC90((float *)v1 + 1033, (float *)v1);
    sub_1003ADA0(v82, (float *)v1 + 12, (float *)v1 + 963);
    v84[0] = 0;
    v84[1] = 0;
    v84[2] = 1065353216;
    sub_1003AC30(v83, (float *)v84, v82);
    sub_1003AC30((float *)v88, v82, v83);
    v64 = sub_1003AC90((float *)v1 + 4, v82);
    v11 = sub_1003AC90((float *)v1, v82);
    v12 = (_DWORD *)v1[2672];
    *((float *)v1 + 2506) = v11;
    *v12 |= 0x10000u;
    v13 = v1[995] + 40 * v1[996];
    sub_1003ADA0((float *)v1 + 969, (float *)(v13 + 76), (float *)(v13 + 116));
    v14 = v1[995] + 40 * v1[996];
    sub_1003AEE0((float *)v1 + 972, (float *)(v14 + 64), (float *)(v14 + 88));
    sub_1003AC30((float *)v1 + 975, (float *)v1 + 969, (float *)v1 + 972);
    sub_1003AE50((float *)v1 + 975);
    sub_1003AC30((float *)v1 + 972, (float *)v1 + 975, (float *)v1 + 969);
    sub_1003AE50((float *)v1 + 972);
    sub_1003AEE0((float *)v1 + 979, (float *)v1 + 12, (float *)(v1[995] + 40 * v1[996] + 76));
    sub_1003B020((int)(v1 + 979), (int)(v1 + 1033), 0.40000001);
    v74 = sub_1003AC90((float *)v1 + 972, (float *)v1 + 979);
    v68 = 0.0;
    v58 = sub_1003AC90((float *)v1, (float *)v1 + 972);
    dword_10AF9888 = 0;
    dword_10AF9BA4 = 0;
    if (v74 >= 0.0)
        v61 = v74;
    else
        v61 = -v74;
    v15 = v1[995] + 40 * v1[996];
    sub_1003AEE0(v87, (float *)(v15 + 64), (float *)(v15 + 76));
    v75 = sub_1003AC90((float *)v1 + 972, v87);
    v17 = v75;
    if (v18 | v19)
        v20 = v17 * 0.40000001;
    else
        v20 = v17 - 3.0;
    if (v61 > v20) {
        v22 = v58;
        if (v23 | v24) {
            if (v22 >= 0.05) {
                if (v58 > 0.15) {
                    dword_10AF9888 = 0;
                    dword_10AF9BA4 = 1;
                    v68 = (v61 - v20) / v61 * (v58 * 0.30000001) - -0.1;
                }
            } else {
                dword_10AF9888 = 1;
                dword_10AF9BA4 = 0;
                v68 = (v61 - v20) / v61 * (v58 * 0.2) - -0.029999999;
            }
        } else if (v22 <= -0.05) {
            if (v58 < -0.15) {
                dword_10AF9888 = 1;
                dword_10AF9BA4 = 0;
                v68 = (v61 - v20) / v61 * (v58 * -0.30000001) - -0.1;
            }
        } else {
            dword_10AF9888 = 0;
            dword_10AF9BA4 = 1;
            v68 = (v61 - v20) / v61 * (v58 * -0.2) - -0.029999999;
        }
        goto LABEL_27;
    }
    if (sub_1003B170((float *)v1 + 1033) <= 10.0)
        goto LABEL_27;
    v49 = sub_1003AC90((float *)v1 + 1033, (float *)v1 + 972);
    if (v49 <= 0.1)
        v50 = v49 >= -0.1 ? 0 : -1;
    else
        v50 = 1;
    v51 = sub_1003AC90((float *)v1 + 16, v83);
    if (v51 <= 0.1)
        v52 = v51 >= -0.1 ? 0 : -1;
    else
        v52 = 1;
    v53 = sub_1003AC90((float *)v1, v83);
    if (v53 <= 0.1)
        v54 = v53 >= -0.1 ? 0 : -1;
    else
        v54 = 1;
    if (!v50 && !v54)
        goto LABEL_27;
    if (!v50)
        goto LABEL_178;
    if (!(v54 + v50)) {
        if (v50 == 1 && v52 == 1) {
            dword_10AF9BA4 = 0;
            dword_10AF9888 = 1;
            v68 = 0.1;
        } else {
            if (v50 == -1 && v52 == -1) {
                dword_10AF9BA4 = 1;
                dword_10AF9888 = 0;
            }
            v68 = 0.1;
        }
        goto LABEL_27;
    }
    if (v50 != v54) {
    LABEL_178:
        if (v52)
            goto LABEL_179;
        if (!v54)
            goto LABEL_27;
        if (v50) {
        LABEL_179:
            if (v52 == v54) {
                if (v52 == 1) {
                    dword_10AF9BA4 = 1;
                    dword_10AF9888 = 0;
                    v68 = 0.5;
                } else {
                    if (v52 == -1) {
                        dword_10AF9BA4 = 0;
                        dword_10AF9888 = 1;
                    }
                    v68 = 0.5;
                }
            } else if (v52 && !(v50 + v52)) {
                goto LABEL_27;
            }
        }
        *(_DWORD *)v1[2672] &= 0xFFFEFFFF;
        goto LABEL_27;
    }
    if (v50 == 1 && v52 == 1) {
        dword_10AF9BA4 = 1;
        dword_10AF9888 = 0;
        v68 = 0.40000001;
    } else {
        if (v50 == -1 && v52 == -1) {
            dword_10AF9BA4 = 0;
            dword_10AF9888 = 1;
        }
        v68 = 0.40000001;
    }
LABEL_27:
    v62 = 1.0;
    if (dword_10AA34AC > 0) {
        v69 = 1;
        v25 = (float *)&unk_10AF96D4;
        v26 = 0;
        while (1) {
            sub_1003AEE0(v85,
                         (float *)((char *)&unk_10AF9658 + v26),
                         (float *)((char *)&unk_10AF96C8 + v26));
            sub_1003AEE0(v86, v25, (float *)((char *)&unk_10AF96C8 + v26));
            sub_1003AC30(v80, v86, v85);
            sub_1003AE50(v80);
            v59 = sub_1003AC90((float *)v1 + 1033, v80);
            v27 = sub_1003AC90((float *)v1 + 1033, v85) * 0.029999999;
            if (v27 <= v59) {
                if (v27 < -v59)
                    v59 = -v27;
            } else {
                v59 = v27;
            }
            v28 = (double)v69;
            if (v59 > v28 * 6.0) {
                v62 = 2.0;
                *(_DWORD *)v1[2672] &= 0xFFFEFFFF;
                *(_DWORD *)v1[2672] |= 0x40000u;
                goto LABEL_41;
            }
            if (v28 * 4.5 < v59) {
                v62 = 2.0;
                *(_DWORD *)v1[2672] &= 0xFFFEFFFF;
                goto LABEL_41;
            }
            if (v28 * 3.0 < v59)
                break;
            v26 += 12;
            v25 += 3;
            if (v69++ >= dword_10AA34AC)
                goto LABEL_41;
        }
        v62 = 1.3;
    }
LABEL_41:
    if (sub_1003B170((float *)v1 + 1033) <= 10.0) {
        v29 = v64;
    } else {
        v29 = v62 * v64;
        if (v29 <= 1.0) {
            if (v29 >= -1.0)
                goto LABEL_48;
            v29 = -1.0;
        } else {
            v29 = 1.0;
        }
        *(_DWORD *)v1[2672] &= 0xFFFEFFFF;
    }
LABEL_48:
    if (v68 < 0.0099999998)
        v68 = 0.0099999998;
    v65 = 0.2 / v68;
    if (v29 >= 0.0) {
        if (dword_10AF9888) {
            if (v29 <= v65)
                v29 = v29 - -0.2;
            else
                v29 = v29 * (v68 - -1.0);
        } else if (dword_10AF9BA4) {
            if (v29 <= v65)
                v29 = v29 - 0.2;
            else
                v29 = v29 - v68 * v29;
        }
        v30 = 1.0 - (1.0 - v29) * (1.0 - v29) * (1.0 - v29) * (1.0 - v29);
    } else {
        if (dword_10AF9888) {
            if (v29 >= -v65)
                v29 = v29 - -0.2;
            else
                v29 = v29 - v68 * v29;
        } else if (dword_10AF9BA4) {
            if (v29 >= -v65)
                v29 = v29 - 0.2;
            else
                v29 = v29 * (v68 - -1.0);
        }
        v30 = (v29 - -1.0) * (v29 - -1.0) * (v29 - -1.0) * (v29 - -1.0) - 1.0;
    }
    v66 = v30;
    v70 = sub_1003B170((float *)v1 + 1033);
    if (*((float *)v1 + 2506) < 0.0) {
        v32 = v1[936];
        if (!v32) {
            if (v76 <= 1.0)
                goto LABEL_81;
            goto LABEL_80;
        }
        v1[936] = v32 - 1;
    LABEL_76:
        *(float *)(v1[2672] + 32) = -v66;
        v33 = v1[939] + 1;
        v1[939] = v33;
        if (v33 <= 30 || v70 >= 1.0)
            goto LABEL_92;
        v1[937] = 60;
        goto LABEL_91;
    }
    v31 = v1[937];
    if (v31) {
        v1[937] = v31 - 1;
    LABEL_81:
        *(_DWORD *)v1[2672] |= 0x10000u;
        if (v66 >= 0.0)
            *(_DWORD *)(v1[2672] + 32) = 1065353216;
        else
            *(_DWORD *)(v1[2672] + 32) = -1082130432;
        *(_DWORD *)v1[2672] |= 0x20000u;
        v34 = v1[938];
        if (v34 > 150) {
            if (v34 <= 270)
                *(float *)(v1[2672] + 32) = *(float *)(v1[2672] + 32) * -1.0;
            else
                v1[938] = 30;
        }
        v35 = v1[938] + 1;
        v1[938] = v35;
        if (v35 <= 30 || v70 >= 1.0)
            goto LABEL_92;
        v1[936] = 60;
    LABEL_91:
        v1[938] = 0;
        v1[939] = 0;
        goto LABEL_92;
    }
    if (v76 >= -1.0)
        goto LABEL_76;
LABEL_80:
    *(_DWORD *)v1[2672] |= 0x40000u;
LABEL_92:
    meth_10064350(v1);
    v36 = -1;
    v37 = 0;
    v63 = 90.0;
    v60 = 0.0;
    if (dword_100B36F8 > 0) {
        v38 = &dword_10ACD4F8;
        do {
            this = (_DWORD *)*v38;
            if (!*v38 || this == v1)
                goto LABEL_109;
            v39 = *((float *)this + 1021) - *((float *)v1 + 1021);
            for (j = *(float *)(dword_106C7CB8 + 100); v39 > j; v39 = v39 - j)
                ;
            for (k = -j; v39 < k; v39 = v39 + j)
                ;
            if (v39 <= 0.0 || v39 >= v63)
                goto LABEL_109;
            v40 = *((float *)this + 982) - v74;
            v63 = v39;
            if (v40 >= 3.0) {
                if (v40 > -3.0) {
                    v42 = (1.0 - v39 * 0.011111111) * 10.0;
                    v60 = v42;
                    if (v42 > 5.0)
                        v60 = 5.0;
                LABEL_108:
                    v36 = v37;
                    goto LABEL_109;
                }
            } else {
                v41 = (1.0 - v39 * 0.011111111) * -10.0;
                v60 = v41;
                if (v41 >= -5.0)
                    goto LABEL_108;
                v60 = -5.0;
                v36 = v37;
            }
        LABEL_109:
            ++v37;
            v38 += 32;
        } while (v37 < dword_100B36F8);
    }
    if (v36 != -1) {
        v74 = v60 + v74;
        v44 = v74;
        if (v45)
            v44 = -v44;
        *((float *)v1 + 978) = v44;
    }
    if (v76 > 3.0) {
        if (*((float *)v1 + 978) < v75 - -1.0) {
            v46 = (v76 - 3.0) * 0.015625;
            if (v46 < 0.0)
                v46 = v46 * -0.25;
            if (v46 > 0.40000001)
                v46 = 0.40000001;
            v72 = v46 * v74;
            v80[0] = sub_1003AC90((float *)v1 + 122, (float *)v1 + 969);
            sub_1003AC90((float *)v1 + 122, (float *)v1 + 972);
            v81 = sub_1003AC90((float *)v1 + 122, (float *)v1 + 975);
            sub_1003ACE0((int)(v1 + 122), (int)(v1 + 969), v80[0]);
            v56 = -v72;
            sub_1003B020((int)(v1 + 122), (int)(v1 + 972), v56);
            sub_1003B020((int)(v1 + 122), (int)(v1 + 975), v81);
        }
        if (gGameMode) {
            if (gGameMode == GAME_MODE_1 || gGameMode == GAME_MODE_6) {
                v47 = gChosenWeather1 - 1;
                if ((__int16)(gChosenWeather1 - 1) > 2 || v47 < 0)
                    v47 = 0;
                if (v47 == 2)
                    sub_1003AD10((int)(v1 + 122), 0.99000001);
                else
                    sub_1003AD10((int)(v1 + 122), 0.99900001);
            }
        } else {
            sub_1003AD10((int)(v1 + 122),
                         dword_100B38A0[8 * *((unsigned __int8 *)dword_10ACED34 + 4) +
                                        2 * *((unsigned __int8 *)dword_10ACED34 + 5) +
                                        *(_DWORD *)(v1[960] + 116)]);
        }
    }
LABEL_131:
    meth_DebugPrint(this);
    v48 = sub_1003B170((float *)v1 + 129);
    if (v48 > 1.0 && v1[329]) {
        v73 = v48;
        v57 = 1.0 / v73;
        sub_1003AD10((int)(v1 + 129), v57);
    }
    meth_10075F10((int)v1);
    meth_10063660(v1);
}
// 10065556: conditional instruction was optimized away because of 'edi.4 in (==1|==FFFFFFFF)'
// 100655B4: conditional instruction was optimized away because of 'ebx.4==0'
// 10064751: variable 'v2' is possibly undefined
// 10064AE5: variable 'v18' is possibly undefined
// 10064AE5: variable 'v19' is possibly undefined
// 10064B19: variable 'v23' is possibly undefined
// 10064B19: variable 'v24' is possibly undefined
// 10065153: variable 'v45' is possibly undefined
// 100652CD: variable 'this' is possibly undefined
// 100B36F8: using guessed type int dword_100B36F8;
// 104BBE08: using guessed type int gChosenWeather1;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10AA34AC: using guessed type int dword_10AA34AC;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
// 10ACDE98: using guessed type int dword_10ACDE98;
// 10AF9888: using guessed type int dword_10AF9888;
// 10AF9B28: using guessed type int dword_10AF9B28;
// 10AF9B2C: using guessed type int dword_10AF9B2C;
// 10AF9B30: using guessed type int dword_10AF9B30;
// 10AF9BA4: using guessed type int dword_10AF9BA4;
