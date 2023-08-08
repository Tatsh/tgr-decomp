#include "types-n64.h"
//----- (8025D368) --------------------------------------------------------
int __fastcall sub_8025D368(int a1) {
    int v2;     // $v0
    int v3;     // $v0
    float v4;   // $f0
    double v5;  // $f0
    float v6;   // $f4
    float v7;   // $f2
    double v8;  // $f0
    float v9;   // $f8
    float v10;  // $f4
    float v11;  // $f6
    float v12;  // $f16
    float v13;  // $f2
    int v14;    // $v0
    float v15;  // $f0
    double v16; // $f0
    float v17;  // $f6
    float v18;  // $f2
    double v19; // $f0
    float v20;  // $f10
    float v21;  // $f6
    float v22;  // $f8
    float v23;  // $f18
    float v24;  // $f2
    int v25;    // $v0
    float v26;  // $f0
    double v27; // $f0
    float v28;  // $f8
    float v29;  // $f2
    double v30; // $f0
    float v31;  // $f16
    float v32;  // $f8
    float v33;  // $f10
    float v34;  // $f4
    float v35;  // $f2
    int v36;    // $a3
    BOOL v37;   // $at
    float v38;  // $f0
    double v39; // $f0
    float v40;  // $f18
    float v41;  // $f2
    double v42; // $f0
    float v43;  // $f6
    float v44;  // $f8
    float v45;  // $f4
    float v46;  // $f2
    float v48;  // $f0
    float v49;  // $f6
    float v50;  // $f10
    float v51;  // $f16
    float v52;  // $f6
    float v53;  // $f4
    float v54;  // $f10
    float v55;  // $f16
    float v56;  // $f6
    float *v57; // [sp+30h] [-50h]
    float *v58; // [sp+30h] [-50h]
    float *v59; // [sp+30h] [-50h]
    float *v60; // [sp+30h] [-50h]
    float *v61; // [sp+34h] [-4Ch]
    float *v62; // [sp+38h] [-48h]
    float v63;  // [sp+54h] [-2Ch]
    float v64;  // [sp+58h] [-28h]
    float v65;  // [sp+5Ch] [-24h] BYREF
    float v66;  // [sp+60h] [-20h]
    float v67;  // [sp+64h] [-1Ch]
    float v68;  // [sp+68h] [-18h] BYREF
    float v69;  // [sp+6Ch] [-14h]
    float v70;  // [sp+70h] [-10h]
    float *v71; // [sp+78h] [-8h]
    int v72;    // [sp+7Ch] [-4h]

    v62 = (float *)(a1 + 188);
    v61 = (float *)(a1 + 276);
    sub_802583DC(a1 + 188, a1 + 276);
    v63 = 100.0;
    v2 = *(_DWORD *)(a1 + 4);
    v72 = 0;
    if (*(_DWORD *)(v2 + 436)) {
        v4 = *(float *)(v2 + 120);
        if (0.0 == v4) {
            v5 = 0.0;
        } else if (v4 > 0.0) {
            v5 = 1.0;
        } else {
            v5 = -1.0;
        }
        v6 = v5 * (float)(*(float *)(a1 + 476) * 0.5);
        v68 = v6;
        v7 = *(float *)(v2 + 124);
        if (0.0 == v7) {
            v8 = 0.0;
            v9 = *(float *)(a1 + 480);
        } else {
            if (v7 > 0.0)
                v8 = 1.0;
            else
                v8 = -1.0;
            v9 = *(float *)(a1 + 480);
        }
        v10 = v8 * (float)(v9 * 0.5);
        v69 = v10;
        v11 = *(float *)(a1 + 484);
        v12 = *(float *)(a1 + 488);
        v72 = 1;
        v71 = (float *)v2;
        v70 = (float)((float)-v11 * 0.5) + v12;
        sub_802587E8(&v65, v62, &v68);
        v57 = v71 + 105;
        if (sub_8025B704(v71 + 105, v71[108], &v65) >= 0.0)
            v13 = sub_8025B704(v57, v71[108], &v65);
        else
            v13 = -sub_8025B704(v57, v71[108], &v65);
        if (v13 <= 100.0)
            v63 = v13;
        v3 = *(_DWORD *)(a1 + 8);
    } else {
        v3 = *(_DWORD *)(a1 + 8);
    }
    if (*(_DWORD *)(v3 + 436)) {
        v15 = *(float *)(v3 + 120);
        if (0.0 == v15) {
            v16 = 0.0;
        } else if (v15 > 0.0) {
            v16 = 1.0;
        } else {
            v16 = -1.0;
        }
        v17 = v16 * (float)(*(float *)(a1 + 476) * 0.5);
        v68 = v17;
        v18 = *(float *)(v3 + 124);
        if (0.0 == v18) {
            v19 = 0.0;
            v20 = *(float *)(a1 + 480);
        } else {
            if (v18 > 0.0)
                v19 = 1.0;
            else
                v19 = -1.0;
            v20 = *(float *)(a1 + 480);
        }
        v21 = v19 * (float)(v20 * 0.5);
        v69 = v21;
        v22 = *(float *)(a1 + 484);
        v23 = *(float *)(a1 + 488);
        ++v72;
        v71 = (float *)v3;
        v70 = (float)((float)-v22 * 0.5) + v23;
        sub_802587E8(&v65, v62, &v68);
        v58 = v71 + 105;
        if (sub_8025B704(v71 + 105, v71[108], &v65) >= 0.0)
            v24 = sub_8025B704(v58, v71[108], &v65);
        else
            v24 = -sub_8025B704(v58, v71[108], &v65);
        if (v63 >= v24)
            v63 = v24;
        v14 = *(_DWORD *)(a1 + 12);
    } else {
        v14 = *(_DWORD *)(a1 + 12);
    }
    if (*(_DWORD *)(v14 + 436)) {
        v26 = *(float *)(v14 + 120);
        if (0.0 == v26) {
            v27 = 0.0;
        } else if (v26 > 0.0) {
            v27 = 1.0;
        } else {
            v27 = -1.0;
        }
        v28 = v27 * (float)(*(float *)(a1 + 476) * 0.5);
        v68 = v28;
        v29 = *(float *)(v14 + 124);
        if (0.0 == v29) {
            v30 = 0.0;
            v31 = *(float *)(a1 + 480);
        } else {
            if (v29 > 0.0)
                v30 = 1.0;
            else
                v30 = -1.0;
            v31 = *(float *)(a1 + 480);
        }
        v32 = v30 * (float)(v31 * 0.5);
        v69 = v32;
        v33 = *(float *)(a1 + 484);
        v34 = *(float *)(a1 + 488);
        ++v72;
        v71 = (float *)v14;
        v70 = (float)((float)-v33 * 0.5) + v34;
        sub_802587E8(&v65, v62, &v68);
        v59 = v71 + 105;
        if (sub_8025B704(v71 + 105, v71[108], &v65) >= 0.0)
            v35 = sub_8025B704(v59, v71[108], &v65);
        else
            v35 = -sub_8025B704(v59, v71[108], &v65);
        if (v63 >= v35)
            v63 = v35;
        v25 = *(_DWORD *)(a1 + 16);
    } else {
        v25 = *(_DWORD *)(a1 + 16);
    }
    v36 = v72;
    if (*(_DWORD *)(v25 + 436)) {
        v38 = *(float *)(v25 + 120);
        if (0.0 == v38) {
            v39 = 0.0;
        } else if (v38 > 0.0) {
            v39 = 1.0;
        } else {
            v39 = -1.0;
        }
        v40 = v39 * (float)(*(float *)(a1 + 476) * 0.5);
        v68 = v40;
        v41 = *(float *)(v25 + 124);
        if (0.0 == v41) {
            v42 = 0.0;
        } else if (v41 > 0.0) {
            v42 = 1.0;
        } else {
            v42 = -1.0;
        }
        v43 = v42 * (float)(*(float *)(a1 + 480) * 0.5);
        v69 = v43;
        v44 = *(float *)(a1 + 484);
        v45 = *(float *)(a1 + 488);
        ++v72;
        v71 = (float *)v25;
        v70 = (float)((float)-v44 * 0.5) + v45;
        sub_802587E8(&v65, v62, &v68);
        v60 = v71 + 105;
        if (sub_8025B704(v71 + 105, v71[108], &v65) >= 0.0)
            v46 = sub_8025B704(v60, v71[108], &v65);
        else
            v46 = -sub_8025B704(v60, v71[108], &v65);
        if (v63 >= v46)
            v63 = v46;
        v36 = v72;
        v37 = v72 < 3;
    } else {
        v37 = v72 < 3;
    }
    if (!v37 || v36 <= 0)
        return 0;
    debugPrint("-- Stand Dist = %f\n");
    if (v63 > 0.6)
        return 0;
    sub_80259C18(&v65, (float *)a1, &v68);
    v64 = (float)(v71[107] * v67) + (float)((float)(v65 * v71[105]) + (float)(v66 * v71[106]));
    debugPrint("-- Stand Vel = %f\n");
    if (v64 < 0.0)
        v48 = -v64;
    else
        v48 = v64;
    if (v48 > 0.1)
        return 0;
    if ((float)((float)(*(float *)(a1 + 428) * *(float *)(a1 + 196)) +
                (float)((float)(*(float *)(a1 + 188) * *(float *)(a1 + 420)) +
                        (float)(*(float *)(a1 + 192) * *(float *)(a1 + 424)))) > 0.0) {
        v69 = 0.1;
        v68 = 0.0;
    } else {
        v68 = 0.0;
        v69 = -0.1;
    }
    v70 = 0.0;
    debugPrint("-- Stand Point = %f\n");
    sub_80258758(&v65, (int)v62, &v68);
    v49 = *(float *)(a1 + 320);
    v50 = *(float *)(a1 + 324);
    *(float *)(a1 + 316) = v65 + *(float *)(a1 + 316);
    v51 = v66 + v49;
    v52 = *(float *)(a1 + 316);
    *(float *)(a1 + 320) = v51;
    v53 = v67 + v50;
    v54 = *(float *)(a1 + 320);
    *(float *)(a1 + 324) = v53;
    v55 = v65 + v52;
    v56 = *(float *)(a1 + 324);
    *(float *)(a1 + 316) = v55;
    *(float *)(a1 + 320) = v66 + v54;
    *(float *)(a1 + 324) = v67 + v56;
    sub_80258248(v61);
    return 1;
}
