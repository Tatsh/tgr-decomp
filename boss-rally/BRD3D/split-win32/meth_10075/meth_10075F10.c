#include "types-win32.h"
//----- (10075F10) --------------------------------------------------------
void __thiscall meth_10075F10(void *this) {
    double v2;  // st7
    int v3;     // eax
    int v4;     // edx
    double v5;  // st7
    int v6;     // ecx
    double v8;  // st7
    char v9;    // c0
    int v10;    // eax
    int *i;     // ecx
    float v12;  // [esp+0h] [ebp-30h]
    float v13;  // [esp+4h] [ebp-2Ch]
    float v14;  // [esp+8h] [ebp-28h]
    float v15;  // [esp+8h] [ebp-28h]
    float v16;  // [esp+8h] [ebp-28h]
    int v17[3]; // [esp+24h] [ebp-Ch] BYREF

    if (*((_DWORD *)this + 991)) {
        v14 = *((float *)this + 2506) * *(float *)&dword_106C2CFC * 100.0;
        sub_1003ACE0((int)v17, (int)this, v14);
        sub_1003AF70((float *)this + 12, (float *)v17);
        meth_10076420(
            (float *)this, *((_DWORD *)this + 12), *((_DWORD *)this + 13), *((_DWORD *)this + 14));
        meth_100767A0(this, 0, 0, 0);
        meth_100769A0(this, 0, 0, 0);
        v2 = *((float *)this + 2507);
        *((_DWORD *)this + 905) = 0;
        v15 = v2 * *(float *)&dword_106C2CFC * 1.2566371;
        v13 = *((float *)this + 2505) * *(float *)&dword_106C2CFC * 1.2566371;
        v12 = *((float *)this + 2504) * *(float *)&dword_106C2CFC * 1.2566371;
        meth_10076820(this, v12, v13, v15);
        if ((**((_BYTE **)this + 2672) & 0x10) != 0) {
            *((_DWORD *)this + 8) = 0;
            *((_DWORD *)this + 9) = 0;
            *((_DWORD *)this + 10) = 1065353216;
            sub_1003AC30((float *)this + 4, (float *)this + 8, (float *)this);
            sub_1003AC30((float *)this + 8, (float *)this, (float *)this + 4);
            meth_10035FA0(*((int **)this + 2672), 16);
        }
    } else {
        v3 = sub_100759D0((int)this + 48,
                          (int)this + 32,
                          (int)this + 48,
                          (int)this + 10508,
                          (int)this + 10572,
                          COERCE_FLOAT((char *)this + 10576),
                          (int)this + 10640,
                          (int)this + 10644,
                          (int)this + 10648);
        v4 = *((_DWORD *)this + 91);
        *((_DWORD *)this + 1032) = v3;
        *(_DWORD *)(v4 + 448) = 0;
        *(_DWORD *)(*((_DWORD *)this + 90) + 448) = 0;
        meth_10061F70(this);
        *(_DWORD *)(*((_DWORD *)this + 93) + 448) = *((_DWORD *)this + 904);
        *(_DWORD *)(*((_DWORD *)this + 92) + 448) = *(_DWORD *)(*((_DWORD *)this + 93) + 448);
        *(_DWORD *)(*((_DWORD *)this + 90) + 460) = 0;
        *(_DWORD *)(*((_DWORD *)this + 91) + 460) = 0;
        *(_DWORD *)(*((_DWORD *)this + 92) + 460) = 0;
        *(_DWORD *)(*((_DWORD *)this + 93) + 460) = 0;
        *(_DWORD *)(*((_DWORD *)this + 90) + 464) = 0;
        *(_DWORD *)(*((_DWORD *)this + 91) + 464) = 0;
        *(_DWORD *)(*((_DWORD *)this + 92) + 464) = 0;
        *(_DWORD *)(*((_DWORD *)this + 93) + 464) = 0;
        if (*((float *)this + 922) > 0.0) {
            if ((**((_DWORD **)this + 2672) & 0x20000) != 0)
                *((float *)this + 922) = -*((float *)this + 922);
            if (*(_BYTE *)(*((_DWORD *)this + 2673) + 217)) {
                v5 = *((float *)this + 922);
                if (*(_BYTE *)(*((_DWORD *)this + 2673) + 217) == 1) {
                    *(float *)(*((_DWORD *)this + 90) + 460) = v5 * -2.0;
                    *(float *)(*((_DWORD *)this + 91) + 460) = *((float *)this + 922) * -2.0;
                    *(_DWORD *)(*((_DWORD *)this + 92) + 460) = 0;
                    *(_DWORD *)(*((_DWORD *)this + 93) + 460) = 0;
                } else {
                    *(float *)(*((_DWORD *)this + 90) + 460) = -v5;
                    *(float *)(*((_DWORD *)this + 91) + 460) = -*((float *)this + 922);
                    *(float *)(*((_DWORD *)this + 92) + 460) = -*((float *)this + 922);
                    *(float *)(*((_DWORD *)this + 93) + 460) = -*((float *)this + 922);
                }
            } else {
                *(float *)(*((_DWORD *)this + 90) + 460) = *((float *)this + 922) * 0.1;
                *(float *)(*((_DWORD *)this + 91) + 460) = *((float *)this + 922) * 0.1;
                *(float *)(*((_DWORD *)this + 92) + 460) = *((float *)this + 922) * -2.0999999;
                *(float *)(*((_DWORD *)this + 93) + 460) = *((float *)this + 922) * -2.0999999;
            }
        }
        if (*((float *)this + 923) < 0.0) {
            *(float *)(*((_DWORD *)this + 90) + 464) = -*((float *)this + 923);
            *(float *)(*((_DWORD *)this + 91) + 464) = -*((float *)this + 923);
            *(_DWORD *)(*((_DWORD *)this + 90) + 460) = 0;
            *(_DWORD *)(*((_DWORD *)this + 91) + 460) = 0;
            v6 = *((_DWORD *)this + 92);
            v8 = *(float *)(v6 + 460);
            if (v9)
                v8 = -v8;
            if (v8 < 0.000099999997) {
                *(float *)(v6 + 464) = -*((float *)this + 923);
                *(float *)(*((_DWORD *)this + 93) + 464) = -*((float *)this + 923);
            }
        }
        if (!dword_106909E0 && (gGameMode != GAME_MODE_2 || *((_DWORD *)this + 80) != 1 ||
                                !*(_DWORD *)(*((_DWORD *)this + 2672) + 68))) {
            if (gGameMode != GAME_MODE_4)
                goto LABEL_27;
            if (!*((_DWORD *)this + 80) && *(_DWORD *)(*((_DWORD *)this + 2672) + 68))
                goto LABEL_29;
            if (gGameMode != GAME_MODE_4) {
            LABEL_27:
                if (gGameMode != GAME_MODE_5 && !gIsGameMode4 && *((int *)this + 460) > 90)
                    goto LABEL_29;
            }
            meth_10061720(this);
            goto LABEL_29;
        }
    }
LABEL_29:
    if (gNetworkPlay) {
        if (*((void(__cdecl **)(int))this + 0x3C2) == sub_10063FE0 && !dword_106909E0)
            sub_100609E0((int)this);
    } else if (!dword_106909E0) {
        sub_10061C60((int)this);
    }
    if (*((_DWORD *)this + 460)) {
        v16 = *((float *)this + 122) * *((float *)this + 122) +
              *((float *)this + 123) * *((float *)this + 123) +
              *((float *)this + 124) * *((float *)this + 124);
        *((float *)this + 1036) = sqrt_(v16) * 2.24;
    }
    if (!gNetworkPlay) {
        v10 = 0;
        if (dword_100AA8B4 > 0) {
            for (i = &dword_106C1638; *((_DWORD *)this + 80) != *i; i += 22) {
                if (++v10 >= dword_100AA8B4)
                    return;
            }
            meth_100019D0(this);
        }
    }
}
// 100762BC: variable 'v9' is possibly undefined
// 100AA8B4: using guessed type int dword_100AA8B4;
// 1022AF14: using guessed type int gIsGameMode4;
// 1022AF18: using guessed type int gNetworkPlay;
// 106909E0: using guessed type int dword_106909E0;
// 106C1638: using guessed type int dword_106C1638;
// 106C2CFC: using guessed type int dword_106C2CFC;
