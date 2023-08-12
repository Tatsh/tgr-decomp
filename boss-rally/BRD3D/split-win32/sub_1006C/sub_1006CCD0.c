#include "types-win32.h"
//----- (1006CCD0) --------------------------------------------------------
int __cdecl sub_1006CCD0(int a1, int a2, int a3, int a4, float a5) {
    float v6;            // edx
    float v7;            // eax
    double v8;           // st5
    double v9;           // st6
    double v10;          // st7
    double v11;          // rt1
    double v12;          // st5
    double v13;          // st7
    double v14;          // st6
    int result;          // eax
    int v16;             // edx
    int v17;             // ecx
    int v18;             // eax
    int v19;             // ebp
    double v20;          // rt2
    double v21;          // st7
    double v23;          // st6
    double v24;          // st7
    char v25;            // c0
    unsigned __int8 v26; // al
    __int64 v27;         // rax
    double v28;          // st5
    double v29;          // st6
    double v30;          // st3
    double v31;          // st2
    double v32;          // st1
    double v33;          // st7
    double v34;          // rt0
    double v35;          // st1
    double v36;          // st6
    double v37;          // st6
    double v38;          // st4
    double v39;          // st5
    double v40;          // st7
    double v41;          // st5
    double v42;          // st6
    double v43;          // st4
    double v44;          // st3
    float v45;           // [esp+4h] [ebp-13Ch]
    float v46;           // [esp+4h] [ebp-13Ch]
    float v47;           // [esp+8h] [ebp-138h] BYREF
    float v48;           // [esp+Ch] [ebp-134h]
    float v49;           // [esp+10h] [ebp-130h]
    float v50;           // [esp+14h] [ebp-12Ch]
    float v51;           // [esp+18h] [ebp-128h]
    float v52;           // [esp+1Ch] [ebp-124h]
    float v53;           // [esp+20h] [ebp-120h] BYREF
    float v54;           // [esp+24h] [ebp-11Ch]
    float v55;           // [esp+28h] [ebp-118h]
    float v56;           // [esp+2Ch] [ebp-114h] BYREF
    float v57;           // [esp+30h] [ebp-110h]
    float v58;           // [esp+34h] [ebp-10Ch]
    float v59[3];        // [esp+38h] [ebp-108h] BYREF
    int v60[8];          // [esp+44h] [ebp-FCh] BYREF
    float v61;           // [esp+64h] [ebp-DCh]
    float v62[9];        // [esp+68h] [ebp-D8h] BYREF
    float v63[9];        // [esp+8Ch] [ebp-B4h] BYREF
    float v64[9];        // [esp+B0h] [ebp-90h] BYREF
    float v65[9];        // [esp+D4h] [ebp-6Ch] BYREF
    char v66[36];        // [esp+F8h] [ebp-48h] BYREF
    char v67[36];        // [esp+11Ch] [ebp-24h] BYREF

    v6 = *(float *)(a2 + 4);
    v7 = *(float *)(a2 + 8);
    v47 = *(float *)a2;
    v48 = v6;
    v49 = v7;
    sub_10074A10(v64, (int)v67, (float *)(a1 + 188));
    math_10074830(&v53, v64, &v47);
    v8 = v53 * *(float *)(a1 + 392) - v55 * *(float *)(a1 + 384) + *(float *)(a1 + 360);
    v9 = v54 * *(float *)(a1 + 384) - v53 * *(float *)(a1 + 388) + *(float *)(a1 + 364);
    v10 = v55 * *(float *)(a1 + 388) - v54 * *(float *)(a1 + 392);
    v48 = v8;
    v49 = v9;
    v11 = v10 + *(float *)(a1 + 356);
    v12 = v8 * *(float *)(a3 + 4);
    v13 = *(float *)a3;
    v14 = v9 * *(float *)(a3 + 8);
    v47 = v11;
    if (v12 + v14 + v13 * v47 >= 0.0)
        return 0;
    math_100749D0((int)v66, (int)&v53);
    math_10074AC0((int)v62, a1 + 84, (int)v67);
    math_10074AC0((int)v65, (int)v64, (int)v62);
    math_10074AC0((int)v63, (int)v65, (int)v66);
    math_10074AC0((int)v62, (int)v66, (int)v63);
    v16 = 0;
    v17 = 0;
    do {
        v18 = 0;
        do {
            v19 = v18 + v17;
            if (v16 == v18)
                v60[v19] = 1065353216;
            else
                v60[v19] = 0;
            ++v18;
        } while (v18 < 3);
        v17 += 3;
        ++v16;
    } while (v17 < 9);
    v61 = 1.0 / *(float *)(a1 + 44);
    *(float *)&v60[4] = v61;
    *(float *)v60 = v61;
    math_10074B20((int)v63, (int)v60, v62);
    v45 = v48 * *(float *)(a3 + 4) + v49 * *(float *)(a3 + 8) + *(float *)a3 * v47;
    v20 = *(float *)a3 * v45;
    v21 = v45 * *(float *)(a3 + 8);
    v51 = v45 * *(float *)(a3 + 4);
    v23 = v21;
    v24 = v20;
    v52 = v23;
    if (v25)
        v45 = -v45;
    if (v45 > 27.0)
        v45 = 27.0;
    *(_BYTE *)(a1 + 508) = (__int64)v45;
    *(_DWORD *)(a1 + 492) = dword_11755490;
    *(_DWORD *)(a1 + 496) = dword_11755494;
    v26 = *(_BYTE *)(a1 + 512);
    *(_DWORD *)(a1 + 500) = dword_11755498;
    if (v26 > 0xAu && a5 < 0.000099999997) {
        v27 = (__int64)(128.0 - v45 * -4.7037039);
        if ((unsigned __int8)v27 <= *(_BYTE *)(a1 + 511))
            LOBYTE(v27) = *(_BYTE *)(a1 + 511);
        *(_BYTE *)(a1 + 511) = v27;
        v28 = v51;
        v29 = v52;
        *(float *)(a1 + 356) = *(float *)&dword_100B5968 * *(float *)(a1 + 356);
        v30 = v47;
        v31 = v48;
        v32 = v24;
        v33 = v49;
        v34 = v32 * 0.89999998;
        *(float *)(a1 + 360) = *(float *)&dword_100B5968 * *(float *)(a1 + 360);
        v35 = v33;
        v24 = v34;
        v51 = v28 * 0.89999998;
        v52 = v29 * 0.89999998;
        v47 = v30 * 0.89999998;
        v36 = *(float *)&dword_100B5968 * *(float *)(a1 + 364);
        v48 = v31 * 0.89999998;
        v49 = v35 * 0.89999998;
        *(float *)(a1 + 364) = v36;
    }
    if (a4) {
        v37 = (v47 - v24) * 0.2;
        v38 = (v49 - v52) * 0.2;
        v39 = (v48 - v51) * 0.2;
    } else {
        v37 = 0.0;
        v39 = 0.0;
        v38 = 0.0;
    }
    v47 = v24 + v37;
    v48 = v51 + v39;
    v49 = v52 + v38;
    math_10074C10(&v56, v63, &v47);
    v46 = 1.0 / *(float *)(a1 + 44);
    v47 = v54 * v58 - v55 * v57;
    v50 = v56 * v46;
    v51 = v57 * v46;
    v48 = v55 * v56 - v53 * v58;
    v52 = v58 * v46;
    v49 = v53 * v57 - v54 * v56;
    math_10074830(v59, v65, &v47);
    v40 = a5 - -1.05;
    v41 = *(float *)(a1 + 360) - v51 * v40;
    v42 = *(float *)(a1 + 364) - v52 * v40;
    v43 = *(float *)(a1 + 384) - v59[0] * v40;
    v44 = *(float *)(a1 + 388) - v59[1] * v40;
    *(float *)(a1 + 356) = *(float *)(a1 + 356) - v50 * v40;
    *(float *)(a1 + 360) = v41;
    *(float *)(a1 + 364) = v42;
    *(float *)(a1 + 384) = v43;
    result = 1;
    *(float *)(a1 + 388) = v44;
    *(float *)(a1 + 392) = *(float *)(a1 + 392) - v59[2] * v40;
    return result;
}
// 1006CF2B: variable 'v25' is possibly undefined
// 100B5968: using guessed type int dword_100B5968;
// 11755490: using guessed type int dword_11755490;
// 11755494: using guessed type int dword_11755494;
// 11755498: using guessed type int dword_11755498;
