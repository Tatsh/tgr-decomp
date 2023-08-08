#include "../types-win32.h"
//----- (100019D0) --------------------------------------------------------
int __thiscall meth_100019D0(#479 * this) {
    int v2;              // edx
    int v3;              // eax
    double v4;           // st7
    unsigned __int8 v6;  // c0
    unsigned __int8 v7;  // c3
    double v8;           // st7
    double v9;           // st7
    double v10;          // st7
    double v11;          // st6
    double v12;          // st7
    double v13;          // st6
    char *v14;           // esi
    unsigned __int8 v16; // c0
    unsigned __int8 v17; // c3
    char v19;            // c0
    float *v20;          // ebp
    long double v21;     // st6
    double v22;          // st7
    double v23;          // st5
    double v24;          // st4
    long double v25;     // st3
    double v26;          // st6
    double v27;          // st2
    double v28;          // st1
    int v29;             // eax
    double v30;          // rt2
    double v31;          // rt0
    double v32;          // st1
    double v33;          // st5
    double v34;          // st0
    double v35;          // st4
    double v36;          // st0
    double v37;          // st6
    double v38;          // rtt
    double v39;          // st7
    int result;          // eax
    float v41;           // [esp+0h] [ebp-28h]
    float v42;           // [esp+0h] [ebp-28h]
    float v43;           // [esp+14h] [ebp-14h]
    float v44;           // [esp+14h] [ebp-14h]
    float v45;           // [esp+14h] [ebp-14h]
    float v46;           // [esp+18h] [ebp-10h]
    int v47[3];          // [esp+1Ch] [ebp-Ch] BYREF

    v2 = *((_DWORD *)this + 0x9ED);
    v3 = *((_DWORD *)this + 04756);
    v47[0] = *((_DWORD *)this + 0x9EC);
    v47[1] = v2;
    v47[2] = v3;
    v46 = sub_1003B170((float *)this + 0x81);
    v4 = sub_1003B170((float *)this + 0x7A);
    v43 = v4 * 0.30000001;
    if (v6 | v7)
        v8 = 0.0;
    else
        v8 = v46 - 2.5;
    if (v8 > 31.415928)
        v8 = 31.415928;
    if (v43 > 31.415928)
        v43 = 31.415928;
    if (v8 <= *((float *)this + 2613))
        v8 = v8 * 0.050000001 + *((float *)this + 2613) * 0.94999999;
    *((float *)this + 2613) = v8;
    v9 = v43 * 0.050000001 + *((float *)this + 2614) * 0.94999999;
    *((float *)this + 2614) = v9;
    *((float *)this + 2614) = (1.0 - *((float *)this + 2622) * 18.181818) * v9;
    *((_DWORD *)this + 2540) = *((_DWORD *)this + 2619);
    *((_DWORD *)this + 2541) = *((_DWORD *)this + 2620);
    *((_DWORD *)this + 2542) = *((_DWORD *)this + 2621);
    if (dword_106909E0)
        v10 = 0.5;
    else
        v10 = 0.15000001;
    v11 = v10 * 0.031830989;
    v12 = *((float *)this + 2613) * 0.0095492965;
    v13 = v11 * *((float *)this + 2614);
    v14 = (char *)this + 10112;
    if (v12 - v13 + *((float *)this + 2622) <= 0.07) {
        v41 = v13 - (*((float *)this + 2622) + v12 - 0.07);
        meth_100015D0(this, COERCE_FLOAT((#479 *)((char *)this + 10112)), v41);
    } else {
        meth_100015D0(this, COERCE_FLOAT((#479 *)((char *)this + 10112)), 0.0);
    }
    meth_10001760(this);
    *((_DWORD *)this + 2619) = *((_DWORD *)this + 2540);
    *((_DWORD *)this + 2620) = *((_DWORD *)this + 2541);
    *((_DWORD *)this + 2621) = *((_DWORD *)this + 2542);
    if (!*((_DWORD *)this + 991)) {
        meth_100011F0((float *)this, *(float *)&v14, (int)v47);
        if (dword_100C129C) {
            if (dword_106909E0) {
                dword_10AF9BB4 = 30;
                if (*((char **)this + 2509) == v14) {
                    *((_DWORD *)this + 2509) = (char *)this + 10044;
                    *((_DWORD *)this + 990) = 2;
                    dword_10AF9BB0 = 60;
                }
            }
            if (*((float *)this + 2622) >= 0.02) {
                *((float *)this + 2622) = *((float *)this + 2622) - -0.0099999998;
                if (!(v16 | v17))
                    *((_DWORD *)this + 2622) = 1029785518;
                *((_DWORD *)this + 2622) = 1028443341;
            } else {
                *((_DWORD *)this + 2622) = 1017370378;
                *((_DWORD *)this + 2622) = 1028443341;
            }
        } else {
            if (dword_10AF9BB4)
                --dword_10AF9BB4;
            *((float *)this + 2622) = *((float *)this + 2622) - 0.0049999999;
            if (v19)
                *((_DWORD *)this + 2622) = 0;
        }
    }
    meth_10001890(this, *(float *)&v14);
    if (*((_DWORD *)this + 991)) {
        qmemcpy((char *)this + 10044, this, 0x44u);
    } else {
        *((float *)this + 2523) =
            *(float *)(*((_DWORD *)this + 2673) + 32952) * *((float *)this + 8) +
            *(float *)(*((_DWORD *)this + 2673) + 32944) * *(float *)this + *((float *)this + 12);
        *((float *)this + 2524) =
            *(float *)(*((_DWORD *)this + 2673) + 32944) * *((float *)this + 1) +
            *(float *)(*((_DWORD *)this + 2673) + 32952) * *((float *)this + 9) +
            *((float *)this + 13);
        *((float *)this + 2525) =
            *(float *)(*((_DWORD *)this + 2673) + 32944) * *((float *)this + 2) +
            *(float *)(*((_DWORD *)this + 2673) + 32952) * *((float *)this + 10) +
            *((float *)this + 14);
        sub_1003B020((int)this + 10044, (int)this, -20.0);
        sub_1003ACC0((float *)this + 2511, (float *)this + 2511);
        sub_1003AE50((float *)this + 2511);
        *((_DWORD *)this + 2515) = *((_DWORD *)this + 4);
        *((_DWORD *)this + 2516) = *((_DWORD *)this + 5);
        *((_DWORD *)this + 2517) = *((_DWORD *)this + 6);
        sub_1003AC30((float *)this + 2519, (float *)this + 2511, (float *)this + 2515);
    }
    qmemcpy((char *)this + 10180, (char *)this + 10044, 0x44u);
    sub_1003B020((int)this + 10228, (int)this, 0.60000002);
    v20 = (float *)((char *)this + 32);
    *((_DWORD *)this + 2570) = 0;
    *((_DWORD *)this + 2571) = 0;
    *((_DWORD *)this + 2572) = 1065353216;
    sub_1003AF40((float *)this + 2562, (float *)this + 12, (float *)this + 8);
    sub_1003AF10((float *)this + 2562, (float *)this + 2574);
    v44 = sub_1003B170((float *)this + 2562);
    sub_1003AD70((int)this + 10248, v44);
    sub_1003AC30((float *)this + 2566, (float *)this + 2570, (float *)this + 2562);
    sub_1003AC30((float *)this + 2570, (float *)this + 2562, (float *)this + 2566);
    if (v44 > 1.0) {
        if (v44 < 101.0)
            v45 = v44 - 1.0;
        else
            v45 = 100.0;
    } else {
        v45 = 0.0;
    }
    v42 = (v45 - 1.0) * 0.041887902;
    v21 = cos_(v42);
    v22 = *(float *)this;
    v23 = *v20;
    v24 = *((float *)this + 9);
    v25 = v21 * 0.1 - (51.0 - v45) * -0.0040000002;
    v26 = *((float *)this + 10);
    v27 = *((float *)this + 2);
    v28 = -*((float *)this + 1);
    *((float *)this + 2578) = (v25 - -0.69999999) * flt_100AA8AC;
    *((float *)this + 2561) = flt_100AA8AC;
    *((float *)this + 2544) = flt_100AA8AC;
    *((float *)this + 2527) = flt_100AA8AC;
    v29 = *((_DWORD *)this + 2673);
    *((float *)this + 2612) = flt_100AA8AC;
    v30 = v28;
    v31 = v23 * *(float *)(v29 + 32952);
    v32 = -*((float *)this + 4);
    v33 = -*((float *)this + 5);
    *((float *)this + 2608) = v31 - v22 * *(float *)(v29 + 32948) * -2.0 + *((float *)this + 12);
    v34 = v24 * *(float *)(v29 + 32952) - *(float *)(v29 + 32948) * *((float *)this + 1) * -2.0;
    v35 = -*((float *)this + 6);
    *((float *)this + 2609) = v34 + *((float *)this + 13);
    v36 = v26;
    v37 = *(float *)(v29 + 32948) * *((float *)this + 2);
    v38 = v36 * *(float *)(v29 + 32952);
    *((float *)this + 2596) = -v22;
    *((float *)this + 2597) = v30;
    *((float *)this + 2598) = -v27;
    *((float *)this + 2600) = v32;
    *((float *)this + 2601) = v33;
    v39 = v38 - v37 * -2.0 + *((float *)this + 14);
    *((float *)this + 2602) = v35;
    *((float *)this + 2610) = v39;
    *((float *)this + 2604) = *v20;
    *((_DWORD *)this + 2605) = *((_DWORD *)this + 9);
    *((_DWORD *)this + 2606) = *((_DWORD *)this + 10);
    result = *((_DWORD *)this + 2509);
    *((_DWORD *)this + 2510) = result;
    return result;
}
// 10001A2B: variable 'v6' is possibly undefined
// 10001A2B: variable 'v7' is possibly undefined
// 10001C4E: variable 'v16' is possibly undefined
// 10001C4E: variable 'v17' is possibly undefined
// 10001C95: variable 'v19' is possibly undefined
// 100AA8AC: using guessed type float flt_100AA8AC;
// 100C129C: using guessed type int dword_100C129C;
// 106909E0: using guessed type int dword_106909E0;
// 10AF9BB0: using guessed type int dword_10AF9BB0;
// 10AF9BB4: using guessed type int dword_10AF9BB4;
