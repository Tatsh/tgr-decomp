#include "types-n64.h"
//----- (80222D54) --------------------------------------------------------
void __fastcall sub_80222D54(int a1) {
    int v1;    // $t6
    float *v3; // $a0
    int v4;    // $v0
    int v5;    // $v0
    int v6;    // $v0
    int v7;    // $v0
    int v8;    // $t0

    v1 = *(_DWORD *)(a1 + 8312);
    *(_DWORD *)(a1 + 3668) = 1;
    *(_DWORD *)(a1 + 3648) = 0;
    *(float *)(a1 + 3568) = 0.0;
    *(float *)(a1 + 3572) = 0.0;
    if (v1) {
        *(_DWORD *)(a1 + 356) = 1;
        v3 = (float *)(a1 + 328);
        v3[9] = 2.0;
        v3[11] = 1000.0;
        v3[8] = 3.5;
        v3[10] = 1.5;
        sub_80258C24((int)v3);
        *(float *)(a1 + 448) = 0.0;
        *(float *)(a1 + 452) = 0.0;
        *(float *)(a1 + 456) = 2.0;
        *(float *)(a1 + 460) = 0.0;
        *(float *)(a1 + 464) = 0.0;
        *(float *)(a1 + 468) = 0.0;
        *(float *)(a1 + 476) = 0.0;
        *(float *)(a1 + 480) = 0.0;
        *(float *)(a1 + 484) = 0.0;
        *(float *)(a1 + 488) = 0.0;
        *(float *)(a1 + 492) = 0.0;
        *(float *)(a1 + 496) = 0.0;
        *(float *)(a1 + 472) = 1.0;
        sub_802583DC(a1 + 516, a1 + 448);
        *(float *)(a1 + 768) = (float)((float)((float)*(int *)(a1 + 3684) * 4.0) + 20.0) * 16000.0;
        *(_DWORD *)(a1 + 1260) = 0;
        *(_DWORD *)(a1 + 876) = 2;
        *(float *)(a1 + 892) = 0.0;
        *(float *)(a1 + 880) = 0.0;
        *(float *)(a1 + 884) = 0.0;
        *(float *)(a1 + 888) = 0.0;
        *(float *)(a1 + 1320) = 0.0;
        *(float *)(a1 + 1300) = 0.0;
        *(float *)(a1 + 772) = -3000.0;
        sub_80258C24(a1 + 848);
        v4 = *(_DWORD *)(a1 + 8312);
        *(_DWORD *)(a1 + 968) = *(_DWORD *)(v4 + 248);
        *(_DWORD *)(a1 + 972) = *(_DWORD *)(v4 + 252);
        *(float *)(a1 + 988) = 0.0;
        *(float *)(a1 + 984) = 0.0;
        *(float *)(a1 + 980) = 0.0;
        *(float *)(a1 + 1004) = 0.0;
        *(float *)(a1 + 1000) = 0.0;
        *(float *)(a1 + 996) = 0.0;
        *(float *)(a1 + 992) = 1.0;
        *(float *)(a1 + 1016) = 0.0;
        *(float *)(a1 + 1012) = 0.0;
        *(float *)(a1 + 1008) = 0.0;
        *(float *)(a1 + 976) = -0.1;
        sub_802583DC(a1 + 1036, a1 + 968);
        *(float *)(a1 + 2360) = 0.0;
        *(_DWORD *)(a1 + 2300) = 0;
        *(float *)(a1 + 2340) = 0.0;
        *(_DWORD *)(a1 + 1916) = 2;
        *(float *)(a1 + 1932) = 0.0;
        *(float *)(a1 + 1920) = 0.0;
        *(float *)(a1 + 1924) = 0.0;
        *(float *)(a1 + 1928) = 0.0;
        sub_80258C24(a1 + 1888);
        v5 = *(_DWORD *)(a1 + 8312);
        *(_DWORD *)(a1 + 2008) = *(_DWORD *)(v5 + 248);
        *(float *)(a1 + 2012) = -*(float *)(v5 + 252);
        *(float *)(a1 + 2028) = 0.0;
        *(float *)(a1 + 2024) = 0.0;
        *(float *)(a1 + 2020) = 0.0;
        *(float *)(a1 + 2044) = 0.0;
        *(float *)(a1 + 2040) = 0.0;
        *(float *)(a1 + 2036) = 0.0;
        *(float *)(a1 + 2032) = 1.0;
        *(float *)(a1 + 2056) = 0.0;
        *(float *)(a1 + 2052) = 0.0;
        *(float *)(a1 + 2048) = 0.0;
        *(float *)(a1 + 2016) = -0.1;
        sub_802583DC(a1 + 2076, a1 + 2008);
        *(float *)(a1 + 1840) = 0.0;
        *(_DWORD *)(a1 + 1780) = 0;
        *(float *)(a1 + 1820) = 0.0;
        *(_DWORD *)(a1 + 1396) = 2;
        *(float *)(a1 + 1412) = 0.0;
        *(float *)(a1 + 1400) = 0.0;
        *(float *)(a1 + 1404) = 0.0;
        *(float *)(a1 + 1408) = 0.0;
        sub_80258C24(a1 + 1368);
        v6 = *(_DWORD *)(a1 + 8312);
        *(_DWORD *)(a1 + 1488) = *(_DWORD *)(v6 + 236);
        *(_DWORD *)(a1 + 1492) = *(_DWORD *)(v6 + 240);
        *(float *)(a1 + 1508) = 0.0;
        *(float *)(a1 + 1504) = 0.0;
        *(float *)(a1 + 1500) = 0.0;
        *(float *)(a1 + 1524) = 0.0;
        *(float *)(a1 + 1520) = 0.0;
        *(float *)(a1 + 1516) = 0.0;
        *(float *)(a1 + 1512) = 1.0;
        *(float *)(a1 + 1536) = 0.0;
        *(float *)(a1 + 1532) = 0.0;
        *(float *)(a1 + 1528) = 0.0;
        *(float *)(a1 + 1496) = -0.1;
        sub_802583DC(a1 + 1556, a1 + 1488);
        *(float *)(a1 + 2880) = 0.0;
        *(_DWORD *)(a1 + 2820) = 0;
        *(float *)(a1 + 2860) = 0.0;
        *(_DWORD *)(a1 + 2436) = 2;
        *(float *)(a1 + 2452) = 0.0;
        *(float *)(a1 + 2440) = 0.0;
        *(float *)(a1 + 2444) = 0.0;
        *(float *)(a1 + 2448) = 0.0;
        sub_80258C24(a1 + 2408);
        v7 = *(_DWORD *)(a1 + 8312);
        *(_DWORD *)(a1 + 2528) = *(_DWORD *)(v7 + 236);
        *(float *)(a1 + 2532) = -*(float *)(v7 + 240);
        *(float *)(a1 + 2548) = 0.0;
        *(float *)(a1 + 2544) = 0.0;
        *(float *)(a1 + 2540) = 0.0;
        *(float *)(a1 + 2564) = 0.0;
        *(float *)(a1 + 2560) = 0.0;
        *(float *)(a1 + 2556) = 0.0;
        *(float *)(a1 + 2552) = 1.0;
        *(float *)(a1 + 2576) = 0.0;
        *(float *)(a1 + 2572) = 0.0;
        *(float *)(a1 + 2568) = 0.0;
        *(float *)(a1 + 2536) = -0.1;
        sub_802583DC(a1 + 2596, a1 + 2528);
        *(_DWORD *)(a1 + 332) = a1 + 848;
        *(_DWORD *)(a1 + 336) = a1 + 1888;
        *(_DWORD *)(a1 + 340) = a1 + 1368;
        *(_DWORD *)(a1 + 344) = a1 + 2408;
        sub_80258680(a1 + 2928,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(-1.5),
                     COERCE_INT(-1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 2992,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(-1.5),
                     COERCE_INT(1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 2960,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(1.5),
                     COERCE_INT(-1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3024,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(1.5),
                     COERCE_INT(1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3184,
                     COERCE_INT(0.0),
                     0.0,
                     -965645568,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     0);
        sub_80258680(a1 + 3216,
                     COERCE_INT(0.0),
                     0.0,
                     -1026686320,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     0);
        sub_80258680(a1 + 3248,
                     COERCE_INT(0.0),
                     0.0,
                     -1026686320,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     0);
        *(_DWORD *)(a1 + 2928) = a1 + 2992;
        *(_DWORD *)(a1 + 2992) = a1 + 2960;
        *(_DWORD *)(a1 + 2960) = a1 + 3024;
        *(_DWORD *)(a1 + 3184) = 0;
        *(_DWORD *)(a1 + 3024) = a1 + 3184;
        *(_DWORD *)(a1 + 352) = a1 + 2928;
        sub_80258680(a1 + 3312,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3376,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3344,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3408,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     1);
        *(_DWORD *)(a1 + 872) = a1 + 3312;
        *(_DWORD *)(a1 + 1912) = a1 + 3376;
        *(_DWORD *)(a1 + 1392) = a1 + 3344;
        *(_DWORD *)(a1 + 3248) = 0;
        *(_DWORD *)(a1 + 3216) = 0;
        *(_DWORD *)(a1 + 3312) = a1 + 3248;
        *(_DWORD *)(a1 + 3376) = a1 + 3248;
        *(_DWORD *)(a1 + 3344) = a1 + 3216;
        *(_DWORD *)(a1 + 3408) = a1 + 3216;
        *(_DWORD *)(a1 + 2432) = a1 + 3408;
        sub_80258680(a1 + 3056,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(-1.5),
                     COERCE_INT(-1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3120,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(-1.5),
                     COERCE_INT(1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3088,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(1.5),
                     COERCE_INT(-1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3152,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(1.5),
                     COERCE_INT(1.0),
                     COERCE_INT(0.0),
                     1);
        sub_80258680(a1 + 3280,
                     COERCE_INT(0.0),
                     0.0,
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     COERCE_INT(0.0),
                     0);
        v8 = *(_DWORD *)(a1 + 3680);
        *(_DWORD *)(a1 + 3056) = a1 + 3120;
        *(_DWORD *)(a1 + 3120) = a1 + 3088;
        *(_DWORD *)(a1 + 3280) = 0;
        *(_BYTE *)(a1 + 3665) = 0;
        *(float *)(a1 + 3652) = 0.0;
        *(float *)(a1 + 3660) = 0.0;
        *(_DWORD *)(a1 + 3152) = a1 + 3280;
        *(_BYTE *)(a1 + 837) = v8;
        *(_DWORD *)(a1 + 3088) = a1 + 3152;
    }
    *(_BYTE *)(a1 + 3664) = 0;
    *(_BYTE *)(a1 + 3656) = 0;
}
