#include "types-n64.h"
//----- (8025FDE4) --------------------------------------------------------
int sub_8025FDE4() {
    int result;    // $v0
    int *v1;       // $s4
    int v2;        // $s0
    int v3;        // $t8
    int v4;        // $s7
    float *v5;     // $s2
    int *v6;       // $s3
    int v7;        // $s0
    float *v8;     // $s1
    int v9;        // $a1
    float v10;     // $f2
    float v11;     // $f0
    float v12;     // $f2
    int v13;       // $s0
    float v15;     // $f18
    int v18;       // $v0
    float *v21;    // $a1
    float v22;     // $f16
    float v23;     // $f8
    float v24;     // $f12
    float v25;     // $f10
    float v26;     // $f4
    float *v27;    // $a1
    float v28;     // $f16
    float v29;     // $f8
    float v30;     // $f12
    float v31;     // $f10
    float v32;     // $f4
    float v33[3];  // [sp+90h] [-C8h] BYREF
    float v34;     // [sp+9Ch] [-BCh]
    float v35;     // [sp+A0h] [-B8h]
    float v36;     // [sp+A4h] [-B4h]
    float v37;     // [sp+A8h] [-B0h] BYREF
    float v38;     // [sp+ACh] [-ACh]
    float v39;     // [sp+B0h] [-A8h]
    float v40;     // [sp+B4h] [-A4h] BYREF
    float v41;     // [sp+B8h] [-A0h]
    float v42;     // [sp+BCh] [-9Ch]
    float v43[3];  // [sp+C0h] [-98h] BYREF
    float v44[9];  // [sp+CCh] [-8Ch] BYREF
    float v45[9];  // [sp+F0h] [-68h] BYREF
    float v46[13]; // [sp+114h] [-44h] BYREF
    int v47;       // [sp+148h] [-10h]
    float v48;     // [sp+14Ch] [-Ch] BYREF
    float v49;     // [sp+150h] [-8h]
    float v50;     // [sp+154h] [-4h]

    result = 1;
    v47 = 0;
    v1 = dword_803239A0;
    do {
        v2 = v1[24];
        if (!v2) {
            v3 = v47;
            goto LABEL_28;
        }
        if (*(_BYTE *)(v2 + 8291) == 2) {
            v3 = v47;
            goto LABEL_28;
        }
        ++*(_BYTE *)(v2 + 841);
        result = 1;
        v4 = v47 + 1;
        v5 = (float *)(v1[24] + 448);
        if (v47 + 1 < 1) {
            v6 = &dword_803239A0[30 * v47 + 30];
            while (1) {
                v7 = v6[24];
                if (!v7)
                    goto LABEL_26;
                v8 = (float *)(v7 + 448);
                if (*(_BYTE *)(v7 + 8291) == 2)
                    goto LABEL_26;
                v48 = *v5 - *v8;
                v49 = v5[1] - *(float *)(v7 + 452);
                v50 = v5[2] - *(float *)(v7 + 456);
                if (sub_80261140((float)(v50 * v50) +
                                 (float)((float)(v48 * v48) + (float)(v49 * v49))) >= 5.0)
                    goto LABEL_26;
                v9 = v6[24];
                v33[0] = 2.5;
                v33[1] = 1.0;
                v33[2] = 1.0;
                sub_80258E64((int)v45, (float *)(v9 + 516));
                sub_80258EAC((int)v46, (float *)(v1[24] + 516));
                sub_80258EF8((int)v44, v45, v46);
                v43[0] = *v5 - *v8;
                v43[1] = v5[1] - *(float *)(v7 + 452);
                v43[2] = v5[2] - *(float *)(v7 + 456);
                sub_802588B8(&v40, v46, v43);
                result = sub_8025F4F8(v44, &v40, v33, v33);
                if (!result)
                    return result;
                sub_802581CC(&v48);
                v10 = (float)(v50 * v5[5]) + (float)((float)(v5[3] * v48) + (float)(v5[4] * v49));
                v11 = (float)(v10 + (float)((float)((float)(*(float *)(v7 + 460) * v48) +
                                                    (float)(*(float *)(v7 + 464) * v49)) +
                                            (float)(*(float *)(v7 + 468) * v50))) *
                      0.5;
                v34 = v48 * v11;
                v35 = v49 * v11;
                v36 = v50 * v11;
                v12 = v11 >= v10 ? v11 - v10 : -(float)(v11 - v10);
                if (v12 > 27.0)
                    v12 = 27.0;
                v13 = v1[24];
                if (*(unsigned __int8 *)(v13 + 841) >= 0x29u)
                    break;
            LABEL_25:
                *(_BYTE *)(v13 + 841) = 0;
                v21 = (float *)(v1[24] + 516);
                v37 = v48 * -1.0;
                v38 = v49 * -1.0;
                v39 = v50 * -1.0;
                v40 = v37 * 2.5;
                v41 = v38 * 2.5;
                v42 = v39 * 2.5;
                sub_802586C0(v43, v21, &v40);
                v22 = v5[4];
                v23 = v5[5];
                v5[3] = v5[3] - v34;
                v5[4] = v22 - v35;
                v5[5] = v23 - v36;
                sub_80260B20(v1[24] + 672, (char *)(v1[24] + 448), 68);
                sub_8025BBB8(v24, 0, &v48, v43, v1[24] + 328, 0.44999999);
                sub_80260B20(v1[24] + 448, (char *)(v1[24] + 672), 68);
                *(float *)(v1[24] + 684) = v34 + *(float *)(v1[24] + 684);
                *(float *)(v1[24] + 688) = v35 + *(float *)(v1[24] + 688);
                *(float *)(v1[24] + 692) = v36 + *(float *)(v1[24] + 692);
                *(_DWORD *)(v1[24] + 616) = *(_DWORD *)(v1[24] + 684);
                *(_DWORD *)(v1[24] + 620) = *(_DWORD *)(v1[24] + 688);
                *(_DWORD *)(v1[24] + 624) = *(_DWORD *)(v1[24] + 692);
                v25 = v5[4];
                v26 = v5[5];
                v5[3] = v34 + v5[3];
                v5[4] = v35 + v25;
                v5[5] = v36 + v26;
                v27 = (float *)(v6[24] + 516);
                v40 = v48 * 2.5;
                v41 = v49 * 2.5;
                v42 = v50 * 2.5;
                sub_802586C0(v43, v27, &v40);
                v28 = v8[4];
                v29 = v8[5];
                v8[3] = v8[3] - v34;
                v8[4] = v28 - v35;
                v8[5] = v29 - v36;
                sub_80260B20(v6[24] + 672, (char *)(v6[24] + 448), 68);
                sub_8025BBB8(v30, 0, &v37, v43, v6[24] + 328, 0.44999999);
                sub_80260B20(v6[24] + 448, (char *)(v6[24] + 672), 68);
                *(float *)(v6[24] + 684) = v34 + *(float *)(v6[24] + 684);
                *(float *)(v6[24] + 688) = v35 + *(float *)(v6[24] + 688);
                *(float *)(v6[24] + 692) = v36 + *(float *)(v6[24] + 692);
                *(_DWORD *)(v6[24] + 616) = *(_DWORD *)(v6[24] + 684);
                *(_DWORD *)(v6[24] + 620) = *(_DWORD *)(v6[24] + 688);
                *(_DWORD *)(v6[24] + 624) = *(_DWORD *)(v6[24] + 692);
                v31 = v8[4];
                v32 = v8[5];
                v8[3] = v34 + v8[3];
                v8[4] = v35 + v31;
                v8[5] = v36 + v32;
            LABEL_26:
                result = 1;
                ++v4;
                v6 += 30;
                if (v4 >= 1)
                    goto LABEL_27;
            }
            _$V0 = 1;
            v15 = (float)((float)(127.0 * v12) / 27.0) + 128.0;
            __asm
            {
        cfc1    $t6, FCSR
        ctc1    $v0, FCSR
        cfc1    $v0, FCSR
            }
            if ((_$V0 & 0x78) != 0) {
                _$V0 = 1;
                __asm
                {
          ctc1    $v0, FCSR
          cfc1    $v0, FCSR
                }
                if ((_$V0 & 0x78) == 0) {
                    LOBYTE(v18) = (int)(float)(v15 - 2147483600.0);
                LABEL_24:
                    *(_BYTE *)(v13 + 838) = v18;
                    __asm { ctc1    $t6, FCSR }
                    *(_BYTE *)(v6[24] + 838) = v18;
                    v13 = v1[24];
                    goto LABEL_25;
                }
            }
            else {
                v18 = (int)v15;
                if ((int)v15 >= 0)
                    goto LABEL_24;
            }
            LOBYTE(v18) = -1;
            goto LABEL_24;
        }
    LABEL_27:
        v3 = v47;
    LABEL_28:
        v1 += 30;
        v47 = v3 + 1;
    } while (v3 + 1 < 1);
    return result;
}
// 80260224: variable 'v24' is possibly undefined
// 80260360: variable 'v30' is possibly undefined
// 803239A0: using guessed type int dword_803239A0[24];
