//----- (1006DDC0) --------------------------------------------------------
int __cdecl sub_1006DDC0(int a1) {
    float *v2;  // ebp
    int v3;     // edi
    double v4;  // st7
    double v5;  // st7
    double v6;  // st7
    int v7;     // eax
    double v8;  // st7
    double v9;  // st7
    double v10; // st7
    int v11;    // eax
    double v12; // st7
    double v13; // st7
    double v14; // st7
    int v15;    // eax
    void *v16;  // ecx
    double v17; // st7
    double v18; // st7
    double v19; // st7
    void *v20;  // ecx
    void *v21;  // ecx
    double v23; // st7
    char v24;   // c0
    double v25; // st6
    double v26; // st7
    int v28;    // [esp+18h] [ebp-20h]
    float *v29; // [esp+1Ch] [ebp-1Ch]
    float v30;  // [esp+20h] [ebp-18h] BYREF
    float v31;  // [esp+24h] [ebp-14h]
    float v32;  // [esp+28h] [ebp-10h]
    int v33;    // [esp+2Ch] [ebp-Ch] BYREF
    float v34;  // [esp+30h] [ebp-8h]
    float v35;  // [esp+34h] [ebp-4h]
    float v36;  // [esp+3Ch] [ebp+4h]
    float v37;  // [esp+3Ch] [ebp+4h]

    v2 = (float *)(a1 + 188);
    v29 = (float *)(a1 + 276);
    sub_10074450((float *)(a1 + 188), (float *)(a1 + 276));
    v3 = *(_DWORD *)(a1 + 4);
    v28 = 0;
    v36 = 100.0;
    if (*(_DWORD *)(v3 + 436)) {
        v28 = 1;
        if (*(float *)(v3 + 120) == 0.0) {
            v4 = 0.0;
        } else if (*(float *)(v3 + 120) <= 0.0) {
            v4 = -1.0;
        } else {
            v4 = 1.0;
        }
        v30 = *(float *)(a1 + 476) * 0.5 * v4;
        if (*(float *)(v3 + 124) == 0.0) {
            v5 = 0.0;
        } else if (*(float *)(v3 + 124) <= 0.0) {
            v5 = -1.0;
        } else {
            v5 = 1.0;
        }
        v31 = *(float *)(a1 + 480) * 0.5 * v5;
        v32 = *(float *)(a1 + 488) - *(float *)(a1 + 484) * 0.5;
        sub_100747C0((float *)&v33, v2, &v30);
        if (sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) >= 0.0)
            v6 = sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33);
        else
            v6 = -sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33);
        if (v6 <= 100.0)
            v36 = v6;
    } else {
        v3 = 1120403456;
    }
    v7 = *(_DWORD *)(a1 + 8);
    if (*(_DWORD *)(v7 + 436)) {
        v3 = *(_DWORD *)(a1 + 8);
        ++v28;
        if (*(float *)(v7 + 120) == 0.0)
            v8 = 0.0;
        else
            v8 = *(float *)(v3 + 120) <= 0.0 ? -1.0 : 1.0;
        v30 = *(float *)(a1 + 476) * 0.5 * v8;
        if (*(float *)(v3 + 124) == 0.0)
            v9 = 0.0;
        else
            v9 = *(float *)(v3 + 124) <= 0.0 ? -1.0 : 1.0;
        v31 = *(float *)(a1 + 480) * 0.5 * v9;
        v32 = *(float *)(a1 + 488) - *(float *)(a1 + 484) * 0.5;
        sub_100747C0((float *)&v33, v2, &v30);
        v10 = sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) >= 0.0 ?
                  sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) :
                  -sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33);
        if (v36 >= v10)
            v36 = v10;
    }
    v11 = *(_DWORD *)(a1 + 12);
    if (*(_DWORD *)(v11 + 436)) {
        v3 = *(_DWORD *)(a1 + 12);
        ++v28;
        if (*(float *)(v11 + 120) == 0.0)
            v12 = 0.0;
        else
            v12 = *(float *)(v3 + 120) <= 0.0 ? -1.0 : 1.0;
        v30 = *(float *)(a1 + 476) * 0.5 * v12;
        if (*(float *)(v3 + 124) == 0.0)
            v13 = 0.0;
        else
            v13 = *(float *)(v3 + 124) <= 0.0 ? -1.0 : 1.0;
        v31 = *(float *)(a1 + 480) * 0.5 * v13;
        v32 = *(float *)(a1 + 488) - *(float *)(a1 + 484) * 0.5;
        sub_100747C0((float *)&v33, v2, &v30);
        v14 = sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) >= 0.0 ?
                  sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) :
                  -sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33);
        if (v36 >= v14)
            v36 = v14;
    }
    v15 = *(_DWORD *)(a1 + 16);
    v16 = *(void **)(v15 + 436);
    if (v16) {
        v3 = *(_DWORD *)(a1 + 16);
        ++v28;
        if (*(float *)(v15 + 120) == 0.0)
            v17 = 0.0;
        else
            v17 = *(float *)(v3 + 120) <= 0.0 ? -1.0 : 1.0;
        v30 = *(float *)(a1 + 476) * 0.5 * v17;
        if (*(float *)(v3 + 124) == 0.0)
            v18 = 0.0;
        else
            v18 = *(float *)(v3 + 124) <= 0.0 ? -1.0 : 1.0;
        v31 = *(float *)(a1 + 480) * 0.5 * v18;
        v32 = *(float *)(a1 + 488) - *(float *)(a1 + 484) * 0.5;
        sub_100747C0((float *)&v33, v2, &v30);
        v19 = sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) >= 0.0 ?
                  sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33) :
                  -sub_1006C9A0(v3 + 420, *(float *)(v3 + 432), (int)&v33);
        if (v36 >= v19)
            v36 = v19;
    }
    if (v28 > 2)
        return 0;
    if (v28 < 1)
        return 0;
    debugPrint(v16);
    if (v36 > 0.6)
        return 0;
    sub_1006B510((float *)&v33, (float *)a1, (int *)&v30);
    v37 = *(float *)(v3 + 428) * v35 + *(float *)(v3 + 424) * v34 +
          *(float *)(v3 + 420) * *(float *)&v33;
    debugPrint(v20);
    v23 = v37;
    if (v24)
        v23 = -v23;
    if (v23 > 0.1)
        return 0;
    v25 = *(float *)(a1 + 420) * *v2;
    v26 = *(float *)(a1 + 424) * *(float *)(a1 + 192) + *(float *)(a1 + 428) * *(float *)(a1 + 196);
    v30 = 0.0;
    v31 = 0.1;
    if (v26 + v25 <= 0.0)
        v31 = -0.1;
    v32 = 0.0;
    debugPrint(v21);
    sub_10074770((float *)&v33, (int)v2, &v30);
    *(float *)(a1 + 316) = *(float *)(a1 + 316) - *(float *)&v33 * -2.0;
    *(float *)(a1 + 320) = *(float *)(a1 + 320) - v34 * -2.0;
    *(float *)(a1 + 324) = *(float *)(a1 + 324) - v35 * -2.0;
    sub_100742D0(v29);
    return 1;
}
// 1006E337: variable 'v16' is possibly undefined
// 1006E3A0: variable 'v20' is possibly undefined
// 1006E3BB: variable 'v24' is possibly undefined
// 1006E435: variable 'v21' is possibly undefined
