#include "types-n64.h"
//----- (80222050) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80222050(int a1) {
    int v1;       // $a2
    float v2;     // $f16
    float v3;     // $f14
    float v4;     // $f2
    float v5;     // $f0
    float v6;     // $f0
    float v7;     // $f0
    float *v8;    // $a3
    float v9;     // $f16
    float v10;    // $f2
    float v11;    // $f14
    float v12;    // $f0
    float v13;    // $f18
    float v14;    // $f0
    float v15;    // $f18
    bool v16;     // $fcc0
    int v17;      // $v0
    float v18;    // $f18
    int v19;      // $v1
    float v20;    // $f12
    float v21;    // $f0
    float v22;    // $f14
    float v23;    // $f0
    float v24;    // $f2
    bool v25;     // $fcc0
    bool v26;     // $fcc0
    float v27;    // $f16
    float v28;    // $f12
    bool v29;     // $fcc0
    float v30;    // $f0
    _BOOL2 v31;   // $v0
    float v32;    // $f4
    bool v33;     // $fcc0
    int v34;      // $v1
    float v35;    // $f16
    bool v36;     // $fcc0
    bool v37;     // $fcc0
    float v38;    // $f0
    float v39;    // $f12
    bool v40;     // $fcc0
    float v41;    // $f0
    int v42;      // $a0
    int v43;      // $v0
    int v44;      // $v0
    int v45;      // $t3
    int *v46;     // $t8
    int v47;      // $v1
    int v48;      // $t4
    int *v49;     // $t3
    int *v50;     // $t9
    float v51;    // $f2
    float v52;    // $f0
    int v53;      // $t6
    int result;   // $v0
    float v55;    // $f2
    float v56;    // $f12
    float v57;    // $f0
    float v58;    // $f6
    float v59;    // $f0
    _DWORD *v60;  // $t4
    float v61;    // [sp+34h] [-54h]
    float v62;    // [sp+38h] [-50h]
    float v63;    // [sp+50h] [-38h]
    float v64;    // [sp+60h] [-28h]
    float v65[4]; // [sp+64h] [-24h] BYREF
    float v66;    // [sp+74h] [-14h]
    float v67;    // [sp+78h] [-10h]
    float v68;    // [sp+80h] [-8h]
    float v69;    // [sp+84h] [-4h]
    float *v70;   // [sp+88h] [+0h]
    float *v72;   // [sp+88h] [+0h]
    float *v73;   // [sp+88h] [+0h]

    v1 = *(_DWORD *)(a1 + 8308);
    v2 = *(float *)(v1 + 32);
    if (*(_BYTE *)(v1 + 37) == 4) {
        if (v2 < 0.0)
            v3 = -v2;
        else
            v3 = v2;
        if (v2 == 0.0) {
            v4 = 0.0;
        } else if (v2 > 0.0) {
            v4 = 1.0;
        } else {
            v4 = -1.0;
        }
        v70 = (float *)a1;
        v61 = v4;
        v67 = v3;
        v62 = sub_80261140(v3);
        v5 = sub_80261140(v67);
        v6 = sub_80261140(v5 * v67);
        v7 = sub_80261140(v6 * v62);
        v8 = v70;
        v70[892] = (float)((float)((float)-(float)(v7 * v61) * 10.0) * 3.1415927) / 180.0;
        goto LABEL_114;
    }
    if (v2 <= 0.0) {
        v9 = v2 + 0.07;
        if (v9 > 0.0)
            v9 = 0.0;
        v10 = *(float *)(a1 + 460);
    } else {
        v9 = v2 - 0.07;
        if (v9 < 0.0)
            v9 = 0.0;
        v10 = *(float *)(a1 + 460);
    }
    v11 = *(float *)(a1 + 464);
    v12 = *(float *)(a1 + 468);
    v13 = *(float *)(a1 + 4068);
    v68 = v9;
    v66 = v13;
    sub_80261140((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11)));
    sub_802586C0(v65, (float *)(a1 + 516), (float *)(a1 + 460));
    v14 = v65[0];
    v8 = (float *)a1;
    v15 = v66;
    if (v65[0] < 10.0)
        v14 = 10.0;
    if (v14 > 70.0)
        v14 = 70.0;
    if (v66 < 140.0) {
        v15 = 140.0;
        v16 = 140.0 > 340.0;
    } else {
        v16 = v66 > 340.0;
    }
    if (v16)
        v15 = 340.0;
    v17 = *(_DWORD *)(a1 + 3688);
    v18 = v15 - 140.0;
    v19 = 1;
    if (v17) {
        if (v17 == 1) {
            flt_8028B720 = 14.0;
            flt_8028B724 = 0.0099999998;
            flt_8028B728 = 6.0;
            flt_8028B72C = 10.0;
            word_8028B730 = 0;
            v19 = 0;
            v64 = 3.0;
        } else if (v17 == 2) {
            flt_8028B720 = 17.0;
            flt_8028B724 = 0.1;
            flt_8028B728 = 16.0;
            flt_8028B72C = 14.0;
            word_8028B730 = 0;
            v19 = 0;
            v64 = 6.0;
        }
    } else {
        flt_8028B720 = 14.0;
        flt_8028B724 = 0.0099999998;
        flt_8028B728 = 6.0;
        flt_8028B72C = 10.0;
        word_8028B730 = 0;
        v19 = 0;
        v64 = 6.0;
    }
    v69 = 0.0099999998;
    v20 = 14.0 - (float)((float)(v14 / 90.0) * 10.0);
    if (v68 < 0.0)
        v21 = -v68;
    else
        v21 = v68;
    if (v21 >= 0.001) {
        if (v68 >= -0.75) {
            if (v68 > 0.75) {
                v24 = (float)((float)-v20 * 3.1415927) / 180.0;
                v23 = (float)(v20 * 3.1415927) / 180.0;
                v22 = v24;
            } else {
                v22 =
                    (float)-v68 *
                    (float)((float)((float)(v64 - (float)((float)((float)v19 * (float)(v64 / 2.0)) *
                                                          (float)(v18 / 200.0))) *
                                    3.1415927) /
                            180.0);
                v23 = (float)(v20 * 3.1415927) / 180.0;
                v24 = (float)((float)-v20 * 3.1415927) / 180.0;
            }
        } else {
            v23 = (float)(v20 * 3.1415927) / 180.0;
            v24 = (float)((float)-v20 * 3.1415927) / 180.0;
            v22 = v23;
        }
    } else {
        v22 = 0.0;
        v23 = (float)(v20 * 3.1415927) / 180.0;
        v24 = (float)((float)-v20 * 3.1415927) / 180.0;
    }
    if (v23 < v22) {
        v22 = v23;
        v25 = v23 < v24;
    } else {
        v25 = v22 < v24;
    }
    if (v25) {
        v22 = v24;
        v26 = v24 == 0.0;
    } else {
        v26 = v22 == 0.0;
    }
    if (v26) {
        v27 = 0.0;
        v28 = *(float *)(a1 + 3568);
    } else {
        if (v22 > 0.0)
            v27 = 1.0;
        else
            v27 = -1.0;
        v28 = *(float *)(a1 + 3568);
    }
    if (0.0 == v28) {
        v29 = 0.0 == v27;
    } else {
        if (v28 > 0.0)
            v30 = 1.0;
        else
            v30 = -1.0;
        v29 = v30 == v27;
    }
    v31 = !v29;
    if (!v29)
        goto LABEL_75;
    if (v28 <= 0.0) {
        v32 = 0.0;
    LABEL_70:
        v31 = v28 < v32;
        if (v28 >= v32) {
            v33 = 0.0 == v28;
            goto LABEL_76;
        }
        v31 = 0;
        if (v28 >= v22) {
            v33 = 0.0 == v28;
            goto LABEL_76;
        }
        v31 = 1;
    LABEL_75:
        v33 = 0.0 == v28;
        goto LABEL_76;
    }
    v31 = v22 < v28;
    if (v22 >= v28) {
        v32 = 0.0;
        goto LABEL_70;
    }
    v33 = 0.0 == v28;
LABEL_76:
    v34 = v31;
    if (v33) {
        v34 = 0;
        *(_BYTE *)(a1 + 3665) = 0;
        v28 = *(float *)(a1 + 3568);
    }
    if (v22 < v28 && *(char *)(a1 + 3665) < 0)
        v34 = 1;
    if (v28<v22 &&*(char *)(a1 + 3665)> 0)
        v34 = 1;
    if (v34) {
        if (v22 >= v28)
            *(_BYTE *)(a1 + 3665) = 1;
        else
            *(_BYTE *)(a1 + 3665) = -1;
        v69 = 1.0;
        v39 = *(float *)(a1 + 3568);
        if (0.0 == v39) {
            v35 = 0.0;
            v36 = v22 == 0.0;
        } else {
            if (v39 > 0.0)
                v35 = 1.0;
            else
                v35 = -1.0;
            v36 = v22 == 0.0;
        }
        if (v36) {
            v37 = 0.0 == v35;
        } else {
            if (v22 > 0.0)
                v38 = 1.0;
            else
                v38 = -1.0;
            v37 = v38 == v35;
        }
        if (v37) {
            v40 = v39 < v22;
        } else {
            v22 = 0.0;
            v40 = v39 < 0.0;
        }
    } else {
        *(_BYTE *)(a1 + 3665) = 0;
        v39 = *(float *)(a1 + 3568);
        v40 = v39 < v22;
    }
    if (v40)
        v41 = -(float)(v39 - v22);
    else
        v41 = v39 - v22;
    if (v41 >= v69) {
        if (v22 < v39)
            *(float *)(a1 + 3568) = v39 - v69;
        else
            *(float *)(a1 + 3568) = v39 + v69;
    } else {
        *(float *)(a1 + 3568) = v22;
    }
LABEL_114:
    v63 = v8[893];
    if (v63 < 800.0)
        v8[893] = 800.0;
    v42 = *((_DWORD *)v8 + 908);
    if (v42) {
        v44 = *((_DWORD *)v8 + 912);
        if (v44 < 2) {
            v45 = *((_DWORD *)v8 + 906);
        } else {
            if (v8[893] < 4000.0) {
                *((_DWORD *)v8 + 912) = v44 - 1;
                v42 = *((_DWORD *)v8 + 908);
                goto LABEL_129;
            }
            v45 = *((_DWORD *)v8 + 906);
        }
        if (v44 < v45) {
            if (v8[893] <= 6000.0) {
                v46 = (int *)*((_DWORD *)v8 + 2077);
            LABEL_130:
                v47 = *v46;
                goto LABEL_140;
            }
            if ((**((_DWORD **)v8 + 2077) & 0x20000) != 0) {
                v46 = (int *)*((_DWORD *)v8 + 2077);
                goto LABEL_130;
            }
            *((_DWORD *)v8 + 912) = v44 + 1;
            v42 = *((_DWORD *)v8 + 908);
        }
    LABEL_129:
        v46 = (int *)*((_DWORD *)v8 + 2077);
        goto LABEL_130;
    }
    v43 = *((_DWORD *)v8 + 912);
    if (v43 > 0) {
        if ((**((_DWORD **)v8 + 2077) & 0x200000) != 0) {
            v72 = v8;
            sub_80255910(*((int **)v8 + 2077), 0x200000);
            v8 = v72;
            v49 = (int *)*((_DWORD *)v72 + 2077);
            v42 = *((_DWORD *)v72 + 908);
            --*((_DWORD *)v72 + 912);
            v47 = *v49;
            goto LABEL_140;
        }
        v48 = *((_DWORD *)v8 + 906);
    } else {
        v48 = *((_DWORD *)v8 + 906);
    }
    v47 = **((_DWORD **)v8 + 2077);
    if (v43 < v48 && (v47 & 0x100000) != 0 && (v47 & 0x20000) == 0) {
        v73 = v8;
        sub_80255910(*((int **)v8 + 2077), 0x100000);
        v8 = v73;
        v50 = (int *)*((_DWORD *)v73 + 2077);
        v42 = *((_DWORD *)v73 + 908);
        ++*((_DWORD *)v73 + 912);
        v47 = *v50;
    }
LABEL_140:
    v51 = v8[893];
    v52 = (float)((float)((float)((float)((float)((float)(v8[901] * v51) * v51) * v51) +
                                  (float)((float)(v8[902] * v51) * v51)) +
                          (float)(v8[903] * v51)) +
                  v8[904]) +
          0.0;
    if (!v42)
        v52 = v52 * 1.03;
    if ((v47 & 0x10000) == 0)
        v52 = 0.0;
    v53 = *((_DWORD *)v8 + 948);
    result = 0;
    v8[910] = v52 * 7.0;
    if ((*(_DWORD *)(v53 + 104) & 1) != 0) {
        v8[912] = 0.0;
    } else {
        result = *((_DWORD *)v8 + 912);
        if (!result) {
            *((_DWORD *)v8 + 912) = 1;
            result = 1;
        }
    }
    if (result) {
        v8[893] = v8[result + 894] *
                  (float)((float)((float)-(float)(v8[455] / 6.2831855) * 60.0) * v8[905]);
    } else {
        if ((**((_DWORD **)v8 + 2077) & 0x10000) != 0)
            v8[893] = v8[893] + 300.0;
        else
            v8[893] = v8[893] - 200.0;
        v8[910] = 0.0;
    }
    v55 = v8[893];
    if (v55 < 0.0) {
        v8[893] = -v55;
        v55 = v8[893];
    }
    if (v55 < 900.0) {
        v8[893] = 900.0;
        v55 = v8[893];
    }
    if (v55 > 8000.0) {
        v8[893] = 8000.0;
        v55 = v8[893];
    }
    v56 = v55 - v63;
    if ((float)(v55 - v63) < 0.0)
        v57 = -v56;
    else
        v57 = v56;
    if (v57 > 400.0) {
        if (v56 == 0.0) {
            v59 = 0.0;
        } else if (v56 > 0.0) {
            v59 = 1.0;
        } else {
            v59 = -1.0;
        }
        v58 = v63 + (float)(v59 * 400.0);
    } else {
        v58 = v63 + v56;
    }
    v60 = (_DWORD *)*((_DWORD *)v8 + 2077);
    v8[911] = 0.0;
    v8[893] = v58;
    if ((*v60 & 0x40000) != 0)
        v8[911] = -140000.0;
    return result;
}
// 802222BC: write access to const memory at 8028B720 has been detected
// 802222D0: write access to const memory at 8028B724 has been detected
// 802222E8: write access to const memory at 8028B72C has been detected
// 80222314: write access to const memory at 8028B720 has been detected
// 80222328: write access to const memory at 8028B724 has been detected
// 80222340: write access to const memory at 8028B72C has been detected
// 8022236C: write access to const memory at 8028B720 has been detected
// 80222380: write access to const memory at 8028B724 has been detected
// 8022239C: write access to const memory at 8028B72C has been detected
// 802222E4: write access to const memory at 8028B728 has been detected
// 802222F4: write access to const memory at 8028B730 has been detected
// 8022233C: write access to const memory at 8028B728 has been detected
// 8022234C: write access to const memory at 8028B730 has been detected
// 80222398: write access to const memory at 8028B728 has been detected
// 802223A8: write access to const memory at 8028B730 has been detected
// 80222534: variable 'v64' is possibly undefined
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B720: using guessed type float flt_8028B720;
// 8028B724: using guessed type float flt_8028B724;
// 8028B728: using guessed type float flt_8028B728;
// 8028B72C: using guessed type float flt_8028B72C;
// 8028B730: using guessed type __int16 word_8028B730;
