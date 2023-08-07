#include "../../types-n64.h"
//----- (80221940) --------------------------------------------------------
int __fastcall sub_80221940(int a1) {
    int v2;     // $t9
    int v3;     // $t8
    int v4;     // $v1
    int i;      // $t2
    float *v6;  // $v0
    float v7;   // $f0
    float v8;   // $f14
    float v9;   // $f0
    float v10;  // $f12
    float v11;  // $f0
    float v12;  // $f2
    float v13;  // $f0
    float v14;  // $f14
    float v15;  // $f0
    float v16;  // $f12
    float v17;  // $f0
    float v18;  // $f2
    char *v20;  // [sp+30h] [-78h]
    float *v21; // [sp+44h] [-64h]

    sub_8022D7E0(0, 128, 128, 0, 255);
    v2 = *(_DWORD *)(a1 + 332);
    *(_DWORD *)(a1 + 352) = a1 + 2928;
    *(_DWORD *)(v2 + 24) = a1 + 3312;
    *(_DWORD *)(*(_DWORD *)(a1 + 336) + 24) = a1 + 3376;
    *(_DWORD *)(*(_DWORD *)(a1 + 340) + 24) = a1 + 3344;
    *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) = a1 + 3408;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 332) + 24) + 8) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 332) + 24) + 12) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 332) + 24) + 16) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 336) + 24) + 8) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 336) + 24) + 12) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 336) + 24) + 16) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 340) + 24) + 8) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 340) + 24) + 12) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 340) + 24) + 16) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) + 8) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) + 12) = 0.0;
    *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) + 16) = 0.0;
    v21 = (float *)(a1 + 328);
    sub_8025EDBC(a1 + 328);
    if (!*(_DWORD *)(a1 + 3668)) {
        *(float *)(a1 + 3652) = 0.0;
        *(float *)(a1 + 3660) = 0.0;
        *(_BYTE *)(a1 + 3664) = 0;
        sub_8025AC9C((int)v21,
                     *(_DWORD *)(a1 + 332),
                     (float *)(a1 + 3660),
                     (_BYTE *)(a1 + 3664),
                     0.033333335);
        sub_8025AC9C((int)v21,
                     *(_DWORD *)(a1 + 336),
                     (float *)(a1 + 3660),
                     (_BYTE *)(a1 + 3664),
                     0.033333335);
        sub_8025AC9C((int)v21,
                     *(_DWORD *)(a1 + 340),
                     (float *)(a1 + 3652),
                     (_BYTE *)(a1 + 3656),
                     0.033333335);
        sub_8025AC9C((int)v21,
                     *(_DWORD *)(a1 + 344),
                     (float *)(a1 + 3652),
                     (_BYTE *)(a1 + 3656),
                     0.033333335);
    }
    *(_DWORD *)(a1 + 3668) = 0;
    *(float *)(a1 + 580) = 0.0;
    *(float *)(a1 + 584) = 0.0;
    *(float *)(a1 + 588) = 0.0;
    *(float *)(a1 + 592) = 0.0;
    *(float *)(a1 + 596) = 0.0;
    *(float *)(a1 + 600) = 0.0;
    sub_8025993C((int)v21);
    v20 = (char *)(a1 + 448);
    sub_80258324((float *)(a1 + 448), v21, 0.033333335);
    sub_80259D14((int)v21,
                 0.033333335,
                 (float *)(a1 + 3660),
                 (float *)(a1 + 3652),
                 (_BYTE *)(a1 + 3664),
                 (_BYTE *)(a1 + 3656));
    sub_80258248((float *)(a1 + 448));
    v3 = *(_DWORD *)(a1 + 332);
    *(_DWORD *)(a1 + 352) = a1 + 3056;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 340) + 24) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 336) + 24) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24) = 0;
    sub_8025E820((int)v21, (float *)(a1 + 3280));
    sub_8025EF70((int)v21);
    *(float *)(a1 + 580) = 0.0;
    *(float *)(a1 + 584) = 0.0;
    *(float *)(a1 + 588) = 0.0;
    *(float *)(a1 + 592) = 0.0;
    *(float *)(a1 + 596) = 0.0;
    *(float *)(a1 + 600) = 0.0;
    sub_8025993C((int)v21);
    sub_80260B20(a1 + 672, (char *)(a1 + 448), 68);
    sub_80258324((float *)(a1 + 672), v21, 0.033333335);
    LOWORD(v4) = 0;
    for (i = 0;; i = 4 * v4) {
        v6 = (float *)(a1 + i);
        v7 = *(float *)(a1 + i + 488);
        v4 = (__int16)(v4 + 1);
        if (0.0 == v7) {
            v8 = 0.0;
        } else {
            v9 = v7 > 0.0 ? 1.0 : -1.0;
            v8 = v9;
        }
        v10 = v6[178];
        if (0.0 == v10) {
            v11 = 0.0;
        } else {
            v12 = v10 > 0.0 ? 1.0 : -1.0;
            v11 = v12;
        }
        v6[122] = v11 == v8 ? v10 : 0.0;
        v13 = v6[115];
        if (0.0 == v13) {
            v14 = 0.0;
        } else {
            v15 = v13 > 0.0 ? 1.0 : -1.0;
            v14 = v15;
        }
        v16 = v6[171];
        if (0.0 == v16) {
            v17 = 0.0;
        } else {
            v18 = v16 > 0.0 ? 1.0 : -1.0;
            v17 = v18;
        }
        v6[115] = v17 == v14 ? v16 : 0.0;
        if (v4 >= 3)
            break;
    }
    sub_80260B20(a1 + 604, v20, 68);
    sub_80258248((float *)(a1 + 604));
    sub_80258248((float *)(a1 + 604));
    sub_8025E55C((int)v21);
    sub_80260B20((int)v20, (char *)(a1 + 672), 68);
    sub_8025EC7C(v21);
    sub_802583DC(*(_DWORD *)(a1 + 332) + 188, *(_DWORD *)(a1 + 332) + 120);
    sub_802583DC(*(_DWORD *)(a1 + 336) + 188, *(_DWORD *)(a1 + 336) + 120);
    sub_802583DC(*(_DWORD *)(a1 + 340) + 188, *(_DWORD *)(a1 + 340) + 120);
    sub_802583DC(*(_DWORD *)(a1 + 344) + 188, *(_DWORD *)(a1 + 344) + 120);
    return sub_8022D7E0(0, 0, 128, 0, 255);
}
