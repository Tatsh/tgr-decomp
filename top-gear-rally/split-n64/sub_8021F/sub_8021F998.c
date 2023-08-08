#include "types-n64.h"
//----- (8021F998) --------------------------------------------------------
int __fastcall sub_8021F998(int a1) {
    int v1;       // $t6
    float *v3;    // $a0
    float v4;     // $f4
    float v5;     // $f10
    int v6;       // $v0
    int v7;       // $t5
    float v8;     // $f2
    float v9;     // $f12
    float v10;    // $f2
    int v11;      // $t2
    int v12;      // $v0
    float v13;    // $f12
    float v14;    // $f2
    int *v15;     // $v1
    int result;   // $v0
    float v17[7]; // [sp+5Ch] [-1Ch] BYREF

    v1 = *(_DWORD *)(a1 + 3916);
    v3 = (float *)(a1 + 48);
    if (v1) {
        sub_802244FC(v17, (float *)a1, (float)(*(float *)(a1 + 7644) * 0.0) * 100.0);
        sub_802248C8((float *)(a1 + 48), v17);
        sub_8021FE04(a1, *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 56));
        sub_802201C8((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
        sub_80220358((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
        v4 = *(float *)(a1 + 7636) * 3.1415927;
        v5 = *(float *)(a1 + 7640);
        *(float *)(a1 + 3572) = 0.0;
        sub_8022021C((float *)a1,
                     (float)(v4 * 0.40000001) * 0.0,
                     (float)((float)(v5 * 3.1415927) * 0.40000001) * 0.0,
                     (float)((float)(*(float *)(a1 + 7648) * 3.1415927) * 0.40000001) * 0.0);
        if ((**(_DWORD **)(a1 + 8308) & 0x10) != 0) {
            *(float *)(a1 + 32) = 0.0;
            *(float *)(a1 + 36) = 0.0;
            *(_DWORD *)(a1 + 40) = 1065353216;
            sub_8022439C((float *)(a1 + 16), (float *)(a1 + 32), (float *)a1);
            sub_8022439C((float *)(a1 + 32), (float *)a1, (float *)(a1 + 16));
            sub_80255910(*(int **)(a1 + 8308), 16);
        }
    } else {
        v6 = sub_8021F380((int)v3,
                          (float *)(a1 + 32),
                          v3,
                          (_WORD *)(a1 + 8128),
                          (_DWORD *)(a1 + 0x2000),
                          (_WORD *)(a1 + 8196),
                          (int *)(a1 + 8260),
                          (float *)(a1 + 8264),
                          (_DWORD *)(a1 + 8268));
        v7 = *(_DWORD *)(a1 + 336);
        *(_DWORD *)(a1 + 4052) = v6;
        *(float *)(v7 + 448) = 0.0;
        *(_DWORD *)(*(_DWORD *)(a1 + 332) + 448) = *(_DWORD *)(*(_DWORD *)(a1 + 336) + 448);
        sub_80222050(a1);
        v8 = *(float *)(a1 + 3568);
        *(float *)(*(_DWORD *)(a1 + 344) + 448) = v8;
        *(float *)(*(_DWORD *)(a1 + 340) + 448) = v8;
        *(float *)(*(_DWORD *)(a1 + 332) + 460) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 336) + 460) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 340) + 460) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 344) + 460) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 332) + 464) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 336) + 464) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 340) + 464) = 0.0;
        *(float *)(*(_DWORD *)(a1 + 344) + 464) = 0.0;
        v9 = *(float *)(a1 + 3640);
        if (v9 > 0.0) {
            if ((**(_DWORD **)(a1 + 8308) & 0x20000) != 0) {
                if (*(_DWORD *)(a1 + 3648) == 1) {
                    *(float *)(a1 + 3640) = -v9;
                    v9 = *(float *)(a1 + 3640);
                }
                v11 = *(_DWORD *)(a1 + 3628);
            } else {
                v11 = *(_DWORD *)(a1 + 3628);
            }
            if (v11) {
                *(float *)(*(_DWORD *)(a1 + 332) + 460) = (float)-v9 * 2.0;
                *(float *)(*(_DWORD *)(a1 + 336) + 460) = (float)-*(float *)(a1 + 3640) * 2.0;
                *(float *)(*(_DWORD *)(a1 + 340) + 460) = (float)-*(float *)(a1 + 3640) * 0.0;
                *(float *)(*(_DWORD *)(a1 + 344) + 460) = (float)-*(float *)(a1 + 3640) * 0.0;
            } else {
                *(float *)(*(_DWORD *)(a1 + 332) + 460) = -v9;
                *(float *)(*(_DWORD *)(a1 + 336) + 460) = -*(float *)(a1 + 3640);
                *(float *)(*(_DWORD *)(a1 + 340) + 460) = -*(float *)(a1 + 3640);
                *(float *)(*(_DWORD *)(a1 + 344) + 460) = -*(float *)(a1 + 3640);
            }
            v10 = *(float *)(a1 + 3644);
        } else {
            v10 = *(float *)(a1 + 3644);
        }
        if (v10 < 0.0) {
            *(float *)(*(_DWORD *)(a1 + 332) + 464) = -v10;
            *(float *)(*(_DWORD *)(a1 + 336) + 464) = -*(float *)(a1 + 3644);
            *(float *)(*(_DWORD *)(a1 + 332) + 460) = 0.0;
            *(float *)(*(_DWORD *)(a1 + 336) + 460) = 0.0;
            v12 = *(_DWORD *)(a1 + 340);
            v13 = *(float *)(v12 + 460);
            v14 = v13 < 0.0 ? -v13 : v13;
            if (v14 < 0.000099999997) {
                *(float *)(v12 + 464) = -*(float *)(a1 + 3644);
                *(float *)(*(_DWORD *)(a1 + 344) + 464) = -*(float *)(a1 + 3644);
            }
        }
        sub_80221940(a1);
    }
    sub_80221E0C(a1);
    if (*(_DWORD *)(a1 + 1804))
        *(float *)(a1 + 4068) =
            sub_80261140((float)(*(float *)(a1 + 468) * *(float *)(a1 + 468)) +
                         (float)((float)(*(float *)(a1 + 460) * *(float *)(a1 + 460)) +
                                 (float)(*(float *)(a1 + 464) * *(float *)(a1 + 464)))) *
            2.24;
    v15 = &dword_8031B2C8;
    result = 0;
    while (1) {
        ++result;
        if (*(_DWORD *)(a1 + 320) == v15[4])
            break;
        v15 += 5;
        if (result >= 1)
            return result;
    }
    return sub_80221170(a1);
}
// 8028AAD8: using guessed type float flt_8028AAD8;
// 8031B2C8: using guessed type int dword_8031B2C8;
