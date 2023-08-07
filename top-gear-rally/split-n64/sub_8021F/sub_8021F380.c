#include "../../types-n64.h"
//----- (8021F380) --------------------------------------------------------
int __fastcall sub_8021F380(int a1,
                            float *a2,
                            float *a3,
                            _WORD *a4,
                            _DWORD *a5,
                            _WORD *a6,
                            int *a7,
                            float *a8,
                            _DWORD *a9) {
    float v9;             // $f0
    float v10;            // $f20
    float v11;            // $f18
    float v12;            // $f26
    float v14;            // $f24
    int v15;              // $s4
    int v16;              // $s0
    int v17;              // $v0
    int *v18;             // $s2
    float i;              // $f8
    int *v20;             // $t0
    float v21;            // $f20
    float v22;            // $f0
    float v23;            // $f10
    float v24;            // $f0
    float v25;            // $f0
    int v26;              // $t7
    int v27;              // $a0
    __int16 v28;          // $v1
    BOOL v29;             // $at
    int v30;              // $t9
    int v31;              // $a0
    int v32;              // $v0
    int v33;              // $v1
    BOOL v34;             // $at
    int v35;              // $v0
    int v36;              // $a2
    _DWORD *v37;          // $t6
    int v38;              // $a0
    __int16 v39;          // $v1
    BOOL v40;             // $at
    int result;           // $v0
    int *v42;             // [sp+9Ch] [-A4h]
    float v43;            // [sp+A8h] [-98h] BYREF
    float v44;            // [sp+ACh] [-94h]
    float v45;            // [sp+B0h] [-90h]
    float v46;            // [sp+B4h] [-8Ch] BYREF
    float v47;            // [sp+B8h] [-88h]
    float v48;            // [sp+BCh] [-84h]
    unsigned __int16 v49; // [sp+D8h] [-68h]
    __int16 v50;          // [sp+DAh] [-66h]
    float v51;            // [sp+E0h] [-60h]
    float v52;            // [sp+E4h] [-5Ch] BYREF
    float v53;            // [sp+E8h] [-58h]
    float v54;            // [sp+ECh] [-54h]
    float v55[2];         // [sp+F0h] [-50h] BYREF
    float v56;            // [sp+F8h] [-48h]
    float v57[5];         // [sp+108h] [-38h] BYREF
    float v58;            // [sp+11Ch] [-24h]
    float v59;            // [sp+120h] [-20h]
    float v60[6];         // [sp+124h] [-1Ch] BYREF
    int v61;              // [sp+13Ch] [-4h]

    v46 = 0.0;
    v47 = 0.0;
    v48 = 1.0;
    v43 = 0.0;
    v44 = 0.0;
    v45 = 1.0;
    v9 = a3[2];
    v50 = 0;
    v49 = 0;
    v59 = v9;
    v58 = v9;
    v60[0] = 0.0;
    v60[1] = 0.0;
    v60[2] = 1.0;
    v10 = a3[1];
    v11 = *a3;
    v12 = (float)((float)(MEMORY[0x80025C3C] - MEMORY[0x80025C38]) *
                  (float)(MEMORY[0x80025C3C] - MEMORY[0x80025C38])) +
          1.0;
    v61 = 0;
    v53 = v10;
    v52 = v11;
    v54 = 1.0;
    *a9 = 0;
    v14 = v12;
    v15 = 0;
    v16 = 0;
    v17 = sub_8025F18C(v52, v53);
    v18 = &dword_80379F80[1200 * v17];
    v42 = &v18[8 * *(unsigned __int16 *)(2 * v17 - 2143819128)];
    if (v42 != v18) {
        for (i = *((float *)v18 + 2);; i = *((float *)v18 + 2)) {
            if (i < 0.0) {
                v20 = v42;
                goto LABEL_41;
            }
            v21 = sub_80224404(v60, (float *)v18);
            if (v21 == 0.0) {
                v20 = v42;
                goto LABEL_41;
            }
            sub_80224808(v57, (float *)v18[4], &v52);
            v22 = sub_80224404(v57, (float *)v18);
            sub_8022494C(v55, &v52, v60, v22 / v21);
            if (!sub_8022591C(v55, (float *)v18[4], (float *)v18[5], (float *)v18[6], (float *)v18))
                goto LABEL_40;
            v23 = v56;
            v24 = (float)(a3[2] + 1.5) - v56;
            if (v24 < 0.0) {
                v25 = v24 - 1.5;
                goto LABEL_32;
            }
            ++v61;
            if (v24 >= v12)
                break;
            v12 = v24;
            *a9 = *((__int16 *)v18 + 14);
            v58 = v23;
            if (*((float *)v18 + 2) < 0.0) {
                v51 = v24;
                sub_80224434(&v43, (float *)v18);
                v24 = v51;
            } else {
                v43 = *(float *)v18;
                v44 = *((float *)v18 + 1);
                v45 = *((float *)v18 + 2);
            }
            v26 = v15;
            if (v15 < 32) {
                ++v15;
                a4[v26] = *a4;
            }
            *a4 = *(_WORD *)(MEMORY[0x80025C0C] + 8 * *((__int16 *)v18 + 14) + 6) + 1;
            if (v24 >= 5.0)
                goto LABEL_31;
            v27 = 2 * *(unsigned __int16 *)(MEMORY[0x80025C90] + 2 * *((__int16 *)v18 + 14));
            v28 = *(_WORD *)(MEMORY[0x80025C8C] + v27);
            v29 = v16 < 32;
            if (!v28)
                goto LABEL_31;
            while (1) {
                if (v29) {
                    a6[v16++] = *a6;
                    *a6 = *(_WORD *)(MEMORY[0x80025C8C] + v27);
                } else {
                    *a6 = v28;
                }
                v27 += 2;
                v28 = *(_WORD *)(MEMORY[0x80025C8C] + v27);
                if (!v28)
                    break;
                v29 = v16 < 32;
            }
            v25 = v24 - 1.5;
        LABEL_32:
            if (v25 > 0.0) {
                v20 = v42;
                goto LABEL_41;
            }
            if (v25 >= v14) {
                v20 = v42;
                goto LABEL_41;
            }
            v35 = *((__int16 *)v18 + 14);
            v50 = *(_WORD *)(MEMORY[0x80025C0C] + 8 * v35 + 6) + 1;
            if (v25 > -1.0) {
                v49 = v35;
                v14 = v25;
                v59 = v56;
                if (*((float *)v18 + 2) < 0.0) {
                    sub_80224434(&v46, (float *)v18);
                    v20 = v42;
                    goto LABEL_41;
                }
                v46 = *(float *)v18;
                v47 = *((float *)v18 + 1);
                v48 = *((float *)v18 + 2);
            }
        LABEL_40:
            v20 = v42;
        LABEL_41:
            v18 += 8;
            if (v18 == v20)
                goto LABEL_43;
        }
        v30 = v15;
        if (v15 < 32) {
            ++v15;
            a4[v30] = *(_WORD *)(MEMORY[0x80025C0C] + 8 * *((__int16 *)v18 + 14) + 6) + 1;
            if (v24 < 5.0) {
                v31 = 2 * *(unsigned __int16 *)(MEMORY[0x80025C90] + 2 * *((__int16 *)v18 + 14));
                v32 = MEMORY[0x80025C8C] + v31;
                LOWORD(v33) = *(_WORD *)(MEMORY[0x80025C8C] + v31);
                v34 = v16 < 32;
                if ((_WORD)v33) {
                    while (1) {
                        if (v34) {
                            a6[v16++] = v33;
                            v32 = MEMORY[0x80025C8C] + v31;
                        }
                        v33 = *(unsigned __int16 *)(v32 + 2);
                        v31 += 2;
                        v32 += 2;
                        if (!v33)
                            break;
                        v34 = v16 < 32;
                    }
                }
            }
        }
    LABEL_31:
        v25 = v24 - 1.5;
        goto LABEL_32;
    }
LABEL_43:
    v36 = v61;
    if (!v61) {
        v38 = 2 * *(unsigned __int16 *)(MEMORY[0x80025C90] + 2 * v49);
        v39 = *(_WORD *)(MEMORY[0x80025C8C] + v38);
        v40 = v16 < 32;
        if (v39) {
            while (v40) {
                a6[v16++] = v39;
                v38 += 2;
                v39 = *(_WORD *)(MEMORY[0x80025C8C] + v38);
                if (!v39)
                    goto LABEL_55;
                v40 = v16 < 32;
            }
            a6[31] = v39;
        }
    LABEL_55:
        if (v15 >= 32)
            a4[31] = v50;
        else
            a4[v15] = v50;
        if (a1)
            *(float *)(a1 + 8) = v59;
        if (!a2) {
            v37 = a5;
            goto LABEL_64;
        }
        *a2 = v46;
        a2[1] = v47;
        a2[2] = v48;
    LABEL_63:
        v37 = a5;
        goto LABEL_64;
    }
    if (a1) {
        *(float *)(a1 + 8) = v58;
        *a8 = v12 - 1.5;
    }
    if (a2) {
        *a2 = v43;
        a2[1] = v44;
        a2[2] = v45;
        goto LABEL_63;
    }
    v37 = a5;
LABEL_64:
    result = v36;
    *v37 = 1;
    *a7 = v16;
    return result;
}
// 80379F80: using guessed type int dword_80379F80[512];
