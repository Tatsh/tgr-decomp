#include "../../types-n64.h"
//----- (8025BBB8) --------------------------------------------------------
int __usercall sub_8025BBB8 @<$v0>(
    float a1 @<$f12>, int a2 @<$a3>, float *a3 @<$a2>, float *a4 @<$a1>, int a5 @<$a0>, float a6) {
    int result;       // $v0
    int v8;           // $a1
    float *v9;        // $a3
    int v10;          // $v0
    float *v11;       // $v1
    float v13;        // $f14
    int v16;          // $t2
    float v19;        // $f8
    int v21;          // $v0
    float v22;        // $f4
    unsigned int v25; // $v1
    float v28;        // $f14
    float v29;        // $f16
    float v30;        // $f12
    float v31;        // $f10
    float v32;        // $f6
    float v33;        // $f4
    float v34;        // $f18
    float v35;        // $f8
    float v36;        // [sp+5Ch] [-15Ch]
    float v37;        // [sp+60h] [-158h]
    float v38;        // [sp+64h] [-154h]
    float v39;        // [sp+74h] [-144h]
    float v40;        // [sp+78h] [-140h]
    float v41;        // [sp+7Ch] [-13Ch]
    float v42;        // [sp+80h] [-138h] BYREF
    float v43;        // [sp+84h] [-134h]
    float v44;        // [sp+88h] [-130h]
    float v45;        // [sp+8Ch] [-12Ch] BYREF
    float v46;        // [sp+90h] [-128h]
    float v47;        // [sp+94h] [-124h]
    float v48;        // [sp+98h] [-120h] BYREF
    float v49;        // [sp+9Ch] [-11Ch]
    float v50;        // [sp+A0h] [-118h]
    float v51;        // [sp+B0h] [-108h] BYREF
    float v52;        // [sp+B4h] [-104h]
    float v53;        // [sp+B8h] [-100h]
    float v54[9];     // [sp+BCh] [-FCh] BYREF
    float v55[9];     // [sp+E0h] [-D8h] BYREF
    float v56[9];     // [sp+104h] [-B4h] BYREF
    float v57[8];     // [sp+128h] [-90h] BYREF
    float v58;        // [sp+148h] [-70h]
    float v59[9];     // [sp+14Ch] [-6Ch] BYREF
    float v60[9];     // [sp+170h] [-48h] BYREF
    float v61[9];     // [sp+194h] [-24h] BYREF

    v51 = *a4;
    v52 = a4[1];
    v53 = a4[2];
    sub_80258E04((int)v61, (int)v60, (float *)(a5 + 188));
    sub_802588B8(&v45, v61, &v51);
    v51 = (float)(*(float *)(a5 + 388) * v47) - (float)(v46 * *(float *)(a5 + 392));
    v52 = (float)(*(float *)(a5 + 392) * v45) - (float)(v47 * *(float *)(a5 + 384));
    v53 = (float)(*(float *)(a5 + 384) * v46) - (float)(v45 * *(float *)(a5 + 388));
    v51 = *(float *)(a5 + 356) + v51;
    v52 = *(float *)(a5 + 360) + v52;
    v53 = *(float *)(a5 + 364) + v53;
    if ((float)((float)(v53 * a3[2]) + (float)((float)(*a3 * v51) + (float)(a3[1] * v52))) >= 0.0)
        return 0;
    sub_80258DB0((int)v59, (int)&v45);
    sub_80258EF8((int)v55, (float *)(a5 + 84), v60);
    sub_80258EF8((int)v54, v61, v55);
    sub_80258EF8((int)v56, v54, v59);
    sub_80258EF8((int)v55, v59, v56);
    v8 = 0;
    v9 = v57;
    do {
        v10 = 0;
        v11 = v9;
        do {
            if (4 * v8 == v10)
                *v11 = 1.0;
            else
                *v11 = 0.0;
            v10 += 4;
            ++v11;
        } while (v10 != 12);
        ++v8;
        v9 += 3;
    } while (v8 != 3);
    v58 = 1.0 / *(float *)(a5 + 44);
    v57[4] = v58;
    v57[0] = v58;
    sub_80258F70((int)v56, v57, v55);
    _$T2 = 1;
    v13 = (float)(v53 * a3[2]) + (float)((float)(*a3 * v51) + (float)(a3[1] * v52));
    v36 = *a3 * v13;
    v37 = a3[1] * v13;
    v38 = a3[2] * v13;
    if (v13 < 0.0)
        v13 = -v13;
    if (v13 > 27.0) {
        v13 = 27.0;
        __asm { cfc1    $t7, FCSR }
    } else {
        __asm { cfc1    $t7, FCSR }
    }
    __asm
    {
    ctc1    $t2, FCSR
    cfc1    $t2, FCSR
    }
    if ((_$T2 & 0x78) != 0) {
        _$T2 = 1;
        __asm
        {
      ctc1    $t2, FCSR
      cfc1    $t2, FCSR
        }
        if ((_$T2 & 0x78) == 0) {
            LOBYTE(v16) = (int)(float)(v13 - 2147483600.0);
            goto LABEL_21;
        }
    }
    else {
        v16 = (int)v13;
        if ((int)v13 >= 0)
            goto LABEL_21;
    }
    LOBYTE(v16) = -1;
LABEL_21:
    __asm { ctc1    $t7, FCSR }
    *(_BYTE *)(a5 + 508) = v16;
    if ((unsigned __int8)v16 >= 0xAu) {
        *(_DWORD *)(a5 + 492) = -2095426267;
        *(float *)(a5 + 496) = 9.7110695e17;
        *(float *)(a5 + 500) = -4.649248e-18;
    } else {
        *(_BYTE *)(a5 + 508) = 0;
    }
    if (*(unsigned __int8 *)(a5 + 512) < 0xBu)
        goto LABEL_37;
    if (a6 < 0.000099999997) {
        _$V1 = 1;
        v21 = *(unsigned __int8 *)(a5 + 511);
        v22 = (float)((float)(127.0 * v13) / 27.0) + 128.0;
        __asm
        {
      cfc1    $t3, FCSR
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
                v25 = (int)(float)(v22 - 2147483600.0) | 0x80000000;
                goto LABEL_33;
            }
        }
        else {
            v25 = (int)v22;
            if ((int)v22 >= 0) {
            LABEL_33:
                __asm { ctc1    $t3, FCSR }
                if (v21 < (unsigned __int8)v25) * (_BYTE *)(a5 + 511) = v25;
                else *(_BYTE *)(a5 + 511) = v21;
                v36 = v36 * 0.89999998;
                v37 = v37 * 0.89999998;
                v38 = v38 * 0.89999998;
                v51 = v51 * 0.89999998;
                v52 = v52 * 0.89999998;
                v53 = v53 * 0.89999998;
            LABEL_37:
                v19 = v51;
                goto LABEL_38;
            }
        }
        LOBYTE(v25) = -1;
        goto LABEL_33;
    }
    v19 = v51;
LABEL_38:
    if (a2) {
        v28 = (float)(v19 - v36) * 0.2;
        v29 = (float)(v52 - v37) * 0.2;
        v30 = (float)(v53 - v38) * 0.2;
    } else {
        v28 = 0.0;
        v29 = 0.0;
        v30 = 0.0;
    }
    v51 = v36 + v28;
    v52 = v37 + v29;
    v53 = v38 + v30;
    sub_802590E8(&v48, v56, &v51);
    v39 = v48 * (float)(1.0 / *(float *)(a5 + 44));
    v40 = v49 * (float)(1.0 / *(float *)(a5 + 44));
    v41 = v50 * (float)(1.0 / *(float *)(a5 + 44));
    v51 = (float)(v46 * v50) - (float)(v49 * v47);
    v52 = (float)(v47 * v48) - (float)(v50 * v45);
    v53 = (float)(v45 * v49) - (float)(v48 * v46);
    sub_802588B8(&v42, v54, &v51);
    result = 1;
    v42 = v42 * (float)(a6 + 1.05);
    v43 = v43 * (float)(a6 + 1.05);
    v44 = v44 * (float)(a6 + 1.05);
    v31 = *(float *)(a5 + 360);
    v32 = *(float *)(a5 + 364);
    *(float *)(a5 + 356) = *(float *)(a5 + 356) - (float)(v39 * (float)(a6 + 1.05));
    v33 = *(float *)(a5 + 384);
    *(float *)(a5 + 360) = v31 - (float)(v40 * (float)(a6 + 1.05));
    v34 = *(float *)(a5 + 388);
    *(float *)(a5 + 364) = v32 - (float)(v41 * (float)(a6 + 1.05));
    v35 = *(float *)(a5 + 392);
    *(float *)(a5 + 384) = v33 - v42;
    *(float *)(a5 + 388) = v34 - v43;
    *(float *)(a5 + 392) = v35 - v44;
    return result;
}
// 8037EAA8: using guessed type float flt_8037EAA8;
// 8037EAAC: using guessed type float flt_8037EAAC;
