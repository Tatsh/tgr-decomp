#include "../../types-n64.h"
//----- (80221170) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80221170(int a1) {
    float v1;      // $f4
    float *v3;     // $a0
    float v4;      // $f0
    float v5;      // $f14
    float v6;      // $f2
    float v7;      // $f0
    float v8;      // $f0
    float v9;      // $f4
    float v10;     // $f6
    float v11;     // $f10
    float v12;     // $f12
    float v13;     // $f14
    int v14;       // $t7
    float v15;     // $f10
    float v16;     // $f6
    float *v17;    // $t7
    int v18;       // $v0
    float v19;     // $f6
    float v20;     // $f8
    float v21;     // $f10
    float v22;     // $f6
    float v23;     // $f16
    float v24;     // $f0
    int result;    // $v0
    float v26;     // $f18
    float v27;     // $f6
    float v28;     // $f8
    float v29;     // $f4
    float v30;     // $f8
    int v31;       // $t9
    float v32;     // $f4
    float v33;     // $f6
    float v34;     // $f4
    float v35;     // $f8
    float v36;     // [sp+20h] [-98h]
    float v37;     // [sp+24h] [-94h]
    int v38;       // [sp+28h] [-90h]
    float v39;     // [sp+28h] [-90h]
    float v40;     // [sp+2Ch] [-8Ch]
    float *v41;    // [sp+34h] [-84h]
    float v42;     // [sp+40h] [-78h]
    float v43;     // [sp+40h] [-78h]
    float v44;     // [sp+7Ch] [-3Ch]
    float v45[12]; // [sp+88h] [-30h] BYREF

    v1 = *(float *)(a1 + 7780);
    v3 = (float *)(a1 + 488);
    v45[0] = v1;
    v45[1] = v3[1824];
    v45[2] = v3[1825];
    v44 = sub_80224B08(v3);
    v4 = sub_80224B08((float *)(a1 + 460));
    v5 = v4 * 0.30000001;
    if (v44 <= 2.5)
        v6 = 0.0;
    else
        v6 = v44 - 2.5;
    if (v6 > 31.415928)
        v6 = 31.415928;
    if ((float)(v4 * 0.30000001) > 31.415928)
        v5 = 31.415928;
    v7 = *(float *)(a1 + 8072);
    if (v7 >= v6)
        *(float *)(a1 + 8072) = (float)(v7 * 0.94999999) + (float)(v6 * 0.050000001);
    else
        *(float *)(a1 + 8072) = v6;
    v8 = *(float *)(a1 + 8108);
    *(float *)(a1 + 8076) = (float)(*(float *)(a1 + 8076) * 0.94999999) + (float)(v5 * 0.050000001);
    v9 = *(float *)(a1 + 8076) * (float)(1.0 - (float)(v8 * 18.181818));
    v10 = *(float *)(a1 + 8104);
    v11 = *(float *)(a1 + 8100);
    *(_DWORD *)(a1 + 7780) = *(_DWORD *)(a1 + 8096);
    *(float *)(a1 + 7788) = v10;
    *(float *)(a1 + 7784) = v11;
    *(float *)(a1 + 8076) = v9;
    v12 = *(float *)(a1 + 8072) * 0.0095492965;
    v13 = *(float *)(a1 + 8076) * (float)(0.15000001 / 31.415928);
    v38 = a1 + 7732;
    if ((float)(v8 + (float)(v12 - v13)) <= 0.07)
        sub_80220C58(a1, a1 + 7732, (float)((float)(0.07 - v8) - v12) + v13);
    else
        sub_80220C58(a1, a1 + 7732, 0.0);
    sub_80220E84(a1);
    v14 = *(_DWORD *)(a1 + 3916);
    v15 = *(float *)(a1 + 7784);
    v16 = *(float *)(a1 + 7788);
    *(_DWORD *)(a1 + 8096) = *(_DWORD *)(a1 + 7780);
    *(float *)(a1 + 8100) = v15;
    *(float *)(a1 + 8104) = v16;
    if (!v14) {
        sub_80220810(a1, v38, v45);
        *(float *)(a1 + 8108) = *(float *)(a1 + 8108) - 0.0049999999;
        if (*(float *)(a1 + 8108) >= 0.0) {
            v17 = (float *)(a1 + 7664);
            goto LABEL_19;
        }
        *(float *)(a1 + 8108) = 0.0;
    }
    v17 = (float *)(a1 + 7664);
LABEL_19:
    v41 = v17;
    sub_80220FF4(a1, v38);
    v45[9] = *(float *)(a1 + 7712);
    v45[10] = *(float *)(a1 + 7716);
    v45[11] = *(float *)(a1 + 7720);
    if (*(_DWORD *)(a1 + 3916)) {
        sub_80260B20((int)v41, (char *)a1, 68);
    } else {
        v18 = *(_DWORD *)(a1 + 8312);
        v19 = *(float *)(a1 + 36);
        *(float *)(a1 + 7712) =
            (float)(*(float *)(v18 + 184) * *(float *)(a1 + 32)) +
            (float)(*(float *)(a1 + 48) + (float)(*(float *)a1 * *(float *)(v18 + 176)));
        v20 = *(float *)(a1 + 40);
        *(float *)(a1 + 7716) =
            (float)(*(float *)(v18 + 184) * v19) +
            (float)(*(float *)(a1 + 52) + (float)(*(float *)(a1 + 4) * *(float *)(v18 + 176)));
        *(float *)(a1 + 7720) =
            (float)(*(float *)(v18 + 184) * v20) +
            (float)(*(float *)(a1 + 56) + (float)(*(float *)(a1 + 8) * *(float *)(v18 + 176)));
        sub_80224990(v41, (float *)a1, -20.0);
        sub_80224434(v41, v41);
        sub_80224760(v41);
        v21 = *(float *)(a1 + 20);
        v22 = *(float *)(a1 + 24);
        *(_DWORD *)(a1 + 7680) = *(_DWORD *)(a1 + 16);
        *(float *)(a1 + 7684) = v21;
        *(float *)(a1 + 7688) = v22;
        sub_8022439C((float *)(a1 + 7696), v41, (float *)(a1 + 7680));
    }
    sub_80260B20(a1 + 7800, (char *)v41, 68);
    sub_80224990((float *)(a1 + 7848), (float *)a1, 0.5);
    *(float *)(a1 + 7900) = 0.0;
    *(float *)(a1 + 7904) = 0.0;
    *(float *)(a1 + 7908) = 1.0;
    sub_80224894((float *)(a1 + 7868), (float *)(a1 + 48), (float *)(a1 + 32));
    sub_8022483C((float *)(a1 + 7868), (float *)(a1 + 7916));
    v42 = sub_80224B08((float *)(a1 + 7868));
    sub_80224594((float *)(a1 + 7868), v42);
    sub_8022439C((float *)(a1 + 7884), (float *)(a1 + 7900), (float *)(a1 + 7868));
    sub_8022439C((float *)(a1 + 7900), (float *)(a1 + 7868), (float *)(a1 + 7884));
    if (v42 > 1.0) {
        if (v42 >= 101.0)
            v23 = 100.0;
        else
            v23 = v42 - 1.0;
    } else {
        v23 = 0.0;
    }
    v43 = v23;
    v24 = sub_802617D0((float)(v23 - 1.0) * 0.041887902);
    result = *(_DWORD *)(a1 + 8312);
    v26 = *(float *)(a1 + 32);
    *(float *)(a1 + 7932) = (float)((float)((float)(v24 * 0.1) + 0.69999999) +
                                    (float)((float)(51.0 - v43) * 0.0040000002)) *
                            0.52359879;
    *(float *)(a1 + 7864) = 0.52359879;
    v27 = *(float *)a1;
    *(float *)(a1 + 7796) = 0.52359879;
    *(float *)(a1 + 7728) = 0.52359879;
    *(float *)(a1 + 8068) = 0.52359879;
    v28 = *(float *)(a1 + 36);
    *(float *)(a1 + 8052) =
        (float)(*(float *)(result + 184) * v26) +
        (float)(*(float *)(a1 + 48) + (float)((float)(v27 * *(float *)(result + 180)) +
                                              (float)(v27 * *(float *)(result + 180))));
    v40 = v28;
    v39 = *(float *)(a1 + 4);
    v29 = *(float *)(result + 184) * v28;
    v30 = *(float *)(a1 + 40);
    *(float *)(a1 + 8056) =
        v29 + (float)(*(float *)(a1 + 52) + (float)((float)(v39 * *(float *)(result + 180)) +
                                                    (float)(v39 * *(float *)(result + 180))));
    v37 = v30;
    v36 = *(float *)(a1 + 8);
    v31 = *(_DWORD *)(a1 + 7656);
    *(float *)(a1 + 8060) =
        (float)(*(float *)(result + 184) * v30) +
        (float)(*(float *)(a1 + 56) + (float)((float)(v36 * *(float *)(result + 180)) +
                                              (float)(v36 * *(float *)(result + 180))));
    *(float *)(a1 + 8004) = -v27;
    v32 = *(float *)(a1 + 16);
    *(float *)(a1 + 8008) = -v39;
    v33 = -v32;
    v34 = *(float *)(a1 + 24);
    v35 = *(float *)(a1 + 20);
    *(float *)(a1 + 8012) = -v36;
    *(float *)(a1 + 8020) = v33;
    *(float *)(a1 + 8028) = -v34;
    *(float *)(a1 + 8024) = -v35;
    *(float *)(a1 + 8036) = v26;
    *(float *)(a1 + 8040) = v40;
    *(_DWORD *)(a1 + 7660) = v31;
    *(float *)(a1 + 8044) = v37;
    return result;
}
// 802213E8: write access to const memory at 8028B7F8 has been detected
// 80221460: write access to const memory at 8028B7FC has been detected
// 8028B710: using guessed type int dword_8028B710;
