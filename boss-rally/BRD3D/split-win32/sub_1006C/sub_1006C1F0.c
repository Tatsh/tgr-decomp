#include "types-win32.h"
//----- (1006C1F0) --------------------------------------------------------
void __cdecl sub_1006C1F0(int a1, int a2, int a3, int a4, float a5) {
    int v6;              // eax
    float *v8;           // ebx
    double v9;           // st5
    double v10;          // st4
    double v11;          // st7
    double v12;          // rt1
    double v13;          // rtt
    float v14;           // edx
    double v15;          // st3
    double v16;          // st7
    double v17;          // st4
    double v18;          // st5
    double v19;          // st5
    double v20;          // st6
    long double v21;     // st4
    double v22;          // st7
    double v23;          // st7
    double v24;          // st3
    double v25;          // st7
    double v26;          // st7
    double v27;          // st6
    __int16 v28;         // ax
    double v30;          // st6
    char v31;            // c0
    double v33;          // st5
    char v34;            // c0
    double v35;          // st7
    double v36;          // st6
    double v37;          // rt2
    double v38;          // st7
    double v40;          // st6
    char v41;            // c0
    double X;            // st7
    unsigned __int8 v44; // c0
    unsigned __int8 v45; // c3
    double v46;          // st7
    float v47;           // [esp+14h] [ebp-48h]
    float v48;           // [esp+14h] [ebp-48h]
    float v49;           // [esp+14h] [ebp-48h]
    float v50;           // [esp+18h] [ebp-44h]
    float v51;           // [esp+18h] [ebp-44h]
    float v52;           // [esp+18h] [ebp-44h]
    float v53;           // [esp+1Ch] [ebp-40h]
    float v54;           // [esp+1Ch] [ebp-40h]
    float v55;           // [esp+1Ch] [ebp-40h]
    float v56;           // [esp+20h] [ebp-3Ch] BYREF
    float v57;           // [esp+24h] [ebp-38h]
    float v58;           // [esp+28h] [ebp-34h]
    float v59;           // [esp+2Ch] [ebp-30h]
    float v60;           // [esp+30h] [ebp-2Ch]
    float v61;           // [esp+34h] [ebp-28h]
    int v62[3];          // [esp+38h] [ebp-24h] BYREF
    float v63[3];        // [esp+44h] [ebp-18h] BYREF
    float v64[3];        // [esp+50h] [ebp-Ch] BYREF
    int v65;             // [esp+60h] [ebp+4h]
    float v66;           // [esp+64h] [ebp+8h]
    float v67;           // [esp+64h] [ebp+8h]
    int v68;             // [esp+64h] [ebp+8h]
    int v69;             // [esp+68h] [ebp+Ch]

    v62[0] = 0;
    v62[1] = 1065353216;
    v6 = *(_DWORD *)(a2 + 412);
    v62[2] = 0;
    if (v6 && *(float *)(a2 + 428) >= 0.7) {
        v8 = (float *)(a1 + 188);
        sub_10074770(&v56, a1 + 188, (float *)v62);
        v9 = v58 * *(float *)(a2 + 420) - v56 * *(float *)(a2 + 428);
        v10 = v57 * *(float *)(a2 + 428) - v58 * *(float *)(a2 + 424);
        v47 = v10;
        v11 = v56 * *(float *)(a2 + 424) - v57 * *(float *)(a2 + 420);
        v50 = v9;
        v53 = v11;
        v12 = v11 * *(float *)(a2 + 424);
        v13 = v10 * *(float *)(a2 + 428);
        v14 = *(float *)(a2 + 448);
        v15 = v53 * *(float *)(a2 + 420);
        v16 = v50 * *(float *)(a2 + 420);
        v17 = v12 - v9 * *(float *)(a2 + 428);
        v18 = v47 * *(float *)(a2 + 424);
        v59 = v17;
        v60 = v13 - v15;
        v61 = v16 - v18;
        v66 = cos_(v14);
        v19 = v66;
        v20 = v66;
        v21 = sin_(*(float *)(a2 + 448));
        v22 = v66 * v47;
        v67 = v21;
        v48 = v22;
        v51 = v19 * v50;
        v54 = v20 * v53;
        v49 = v67 * v59 + v48;
        v52 = v67 * v60 + v51;
        v55 = v67 * v61 + v54;
        if (*(_DWORD *)(*(_DWORD *)(a1 + 4) + 436) && *(_DWORD *)(*(_DWORD *)(a1 + 12) + 436) &&
            *(_DWORD *)(*(_DWORD *)(a1 + 8) + 436) && *(_DWORD *)(*(_DWORD *)(a1 + 16) + 436)) {
            sub_1006B430(v63, (float *)a1, (float *)a2);
            v65 = *(int *)(a2 + 460);
            v23 = *(float *)&v65 / *(float *)(a2 + 456);
            v56 = 0.0;
            v57 = 0.0;
            v24 = v23;
            v25 = (*(float *)(a1 + 44) - *(float *)(a2 + 44) * -4.0) * 2.9430003;
            *(float *)&v68 = v24;
            v58 = v25;
            v26 = v25 * *(float *)(a2 + 428) * 3.5;
            v27 = v63[0] * v49 + v63[1] * v52 + v63[2] * v55;
            *(float *)a3 = *(float *)a3 - *(float *)&v68 * -0.5;
            *(float *)&v69 = v27;
            if (*(_BYTE *)a4) {
                v28 = dword_104BBE08 - 1;
                if ((__int16)(dword_104BBE08 - 1) > 2 || v28 < 0)
                    v28 = 0;
                *(float *)&v68 =
                    *(float *)(dword_11750330 +
                               4 * (((2 * *(unsigned __int8 *)(a2 + 416) + 1) >> 1) +
                                    (__int16)(8 * v28) + 24 * *(unsigned __int8 *)(a1 + 509))) *
                    *(float *)&v68;
            }
            v30 = *(float *)&v68;
            if (v31)
                v30 = -v30;
            v33 = v26;
            if (v34)
                v33 = -v26;
            if (v30 > v33) {
                v35 = v26 / *(float *)&v68;
                if (v35 < 0.0)
                    v35 = -v35;
                *(float *)&v68 = v35 * *(float *)&v68 * 0.1;
            }
            v36 = -*(float *)&v68;
            v64[0] = v49 * v36;
            v64[1] = v52 * v36;
            v64[2] = v55 * v36;
            sub_10074720(&v56, v8, v64);
            *(float *)(*(_DWORD *)(a2 + 24) + 8) = v56 + *(float *)(*(_DWORD *)(a2 + 24) + 8);
            *(float *)(*(_DWORD *)(a2 + 24) + 12) = v57 + *(float *)(*(_DWORD *)(a2 + 24) + 12);
            *(float *)(*(_DWORD *)(a2 + 24) + 16) = v58 + *(float *)(*(_DWORD *)(a2 + 24) + 16);
            v37 = (*(float *)&v65 - *(float *)&v68 * *(float *)(a2 + 456)) * a5 +
                  *(float *)(a2 + 452);
            v38 = v37 - (*(float *)(a2 + 456) * v37 + *(float *)&v69) * 0.40000001;
        } else {
            v38 = *(float *)(a2 + 460) * a5 + *(float *)(a2 + 452);
        }
        *(float *)(a2 + 452) = v38;
        v40 = v38;
        if (v41)
            v40 = -v38;
        if (v40 > 300.0) {
            if (v38 == 0.0) {
                *(float *)(a2 + 452) = 0.0 * 300.0;
            } else if (v38 <= 0.0) {
                *(float *)(a2 + 452) = -1.0 * 300.0;
            } else {
                *(float *)(a2 + 452) = 1.0 * 300.0;
            }
        }
        X = *(float *)(a2 + 468) - *(float *)(a2 + 452) * 57.295776 * a5;
        *(float *)(a2 + 468) = X;
        if (_finite(X) && *(float *)(a2 + 468) >= -36000.0 && *(float *)(a2 + 468) < 36000.0) {
            if (*(float *)(a2 + 468) > 360.0) {
                do
                    *(float *)(a2 + 468) = *(float *)(a2 + 468) - 360.0;
                while (!(v44 | v45));
            }
            if (*(float *)(a2 + 468) < 0.0) {
                v46 = *(float *)(a2 + 468);
                do
                    v46 = v46 - -360.0;
                while (v46 < 0.0);
                *(float *)(a2 + 468) = v46;
            }
        } else {
            *(_DWORD *)(a2 + 468) = 0;
        }
    }
}
// 1006C4ED: variable 'v31' is possibly undefined
// 1006C500: variable 'v34' is possibly undefined
// 1006C5FB: variable 'v41' is possibly undefined
// 1006C6EB: variable 'v44' is possibly undefined
// 1006C6EB: variable 'v45' is possibly undefined
// 104BBE08: using guessed type int dword_104BBE08;
// 11750330: using guessed type int dword_11750330;
