#include "types-n64.h"
//----- (80220810) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80220810(int a1, int a2, float *a3) {
    float *v6;    // $s7
    int *v7;      // $s5
    float v8;     // $f0
    float v9;     // $f24
    int v10;      // $v1
    int *v11;     // $fp
    int i;        // $v0
    int *v13;     // $s0
    int *v14;     // $s4
    int v15;      // $t5
    float v16;    // $f22
    float v17;    // $f2
    float v18;    // $f20
    float v19;    // $f24
    float *v20;   // $s5
    int *v21;     // $fp
    int *v22;     // $s0
    int *v23;     // $s4
    float v24;    // $f22
    float v25;    // $f2
    float v26;    // $f20
    float v27;    // $f20
    float v28;    // $f0
    float *v29;   // [sp+74h] [-84h]
    float v30[9]; // [sp+7Ch] [-7Ch] BYREF
    float v31;    // [sp+A0h] [-58h] BYREF
    float v32;    // [sp+A4h] [-54h]
    float v33;    // [sp+A8h] [-50h]
    int v34;      // [sp+C4h] [-34h]
    int v35;      // [sp+C8h] [-30h] BYREF
    int v36;      // [sp+CCh] [-2Ch]
    int v37;      // [sp+D0h] [-28h]
    float v38[3]; // [sp+D4h] [-24h] BYREF
    float v39;    // [sp+E0h] [-18h] BYREF
    float v40;    // [sp+E4h] [-14h]
    float v41;    // [sp+E8h] [-10h]
    float v42[3]; // [sp+ECh] [-Ch] BYREF

    dword_8028B710 = 0;
    v35 = sub_8025F18C(*(float *)(a1 + 8084), *(float *)(a1 + 8088));
    v36 = sub_8025F18C(*(float *)(a2 + 48), *(float *)(a2 + 52));
    if (v35 == v36)
        v34 = 1;
    else
        v34 = 2;
    v6 = (float *)(a1 + 8084);
    v29 = (float *)(a2 + 48);
    sub_80224808(v42, (float *)(a2 + 48), (float *)(a1 + 8084));
    v7 = 0;
    v8 = sub_80224B08(v42);
    if (v8 == 0.0)
        v9 = 1.0;
    else
        v9 = (float)(v8 + 0.1) / v8;
    v10 = 0;
    v11 = &v35;
    for (i = v35;; i = *v11) {
        v13 = &dword_80379F80[1200 * i];
        v14 = &v13[8 * *(unsigned __int16 *)(2 * i - 2143819128)];
        if (v13 == v14) {
            v15 = v34;
        } else {
            v37 = v10;
            do {
                v16 = sub_80224404(v42, (float *)v13);
                if (v16 < 0.0) {
                    sub_80224808(v38, (float *)v13[4], v6);
                    v17 = sub_80224404(v38, (float *)v13) / v16;
                    v18 = v17;
                    if (v17 > 0.0) {
                        if (v17 < v9) {
                            sub_8022494C(&v39, v6, v42, v17);
                            if (sub_8022591C(&v39,
                                             (float *)v13[4],
                                             (float *)v13[5],
                                             (float *)v13[6],
                                             (float *)v13)) {
                                v9 = v18;
                                v7 = v13;
                                v31 = v39;
                                v32 = v40;
                                v33 = v41;
                            }
                            v13 += 8;
                        } else {
                            v13 += 8;
                        }
                    } else {
                        v13 += 8;
                    }
                } else {
                    v13 += 8;
                }
            } while (v13 != v14);
            v10 = v37;
            v15 = v34;
        }
        ++v10;
        ++v11;
        if (v10 == v15)
            break;
    }
    if (v7) {
        v19 = 1.0;
        v20 = 0;
        v37 = 0;
        sub_80224808(v42, v29, a3);
        v21 = &v35;
        do {
            v22 = &dword_80379F80[1200 * *v21];
            v23 = &v22[8 * *(unsigned __int16 *)(2 * *v21 - 2143819128)];
            while (v22 != v23) {
                v24 = sub_80224404(v42, (float *)v22);
                if (v24 < 0.0) {
                    sub_80224808(v38, (float *)v22[4], a3);
                    v25 = sub_80224404(v38, (float *)v22) / v24;
                    v26 = v25;
                    if (v25 > 0.0) {
                        if (v25 < v19) {
                            sub_8022494C(&v39, a3, v42, v25);
                            if (sub_8022591C(&v39,
                                             (float *)v22[4],
                                             (float *)v22[5],
                                             (float *)v22[6],
                                             (float *)v22)) {
                                v19 = v26;
                                v20 = (float *)v22;
                                v31 = v39;
                                v32 = v40;
                                v33 = v41;
                            }
                            v22 += 8;
                        } else {
                            v22 += 8;
                        }
                    } else {
                        v22 += 8;
                    }
                } else {
                    v22 += 8;
                }
            }
            ++v21;
            ++v37;
        } while (v37 != v34);
        if (v20) {
            v27 = sub_80224A78(v29, v6);
            sub_8022494C(v29, &v31, v20, 0.1);
            sub_80224808(v30, v29, v6);
            v28 = sub_80224B08(v30);
            if (v27 < v28 && v28 != 0.0) {
                sub_80224528(v30, v27 / v28);
                sub_80224894(v29, v6, v30);
            }
            dword_8028B710 = 1;
        }
    }
}
// 80220850: write access to const memory at 8028B710 has been detected
// 80220C10: write access to const memory at 8028B710 has been detected
// 80220900: conditional instruction was optimized away because of '%var_34.4 in (1..2)'
// 80220A60: conditional instruction was optimized away because of '%var_34.4 in (1..2)'
// 8028B710: using guessed type int dword_8028B710;
// 80379F80: using guessed type int dword_80379F80[512];
