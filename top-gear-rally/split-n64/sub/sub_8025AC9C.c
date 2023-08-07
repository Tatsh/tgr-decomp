#include "../../types-n64.h"
//----- (8025AC9C) --------------------------------------------------------
void __fastcall sub_8025AC9C(int a1, int a2, float *a3, _BYTE *a4, float a5) {
    float v7;     // $f0
    float v8;     // $f12
    float v9;     // $f0
    float v10;    // $f16
    float v11;    // $f10
    float v12;    // $f0
    float v13;    // $f16
    float v14;    // $f12
    float v15;    // $f2
    float v16;    // $f14
    float v17;    // $f0
    float v18;    // $f10
    float v19;    // $f0
    float v20;    // $f2
    float v21;    // $f12
    float v22;    // $f16
    float v23;    // $f2
    float v24;    // $f6
    float v25;    // $f14
    float v26;    // $f0
    double v27;   // $f0
    float v28;    // $f8
    float v29;    // $f0
    double v30;   // $f0
    float v31;    // $f4
    float v32;    // $f12
    double v33;   // $f0
    double v34;   // $f2
    double i;     // $f8
    float v36;    // $f10
    float j;      // $f4
    float v38;    // $f12
    float v39[4]; // [sp+58h] [-88h] BYREF
    float v40;    // [sp+68h] [-78h]
    float v41;    // [sp+74h] [-6Ch]
    float v42;    // [sp+80h] [-60h]
    float v43;    // [sp+88h] [-58h]
    float v44[3]; // [sp+8Ch] [-54h] BYREF
    float v45;    // [sp+98h] [-48h]
    float v46;    // [sp+9Ch] [-44h]
    float v47;    // [sp+A0h] [-40h]
    float v48;    // [sp+A4h] [-3Ch]
    float v49;    // [sp+A8h] [-38h]
    float v50;    // [sp+ACh] [-34h]
    float v51[3]; // [sp+B0h] [-30h] BYREF
    float v52;    // [sp+BCh] [-24h]
    float v53;    // [sp+C0h] [-20h]
    float v54;    // [sp+C4h] [-1Ch]
    float v55;    // [sp+C8h] [-18h]
    float v56;    // [sp+CCh] [-14h]
    float v57;    // [sp+D0h] [-10h]
    float v58;    // [sp+D4h] [-Ch] BYREF
    float v59;    // [sp+D8h] [-8h]
    float v60;    // [sp+DCh] [-4h]

    v39[0] = 0.0;
    v39[1] = 1.0;
    v39[2] = 0.0;
    if (!*(_DWORD *)(a2 + 412) || *(float *)(a2 + 428) < 0.7)
        return;
    sub_80258758(&v58, a1 + 188, v39);
    v55 = (float)(v59 * *(float *)(a2 + 428)) - (float)(*(float *)(a2 + 424) * v60);
    v56 = (float)(v60 * *(float *)(a2 + 420)) - (float)(*(float *)(a2 + 428) * v58);
    v57 = (float)(v58 * *(float *)(a2 + 424)) - (float)(*(float *)(a2 + 420) * v59);
    v52 = (float)(*(float *)(a2 + 424) * v57) - (float)(v56 * *(float *)(a2 + 428));
    v53 = (float)(*(float *)(a2 + 428) * v55) - (float)(v57 * *(float *)(a2 + 420));
    v54 = (float)(*(float *)(a2 + 420) * v56) - (float)(v55 * *(float *)(a2 + 424));
    v7 = sub_802617D0(*(float *)(a2 + 448));
    v8 = *(float *)(a2 + 448);
    v42 = v7;
    v9 = sub_80261610(v8);
    v48 = v55 * v42;
    v49 = v56 * v42;
    v50 = v57 * v42;
    v45 = v55 * (float)-v9;
    v46 = v56 * (float)-v9;
    v47 = v57 * (float)-v9;
    v48 = (float)(v52 * v9) + v48;
    v49 = (float)(v53 * v9) + v49;
    v50 = (float)(v54 * v9) + v50;
    v55 = v52 * v42;
    v56 = v53 * v42;
    v57 = v54 * v42;
    v45 = v55 + v45;
    v46 = v56 + v46;
    v47 = v57 + v47;
    if (*(_DWORD *)(*(_DWORD *)(a1 + 4) + 436)) {
        if (*(_DWORD *)(*(_DWORD *)(a1 + 12) + 436)) {
            if (*(_DWORD *)(*(_DWORD *)(a1 + 8) + 436)) {
                if (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 436)) {
                    sub_80259B1C(v44, (float *)a1, (float *)a2);
                    v43 = (float)(v50 * v44[2]) +
                          (float)((float)(v44[0] * v48) + (float)(v44[1] * v49));
                    v11 = *(float *)(a2 + 128);
                    v59 = 0.0;
                    v58 = 0.0;
                    v12 = v11 - -0.97;
                    v60 =
                        (float)((float)(*(float *)(a1 + 44) + (float)(4.0 * *(float *)(a2 + 44))) *
                                2.9430003) +
                        (float)(v12 * 0.0);
                    v13 = *(float *)(a2 + 460);
                    v14 = v13 / *(float *)(a2 + 456);
                    v15 = (float)((float)(*(float *)(a2 + 428) * v60) +
                                  (float)((float)(0.0 * *(float *)(a2 + 420)) +
                                          (float)(0.0 * *(float *)(a2 + 424)))) *
                          3.5;
                    *a3 = *a3 + (float)(v14 / 2.0);
                    if (*a4)
                        v14 = v14 * 0.9;
                    if (v14 < 0.0)
                        v16 = -v14;
                    else
                        v16 = v14;
                    if (v15 < 0.0)
                        v17 = -v15;
                    else
                        v17 = v15;
                    if (v17 < v16) {
                        v19 = v15 / v14;
                        if ((float)(v15 / v14) < 0.0)
                            v20 = -v19;
                        else
                            v20 = v19;
                        v14 = v14 * (v20 * 0.1);
                        v18 = v48;
                    } else {
                        v18 = v48;
                    }
                    v41 = v14;
                    v51[0] = v18 * (float)-v14;
                    v40 = v13;
                    v51[1] = v49 * (float)-v14;
                    v51[2] = v50 * (float)-v14;
                    sub_802586C0(&v58, (float *)(a1 + 188), v51);
                    v21 = v41;
                    v22 = v40;
                    *(float *)(*(_DWORD *)(a2 + 24) + 8) =
                        v58 + *(float *)(*(_DWORD *)(a2 + 24) + 8);
                    *(float *)(*(_DWORD *)(a2 + 24) + 12) =
                        v59 + *(float *)(*(_DWORD *)(a2 + 24) + 12);
                    *(float *)(*(_DWORD *)(a2 + 24) + 16) =
                        v60 + *(float *)(*(_DWORD *)(a2 + 24) + 16);
                    v23 = *(float *)(a2 + 456);
                    *(float *)(a2 + 452) =
                        *(float *)(a2 + 452) + (float)((float)(v22 - (float)(v23 * v21)) * a5);
                    v24 = *(float *)(a2 + 452) -
                          (float)((float)(*(float *)(a2 + 452) * v23) + v43) * 0.4;
                    *(float *)(a2 + 452) = v24;
                    v25 = *(float *)(a2 + 452);
                    if (v25 < 0.0)
                        v26 = -v25;
                    else
                        v26 = v25;
                    if (v26 > 300.0) {
                        if (0.0 == v25) {
                            v27 = 0.0;
                        } else if (v25 > 0.0) {
                            v27 = 1.0;
                        } else {
                            v27 = -1.0;
                        }
                        v28 = v27 * 300.0;
                        *(float *)(a2 + 452) = v28;
                        v25 = *(float *)(a2 + 452);
                    }
                    goto LABEL_45;
                }
                v10 = *(float *)(a2 + 460);
            } else {
                v10 = *(float *)(a2 + 460);
            }
        } else {
            v10 = *(float *)(a2 + 460);
        }
    } else {
        v10 = *(float *)(a2 + 460);
    }
    *(float *)(a2 + 452) = *(float *)(a2 + 452) + (float)(v10 * a5);
    v25 = *(float *)(a2 + 452);
    if (v25 < 0.0)
        v29 = -v25;
    else
        v29 = v25;
    if (v29 > 300.0) {
        if (0.0 == v25) {
            v30 = 0.0;
        } else if (v25 > 0.0) {
            v30 = 1.0;
        } else {
            v30 = -1.0;
        }
        v31 = v30 * 300.0;
        *(float *)(a2 + 452) = v31;
        v25 = *(float *)(a2 + 452);
    }
LABEL_45:
    *(float *)(a2 + 468) = *(float *)(a2 + 468) - (float)((float)(v25 * 57.295776) * a5);
    v32 = *(float *)(a2 + 468);
    v33 = v32;
    if (v32 > 360.0) {
        for (i = v33 - 360.0;; i = v33 - 360.0) {
            v36 = i;
            *(float *)(a2 + 468) = v36;
            v32 = *(float *)(a2 + 468);
            v33 = v32;
            if (v32 <= 360.0)
                break;
        }
        *(float *)&v34 = 0.0;
    } else {
        *(float *)&v34 = 0.0;
    }
    *((float *)&v34 + 1) = 0.0;
    if (v33 < v34) {
        for (j = v32 + 360.0;; j = v38 + 360.0) {
            *(float *)(a2 + 468) = j;
            v38 = *(float *)(a2 + 468);
            if (v38 >= v34)
                break;
        }
    }
}
