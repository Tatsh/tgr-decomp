#include "../../types-win32.h"
//----- (10075F10) --------------------------------------------------------
void __thiscall meth_10075F10(int this) {
    double v2;  // st7
    double v3;  // st7
    int v4;     // eax
    int v5;     // edx
    double v6;  // st7
    int v7;     // ecx
    char v9;    // c0
    int v10;    // eax
    int *i;     // ecx
    float v12;  // [esp+0h] [ebp-30h]
    float v13;  // [esp+4h] [ebp-2Ch]
    float v14;  // [esp+8h] [ebp-28h]
    float v15;  // [esp+8h] [ebp-28h]
    float v16;  // [esp+8h] [ebp-28h]
    int v17[3]; // [esp+24h] [ebp-Ch] BYREF

    if (*(_DWORD *)(this + 3964)) {
        v14 = *(float *)(this + 10024) * *(float *)&dword_106C2CFC * 100.0;
        sub_1003ACE0((int)v17, this, v14);
        sub_1003AF70((float *)(this + 48), (float *)v17);
        meth_10076420(
            (float *)this, *(_DWORD *)(this + 48), *(_DWORD *)(this + 52), *(_DWORD *)(this + 56));
        meth_100767A0((_DWORD *)this, 0, 0, 0);
        meth_100769A0((_DWORD *)this, 0, 0, 0);
        v2 = *(float *)(this + 10028);
        *(_DWORD *)(this + 3620) = 0;
        v15 = v2 * *(float *)&dword_106C2CFC * 1.2566371;
        v13 = *(float *)(this + 10020) * *(float *)&dword_106C2CFC * 1.2566371;
        v3 = *(float *)(this + 10016) * *(float *)&dword_106C2CFC * 1.2566371;
        v12 = v3;
        meth_10076820((_DWORD *)this, v12, v13, v15);
        if ((**(_BYTE **)(this + 10688) & 0x10) != 0) {
            *(_DWORD *)(this + 32) = 0;
            *(_DWORD *)(this + 36) = 0;
            *(_DWORD *)(this + 40) = 1065353216;
            sub_1003AC30((float *)(this + 16), (float *)(this + 32), (float *)this);
            sub_1003AC30((float *)(this + 32), (float *)this, (float *)(this + 16));
            meth_10035FA0(*(int **)(this + 10688), 16);
        }
    } else {
        v4 = sub_100759D0(this + 48,
                          this + 32,
                          this + 48,
                          this + 10508,
                          this + 10572,
                          COERCE_FLOAT(this + 10576),
                          this + 10640,
                          this + 10644,
                          this + 10648);
        v5 = *(_DWORD *)(this + 364);
        *(_DWORD *)(this + 4128) = v4;
        *(_DWORD *)(v5 + 448) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 360) + 448) = 0;
        meth_10061F70(this);
        *(_DWORD *)(*(_DWORD *)(this + 372) + 448) = *(_DWORD *)(this + 3616);
        *(_DWORD *)(*(_DWORD *)(this + 368) + 448) = *(_DWORD *)(*(_DWORD *)(this + 372) + 448);
        *(_DWORD *)(*(_DWORD *)(this + 360) + 460) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 364) + 460) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 368) + 460) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 372) + 460) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 360) + 464) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 364) + 464) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 368) + 464) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 372) + 464) = 0;
        if (*(float *)(this + 3688) > 0.0) {
            if ((**(_DWORD **)(this + 10688) & 0x20000) != 0)
                *(float *)(this + 3688) = -*(float *)(this + 3688);
            if (*(_BYTE *)(*(_DWORD *)(this + 10692) + 217)) {
                v6 = *(float *)(this + 3688);
                if (*(_BYTE *)(*(_DWORD *)(this + 10692) + 217) == 1) {
                    *(float *)(*(_DWORD *)(this + 360) + 460) = v6 * -2.0;
                    *(float *)(*(_DWORD *)(this + 364) + 460) = *(float *)(this + 3688) * -2.0;
                    *(_DWORD *)(*(_DWORD *)(this + 368) + 460) = 0;
                    *(_DWORD *)(*(_DWORD *)(this + 372) + 460) = 0;
                } else {
                    *(float *)(*(_DWORD *)(this + 360) + 460) = -v6;
                    *(float *)(*(_DWORD *)(this + 364) + 460) = -*(float *)(this + 3688);
                    *(float *)(*(_DWORD *)(this + 368) + 460) = -*(float *)(this + 3688);
                    *(float *)(*(_DWORD *)(this + 372) + 460) = -*(float *)(this + 3688);
                }
            } else {
                *(float *)(*(_DWORD *)(this + 360) + 460) = *(float *)(this + 3688) * 0.1;
                *(float *)(*(_DWORD *)(this + 364) + 460) = *(float *)(this + 3688) * 0.1;
                *(float *)(*(_DWORD *)(this + 368) + 460) = *(float *)(this + 3688) * -2.0999999;
                *(float *)(*(_DWORD *)(this + 372) + 460) = *(float *)(this + 3688) * -2.0999999;
            }
        }
        v3 = *(float *)(this + 3692);
        if (v3 < 0.0) {
            *(float *)(*(_DWORD *)(this + 360) + 464) = -*(float *)(this + 3692);
            *(float *)(*(_DWORD *)(this + 364) + 464) = -*(float *)(this + 3692);
            *(_DWORD *)(*(_DWORD *)(this + 360) + 460) = 0;
            *(_DWORD *)(*(_DWORD *)(this + 364) + 460) = 0;
            v7 = *(_DWORD *)(this + 368);
            v3 = *(float *)(v7 + 460);
            if (v9)
                v3 = -v3;
            if (v3 < 0.000099999997) {
                *(float *)(v7 + 464) = -*(float *)(this + 3692);
                v3 = -*(float *)(this + 3692);
                *(float *)(*(_DWORD *)(this + 372) + 464) = v3;
            }
        }
        if (!dword_106909E0 && (g_GameMode != 2 || *(_DWORD *)(this + 320) != 1 ||
                                !*(_DWORD *)(*(_DWORD *)(this + 10688) + 68))) {
            if (g_GameMode != 4)
                goto LABEL_27;
            if (!*(_DWORD *)(this + 320) && *(_DWORD *)(*(_DWORD *)(this + 10688) + 68))
                goto LABEL_29;
            if (g_GameMode != 4) {
            LABEL_27:
                if (g_GameMode != 5 && !g_usingGameMode4 && *(int *)(this + 1840) > 90)
                    goto LABEL_29;
            }
            meth_10061720(this);
            goto LABEL_29;
        }
    }
LABEL_29:
    if (g_NetworkPlay) {
        if (*(void(__cdecl **)(int))(this + 3848) == sub_10063FE0 && !dword_106909E0)
            sub_100609E0(this);
    } else if (!dword_106909E0) {
        sub_10061C60(this, v3);
    }
    if (*(_DWORD *)(this + 1840)) {
        v16 = *(float *)(this + 488) * *(float *)(this + 488) +
              *(float *)(this + 492) * *(float *)(this + 492) +
              *(float *)(this + 496) * *(float *)(this + 496);
        *(float *)(this + 4144) = sqrt_(v16) * 2.24;
    }
    if (!g_NetworkPlay) {
        v10 = 0;
        if (dword_100AA8B4 > 0) {
            for (i = &dword_106C1638; *(_DWORD *)(this + 320) != *i; i += 22) {
                if (++v10 >= dword_100AA8B4)
                    return;
            }
            meth_100019D0((#479 *)this);
        }
    }
}
// 100762BC: variable 'v9' is possibly undefined
// 100AA010: using guessed type int g_GameMode;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 1022AF14: using guessed type int g_usingGameMode4;
// 1022AF18: using guessed type int g_NetworkPlay;
// 106909E0: using guessed type int dword_106909E0;
// 106C1638: using guessed type int dword_106C1638;
// 106C2CFC: using guessed type int dword_106C2CFC;
