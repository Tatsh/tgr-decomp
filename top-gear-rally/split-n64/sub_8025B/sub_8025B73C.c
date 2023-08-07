#include "../../types-n64.h"
//----- (8025B73C) --------------------------------------------------------
int __fastcall sub_8025B73C(int a1, float *a2, int a3, int a4) {
    float v5;         // $f2
    double v7;        // $f0
    float v9;         // $f8
    float v10;        // $f6
    float v11;        // $f4
    float v12;        // $f10
    float v13;        // $f6
    BOOL v14;         // $at
    float v15;        // $f0
    float v16;        // $f0
    int v19;          // $t8
    int v23;          // $v0
    float v24;        // $f10
    unsigned int v27; // $v1
    float v30;        // $f16
    float v31;        // $f6
    float v32;        // $f16
    float v33;        // $f6
    float v34[4];     // [sp+38h] [-58h] BYREF
    float v35;        // [sp+48h] [-48h]
    float v36;        // [sp+4Ch] [-44h]
    float v37;        // [sp+50h] [-40h]
    float v38;        // [sp+58h] [-38h]
    float v39;        // [sp+5Ch] [-34h]
    float v40;        // [sp+60h] [-30h]
    float v41;        // [sp+78h] [-18h] BYREF
    float v42;        // [sp+7Ch] [-14h]
    float v43;        // [sp+80h] [-10h]
    float v44;        // [sp+84h] [-Ch] BYREF
    float v45;        // [sp+88h] [-8h]
    float v46;        // [sp+8Ch] [-4h]

    v5 = (float)(*(float *)(a1 + 364) * a2[2]) +
         (float)((float)(*a2 * *(float *)(a1 + 356)) + (float)(a2[1] * *(float *)(a1 + 360)));
    if (v5 >= 0.0)
        return 0;
    v7 = v5 * 1.05;
    _$T8 = 1;
    v9 = *a2 * v7;
    v44 = v9;
    v10 = a2[1] * v7;
    v45 = v10;
    v11 = a2[2] * v7;
    v46 = v11;
    v12 = *(float *)(a1 + 360);
    v13 = *(float *)(a1 + 364);
    v14 = *(unsigned __int8 *)(a1 + 512) < 0xAu;
    *(float *)(a1 + 356) = *(float *)(a1 + 356) - v9;
    *(float *)(a1 + 360) = v12 - v45;
    *(float *)(a1 + 364) = v13 - v46;
    if (!v14) {
        if (v5 < 0.0)
            v16 = -v5;
        else
            v16 = v5;
        if (v16 > 27.0) {
            v16 = 27.0;
            __asm { cfc1    $t7, FCSR }
        } else {
            __asm { cfc1    $t7, FCSR }
        }
        __asm
        {
      ctc1    $t8, FCSR
      cfc1    $t8, FCSR
        }
        if ((_$T8 & 0x78) != 0) {
            _$T8 = 1;
            __asm
            {
        ctc1    $t8, FCSR
        cfc1    $t8, FCSR
            }
            if ((_$T8 & 0x78) == 0) {
                LOBYTE(v19) = (int)(float)(v16 - 2147483600.0);
                goto LABEL_17;
            }
        }
        else {
            v19 = (int)v16;
            if ((int)v16 >= 0)
                goto LABEL_17;
        }
        LOBYTE(v19) = -1;
    LABEL_17:
        __asm { ctc1    $t7, FCSR }
        *(_BYTE *)(a1 + 508) = v19;
        if ((unsigned __int8)v19 >= 0xAu) {
            *(_DWORD *)(a1 + 492) = -2095426267;
            *(float *)(a1 + 496) = 9.7110695e17;
            *(float *)(a1 + 500) = -4.649248e-18;
        } else {
            *(_BYTE *)(a1 + 508) = 0;
        }
        _$V1 = 1;
        v23 = *(unsigned __int8 *)(a1 + 511);
        v24 = (float)(v16 * 127.0) / 27.0;
        __asm
        {
      cfc1    $t0, FCSR
      ctc1    $v1, FCSR
      cfc1    $v1, FCSR
        }
        if ((_$V1 & 0x78) != 0) {
            _$V1 = 1;
            __asm
            {
        ctc1    $v1, FCSR
        cfc1    $v1, FCSR
            }
            if ((_$V1 & 0x78) == 0) {
                v27 = (int)(float)((float)(v24 + 128.0) - 2147483600.0) | 0x80000000;
                goto LABEL_26;
            }
        }
        else {
            v27 = (int)(float)(v24 + 128.0);
            if ((int)(float)(v24 + 128.0) >= 0) {
            LABEL_26:
                __asm { ctc1    $t0, FCSR }
                if (v23 < (unsigned __int8)v27) * (_BYTE *)(a1 + 511) = v27;
                else *(_BYTE *)(a1 + 511) = v23;
                v15 = 0.89999998;
                v30 = *(float *)(a1 + 360) * 0.89999998;
                v31 = *(float *)(a1 + 364) * 0.89999998;
                *(float *)(a1 + 356) = *(float *)(a1 + 356) * 0.89999998;
                *(float *)(a1 + 360) = v30;
                *(float *)(a1 + 364) = v31;
                goto LABEL_30;
            }
        }
        LOBYTE(v27) = -1;
        goto LABEL_26;
    }
    v15 = 0.89999998;
LABEL_30:
    if (a3) {
        v32 = *(float *)(a1 + 360) * v15;
        v33 = *(float *)(a1 + 364) * v15;
        *(float *)(a1 + 356) = *(float *)(a1 + 356) * v15;
        *(float *)(a1 + 360) = v32;
        *(float *)(a1 + 364) = v33;
    }
    if (a4) {
        v44 = a2[1];
        v45 = a2[2];
        v46 = *a2;
        v35 = (float)(a2[1] * v46) - (float)(v45 * a2[2]);
        v36 = (float)(a2[2] * v44) - (float)(v46 * *a2);
        v37 = (float)(*a2 * v45) - (float)(v44 * a2[1]);
        v38 = (float)(a2[1] * v37) - (float)(v36 * a2[2]);
        v39 = (float)(a2[2] * v35) - (float)(v37 * *a2);
        v40 = (float)(*a2 * v36) - (float)(v35 * a2[1]);
        v34[0] = *a2;
        v34[1] = a2[1];
        v34[2] = a2[2];
        sub_80258758(&v44, (int)v34, a2);
        sub_80258758(&v41, (int)v34, (float *)(a1 + 384));
        v41 = v41 * v44;
        v42 = v42 * v45;
        v43 = v43 * v46;
        sub_802586C0((float *)(a1 + 384), v34, &v41);
    }
    return 1;
}
// 8037EAA8: using guessed type float flt_8037EAA8;
// 8037EAAC: using guessed type float flt_8037EAAC;
