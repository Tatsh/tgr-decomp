#include "../../types-n64.h"
//----- (8021EB50) --------------------------------------------------------
int __fastcall sub_8021EB50(int a1) {
    float v1;            // $f30
    float v2;            // $f28
    float v3;            // $f26
    int v5;              // $s7
    int v6;              // $fp
    float *v7;           // $s2
    int v8;              // $v0
    int v9;              // $v0
    float v10;           // $f24
    int v11;             // $v1
    int v12;             // $s1
    int v13;             // $a1
    int v14;             // $s4
    float v15;           // $f22
    int *v16;            // $a0
    int v17;             // $t1
    int v18;             // $v1
    float v19;           // $f0
    int v20;             // $s2
    int v21;             // $s1
    float *v22;          // $s0
    float v23;           // $f20
    float v24;           // $f6
    float v25;           // $f10
    int result;          // $v0
    float *v27;          // $s0
    float v28;           // $f6
    float v29;           // $f10
    float v30;           // $f0
    float v31;           // $f12
    int v32;             // $v1
    float v33;           // $f2
    int v34;             // [sp+78h] [-80h]
    float v35[3];        // [sp+88h] [-70h] BYREF
    float v36;           // [sp+94h] [-64h] BYREF
    float v37;           // [sp+98h] [-60h]
    float v38;           // [sp+9Ch] [-5Ch]
    float v39[3];        // [sp+A0h] [-58h] BYREF
    float v40[3];        // [sp+ACh] [-4Ch] BYREF
    float v41;           // [sp+B8h] [-40h]
    int v42;             // [sp+BCh] [-3Ch]
    int v43;             // [sp+E0h] [-18h]
    unsigned __int8 v44; // [sp+EAh] [-Eh]
    unsigned __int8 v45; // [sp+EBh] [-Dh]

    v1 = *(float *)(a1 + 56);
    v2 = *(float *)(a1 + 52);
    v3 = *(float *)(a1 + 48);
    v42 = 1;
    v45 = *(_BYTE *)(a1 + 8304);
    v5 = -1;
    v6 = 0;
    v44 = *(_BYTE *)(a1 + 8305);
    v7 = (float *)(a1 + 48);
    v41 = *(float *)(a1 + 4008) -
          (float)(*(float *)(MEMORY[0x80025C70] + 100) * (float)*(int *)(a1 + 3964));
    v8 = *(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936);
    if (!sub_80225E1C(
            (float *)(v8 + 64), (float *)(v8 + 88), (float *)(a1 + 3920), (float *)(a1 + 48))) {
        v9 = *(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936);
        if (!sub_80225E1C((float *)(v9 + 104),
                          (float *)(v9 + 128),
                          (float *)(a1 + 3920),
                          (float *)(a1 + 48)) &&
            sub_80224A78((float *)(a1 + 48),
                         (float *)(*(_DWORD *)(a1 + 3932) + 40 * *(_DWORD *)(a1 + 3936) + 76)) <
                64.0) {
            v10 = 0.0;
            v11 = *(_DWORD *)(a1 + 3932);
            v12 = *(_DWORD *)(a1 + 3936);
            goto LABEL_37;
        }
    }
    v13 = MEMORY[0x80025C7C];
    v14 = 0;
    v15 = (float)(MEMORY[0x80025C2C] - MEMORY[0x80025C28]) *
          (float)(MEMORY[0x80025C2C] - MEMORY[0x80025C28]);
    if (MEMORY[0x80025C7C] <= 0) {
        v10 = 0.0;
        goto LABEL_35;
    }
    v34 = 0;
    do {
        v16 = (int *)(MEMORY[0x80025C78] + v34);
        if (*(int *)(a1 + 320) >= 1 && (*(_WORD *)(*v16 + 22) & 1) != 0) {
            v17 = v34;
            goto LABEL_33;
        }
        v18 = *v16;
        if (v45 < (int)*(unsigned __int8 *)(*v16 + 16)) {
            v17 = v34;
            goto LABEL_33;
        }
        if (*(unsigned __int8 *)(v18 + 18) < (int)v45)
            goto LABEL_32;
        if (v44 < (int)*(unsigned __int8 *)(v18 + 17)) {
            v17 = v34;
            goto LABEL_33;
        }
        if (*(unsigned __int8 *)(v18 + 19) < (int)v44) {
            v17 = v34;
            goto LABEL_33;
        }
        if (v42) {
            v19 = *(float *)(MEMORY[0x80025C70] + 100);
            if ((float)((float)(v19 - *(float *)(v18 + 100)) - v41) > 1000.0) {
                v17 = v34;
                goto LABEL_33;
            }
            if ((float)(v41 - (float)(v19 - *(float *)(v18 + 40 * *(unsigned __int16 *)(v18 + 20) +
                                                       100))) > 1000.0) {
                v17 = v34;
                goto LABEL_33;
            }
        }
        v20 = *(unsigned __int16 *)(v18 + 20);
        v21 = 0;
        v22 = (float *)(v18 + 64);
        if (!*(_WORD *)(v18 + 20)) {
            v17 = v34;
            goto LABEL_33;
        }
        do {
            v23 = (float)((float)((float)(v22[3] - v3) * (float)(v22[3] - v3)) +
                          (float)((float)(v22[4] - v2) * (float)(v22[4] - v2))) +
                  (float)((float)(v22[5] - v1) * (float)(v22[5] - v1));
            if (v23 < v15) {
                v40[0] = v22[1] - v22[7];
                v24 = *v22;
                v25 = v22[6];
                v40[2] = 0.0;
                v40[1] = v25 - v24;
                sub_80224808(v39, (float *)(a1 + 48), v22 + 3);
                if (sub_80224404(v40, v39) < 0.0) {
                    ++v21;
                    goto LABEL_30;
                }
                v15 = v23;
                v5 = v21;
                v6 = v14;
            }
            ++v21;
        LABEL_30:
            v22 += 10;
        } while (v21 != v20);
        v13 = MEMORY[0x80025C7C];
    LABEL_32:
        v17 = v34;
    LABEL_33:
        ++v14;
        v34 = v17 + 4;
    } while (v14 < v13);
    v10 = 0.0;
LABEL_35:
    result = 0;
    if (v5 != -1) {
        v12 = v5;
        v11 = *(_DWORD *)(MEMORY[0x80025C78] + 4 * v6);
        v7 = (float *)(a1 + 48);
    LABEL_37:
        v27 = (float *)(v11 + 40 * v12);
        v36 = v27[17] - v27[23];
        v28 = v27[16];
        v29 = v27[22];
        v38 = v10;
        v43 = v11;
        v37 = v29 - v28;
        sub_80224760(&v36);
        sub_80224808(v35, v7, v27 + 19);
        v30 = sub_80224404(&v36, v35);
        v31 = *(float *)(a1 + 4008);
        v32 = v43;
        v33 = (float)(v30 + (float)((float)(*(float *)(MEMORY[0x80025C70] + 100) *
                                            (float)(*(_DWORD *)(a1 + 3964) + 1)) -
                                    v27[25])) -
              v31;
        if (!v42)
            goto LABEL_42;
        if (v33 <= -1000.0) {
            *(_DWORD *)(a1 + 3932) = v43;
            goto LABEL_43;
        }
        if (v33 >= 1000.0) {
            *(_DWORD *)(a1 + 3932) = v43;
        } else {
        LABEL_42:
            *(float *)(a1 + 4008) = v31 + v33;
            *(_DWORD *)(a1 + 3932) = v32;
        }
    LABEL_43:
        *(_DWORD *)(a1 + 3936) = v12;
        result = 1;
        *(float *)(a1 + 3940) = v36;
        *(float *)(a1 + 3944) = v37;
        *(float *)(a1 + 3948) = v38;
    }
    return result;
}
// 8021EC50: conditional instruction was optimized away because of '%var_3C.4==1'
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B940: using guessed type int dword_8028B940;
