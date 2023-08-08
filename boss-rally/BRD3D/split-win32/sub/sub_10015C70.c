#include "types-win32.h"
//----- (10015C70) --------------------------------------------------------
int __cdecl sub_10015C70(int a1) {
    int v1;             // esi
    unsigned __int8 v3; // c0
    unsigned __int8 v4; // c3
    BOOL v5;            // edi
    int v6;             // ebp
    DWORD v7;           // ecx
    double v8;          // st7
    int v9;             // ebp
    int v10;            // ecx
    int v11;            // edx
    _DWORD *v12;        // eax
    int v13;            // eax
    unsigned int v14;   // edx
    char *v15;          // eax
    bool v16;           // zf
    int v17;            // ecx
    int v18;            // eax
    int v19;            // edx
    char *v20;          // eax
    float *v21;         // ebp
    float *v22;         // ecx
    float *v23;         // ecx
    int v24;            // ecx
    double v25;         // st6
    double v26;         // st6
    float *v27;         // esi
    double v28;         // st6
    double v29;         // st6
    float *v30;         // edi
    float *v31;         // edx
    double v32;         // st6
    double v33;         // st6
    double v34;         // st6
    _DWORD *i;          // [esp+10h] [ebp-10h]
    int v37;            // [esp+10h] [ebp-10h]
    int v38;            // [esp+14h] [ebp-Ch]
    _DWORD *v39;        // [esp+24h] [ebp+4h]
    int j;              // [esp+24h] [ebp+4h]

    if (dword_104AFD04 < 0 || dword_104AFD18 < 0)
        return 0;
    v1 = dword_1039B75C < 0 ?
             0 :
             dword_1039B760[47164 * dword_104AFD04] - dword_1039B760[47164 * dword_1039B75C];
    dword_1039B75C = dword_104AFD04;
    dword_104AFD14 = dword_104AFD18;
    v5 = (v3 | v4) == 0;
    v6 = 1;
    v7 = getTicks();
    if (v5) {
        v8 = 1.0;
    } else if (a1) {
        v8 = 1.0;
    } else if (dword_104AFD0C) {
        v8 = (double)(v7 - dword_104AFD0C) * 0.030000001 + flt_1039B73C - (double)v1;
        if (!v1 && v8 > 1.0)
            v6 = 0;
        if (v8 < 0.0)
            v8 = 0.0;
        if (v8 > 1.0)
            v8 = 1.0;
    } else {
        v8 = 0.0;
    }
    if (!g_Interpolate) {
        v8 = 1.0;
        v6 = 1;
    }
    if (!v6)
        return 0;
    v9 = dword_104AFD14;
    dword_1039B728[0] = 0;
    dword_104AFD0C = v7;
    dword_1039B72C = 0;
    dword_1039B730 = 0;
    flt_1039B73C = v8;
    dword_1039B734 = 0;
    dword_1039B738 = 0;
    dword_1039B728[dword_1039B75C] = 1;
    v10 = dword_100B36F8;
    dword_1039B728[v9] = 1;
    if (v10 > 0) {
        v39 = &unk_10481C74;
        v38 = v10;
        v11 = 188656 * v9;
        v12 = (_DWORD *)((char *)&unk_1039B7C4 + 188656 * v9);
        for (i = v12;; v12 = i) {
            qmemcpy(v39 - 24, v12 - 24, 0x80u);
            v13 = *v12;
            if (v13) {
                v14 = (int)((unsigned __int64)(1583170091i64 * (v13 - (int)flt_1039C168 - v11)) >>
                            32) >>
                      12;
                v15 = (char *)&unk_10482618 + 11112 * (v14 >> 31) + 11112 * v14;
                v11 = 188656 * v9;
                *v39 = v15;
            }
            i += 32;
            v16 = v38 == 1;
            v39 += 32;
            --v38;
            if (v16)
                break;
        }
    }
    v17 = dword_100B36FC;
    v18 = 0;
    v37 = 0;
    for (j = 0;; v18 = j) {
        if (!v17)
            v17 = 1;
        if (v37 >= v17)
            break;
        v19 = v18 + 188656 * v9;
        v20 = (char *)&unk_10484D6C + v18;
        v21 = (float *)((char *)flt_1039C168 + v19);
        qmemcpy(v20 - 10068, (char *)flt_1039C168 + v19, 0x2B68u);
        v22 = *(float **)((char *)&dword_1039E89C + v19);
        if (v22) {
            if (v22 == (float *)((char *)&flt_1039E8A4 + v19)) {
                *((_DWORD *)v20 - 8) = v20 - 24;
            } else if (v22 == (float *)((char *)&unk_1039E9F8 + v19)) {
                *((_DWORD *)v20 - 8) = v20 + 316;
            } else if (v22 == (float *)((char *)&flt_1039E8E8 + v19)) {
                *((_DWORD *)v20 - 8) = v20 + 44;
            } else if (v22 == (float *)((char *)&flt_1039E92C + v19)) {
                *((_DWORD *)v20 - 8) = v20 + 112;
            } else if (v22 == (float *)((char *)&flt_1039E970 + v19)) {
                *((_DWORD *)v20 - 8) = v20 + 180;
            } else {
                *((_DWORD *)v20 - 8) = 0;
            }
        }
        v23 = *(float **)((char *)&dword_1039E8A0 + v19);
        if (v23) {
            if (v23 == (float *)((char *)&flt_1039E8A4 + v19)) {
                *((_DWORD *)v20 - 7) = v20 - 24;
            } else if (v23 == (float *)((char *)&unk_1039E9F8 + v19)) {
                *((_DWORD *)v20 - 7) = v20 + 316;
            } else if (v23 == (float *)((char *)&flt_1039E8E8 + v19)) {
                *((_DWORD *)v20 - 7) = v20 + 44;
            } else if (v23 == (float *)((char *)&flt_1039E92C + v19)) {
                *((_DWORD *)v20 - 7) = v20 + 112;
            } else if (v23 == (float *)((char *)&flt_1039E970 + v19)) {
                *((_DWORD *)v20 - 7) = v20 + 180;
            } else {
                *((_DWORD *)v20 - 7) = 0;
            }
        }
        v24 = 188656 * dword_1039B75C + j;
        *((float *)v20 - 2517) = (*(float *)((char *)flt_1039C168 + v24) - *v21) * v8 + *v21;
        *((float *)v20 - 2516) = (*(float *)((char *)&flt_1039C16C + v24) - v21[1]) * v8 + v21[1];
        *((float *)v20 - 2515) = (*(float *)((char *)&flt_1039C170 + v24) - v21[2]) * v8 + v21[2];
        *((float *)v20 - 2513) =
            (*(float *)((char *)&flt_1039C178 + v24) - *(float *)((char *)&flt_1039C178 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C178 + v19);
        *((float *)v20 - 2512) =
            (*(float *)((char *)&flt_1039C17C + v24) - *(float *)((char *)&flt_1039C17C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C17C + v19);
        *((float *)v20 - 2511) =
            (*(float *)((char *)&flt_1039C180 + v24) - *(float *)((char *)&flt_1039C180 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C180 + v19);
        *((float *)v20 - 2509) =
            (*(float *)((char *)&flt_1039C188 + v24) - *(float *)((char *)&flt_1039C188 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C188 + v19);
        *((float *)v20 - 2508) =
            (*(float *)((char *)&flt_1039C18C + v24) - *(float *)((char *)&flt_1039C18C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C18C + v19);
        *((float *)v20 - 2507) =
            (*(float *)((char *)&flt_1039C190 + v24) - *(float *)((char *)&flt_1039C190 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C190 + v19);
        *((float *)v20 - 2505) =
            (*(float *)((char *)&flt_1039C198 + v24) - *(float *)((char *)&flt_1039C198 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C198 + v19);
        *((float *)v20 - 2504) =
            (*(float *)((char *)&flt_1039C19C + v24) - *(float *)((char *)&flt_1039C19C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C19C + v19);
        *((float *)v20 - 2503) =
            (*(float *)((char *)&flt_1039C1A0 + v24) - *(float *)((char *)&flt_1039C1A0 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C1A0 + v19);
        *((float *)v20 - 2489) =
            (*(float *)((char *)&flt_1039C1D8 + v24) - *(float *)((char *)&flt_1039C1D8 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C1D8 + v19);
        *((float *)v20 - 2488) =
            (*(float *)((char *)&flt_1039C1DC + v24) - *(float *)((char *)&flt_1039C1DC + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C1DC + v19);
        *((float *)v20 - 2487) =
            (*(float *)((char *)&flt_1039C1E0 + v24) - *(float *)((char *)&flt_1039C1E0 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C1E0 + v19);
        *((float *)v20 - 2473) =
            (*(float *)((char *)&flt_1039C218 + v24) - *(float *)((char *)&flt_1039C218 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C218 + v19);
        *((float *)v20 - 2472) =
            (*(float *)((char *)&flt_1039C21C + v24) - *(float *)((char *)&flt_1039C21C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C21C + v19);
        *((float *)v20 - 2471) =
            (*(float *)((char *)&flt_1039C220 + v24) - *(float *)((char *)&flt_1039C220 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C220 + v19);
        *((float *)v20 - 2457) =
            (*(float *)((char *)&flt_1039C258 + v24) - *(float *)((char *)&flt_1039C258 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C258 + v19);
        *((float *)v20 - 2456) =
            (*(float *)((char *)&flt_1039C25C + v24) - *(float *)((char *)&flt_1039C25C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C25C + v19);
        *((float *)v20 - 2455) =
            (*(float *)((char *)&flt_1039C260 + v24) - *(float *)((char *)&flt_1039C260 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C260 + v19);
        *((float *)v20 - 2441) =
            (*(float *)((char *)&flt_1039C298 + v24) - *(float *)((char *)&flt_1039C298 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C298 + v19);
        *((float *)v20 - 2440) =
            (*(float *)((char *)&flt_1039C29C + v24) - *(float *)((char *)&flt_1039C29C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C29C + v19);
        *((float *)v20 - 2439) =
            (*(float *)((char *)&flt_1039C2A0 + v24) - *(float *)((char *)&flt_1039C2A0 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039C2A0 + v19);
        *((float *)v20 - 6) =
            (*(float *)((char *)&flt_1039E8A4 + v24) - *(float *)((char *)&flt_1039E8A4 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8A4 + v19);
        *((float *)v20 - 5) =
            (*(float *)((char *)&flt_1039E8A8 + v24) - *(float *)((char *)&flt_1039E8A8 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8A8 + v19);
        *((float *)v20 - 4) =
            (*(float *)((char *)&flt_1039E8AC + v24) - *(float *)((char *)&flt_1039E8AC + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8AC + v19);
        *((float *)v20 - 2) =
            (*(float *)((char *)&unk_1039E8B4 + v24) - *(float *)((char *)&unk_1039E8B4 + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E8B4 + v19);
        *((float *)v20 - 1) = (*(float *)((char *)&unk_1039E8B4 + v24 + 4) -
                               *(float *)((char *)&unk_1039E8B4 + v19 + 4)) *
                                  v8 +
                              *(float *)((char *)&unk_1039E8B4 + v19 + 4);
        *(float *)v20 = (*(float *)((char *)&unk_1039E8B4 + v24 + 8) -
                         *(float *)((char *)&unk_1039E8B4 + v19 + 8)) *
                            v8 +
                        *(float *)((char *)&unk_1039E8B4 + v19 + 8);
        *((float *)v20 + 2) =
            (*(float *)((char *)&flt_1039E8C4 + v24) - *(float *)((char *)&flt_1039E8C4 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8C4 + v19);
        *((float *)v20 + 3) = (*(float *)((char *)&flt_1039E8C8 + v24) -
                               *(float *)((char *)&flt_1039E8C4 + v19 + 4)) *
                                  v8 +
                              *(float *)((char *)&flt_1039E8C4 + v19 + 4);
        *((float *)v20 + 4) = (*(float *)((char *)&flt_1039E8CC + v24) -
                               *(float *)((char *)&flt_1039E8C4 + v19 + 8)) *
                                  v8 +
                              *(float *)((char *)&flt_1039E8C4 + v19 + 8);
        *((float *)v20 + 6) =
            (*(float *)((char *)&unk_1039E8D4 + v24) - *(float *)((char *)&unk_1039E8D4 + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E8D4 + v19);
        *((float *)v20 + 7) = (*(float *)((char *)&unk_1039E8D4 + v24 + 4) -
                               *(float *)((char *)&unk_1039E8D4 + v19 + 4)) *
                                  v8 +
                              *(float *)((char *)&unk_1039E8D4 + v19 + 4);
        *((float *)v20 + 8) = (*(float *)((char *)&unk_1039E8D4 + v24 + 8) -
                               *(float *)((char *)&unk_1039E8D4 + v19 + 8)) *
                                  v8 +
                              *(float *)((char *)&unk_1039E8D4 + v19 + 8);
        v25 = (*(float *)((char *)&flt_1039E8E4 + v24) - *(float *)((char *)&flt_1039E8E4 + v19)) *
                  v8 +
              *(float *)((char *)&flt_1039E8E4 + v19);
        *((_DWORD *)v20 + 5) = 0;
        *((_DWORD *)v20 + 1) = 0;
        *((_DWORD *)v20 - 3) = 0;
        *((_DWORD *)v20 + 9) = 1065353216;
        *((float *)v20 + 10) = v25;
        *((float *)v20 + 11) =
            (*(float *)((char *)&flt_1039E8E8 + v24) - *(float *)((char *)&flt_1039E8E8 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8E8 + v19);
        *((float *)v20 + 12) =
            (*(float *)((char *)&flt_1039E8EC + v24) - *(float *)((char *)&flt_1039E8EC + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8EC + v19);
        *((float *)v20 + 13) =
            (*(float *)((char *)&flt_1039E8F0 + v24) - *(float *)((char *)&flt_1039E8F0 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E8F0 + v19);
        *((float *)v20 + 15) =
            (*(float *)((char *)&unk_1039E8F8 + v24) - *(float *)((char *)&unk_1039E8F8 + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E8F8 + v19);
        *((float *)v20 + 16) = (*(float *)((char *)&unk_1039E8F8 + v24 + 4) -
                                *(float *)((char *)&unk_1039E8F8 + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E8F8 + v19 + 4);
        *((float *)v20 + 17) = (*(float *)((char *)&unk_1039E8F8 + v24 + 8) -
                                *(float *)((char *)&unk_1039E8F8 + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E8F8 + v19 + 8);
        *((float *)v20 + 19) =
            (*(float *)((char *)&unk_1039E908 + v24) - *(float *)((char *)&unk_1039E908 + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E908 + v19);
        *((float *)v20 + 20) = (*(float *)((char *)&unk_1039E908 + v24 + 4) -
                                *(float *)((char *)&unk_1039E908 + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E908 + v19 + 4);
        *((float *)v20 + 21) = (*(float *)((char *)&unk_1039E908 + v24 + 8) -
                                *(float *)((char *)&unk_1039E908 + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E908 + v19 + 8);
        *((float *)v20 + 23) =
            (*(float *)((char *)&flt_1039E918 + v24) - *(float *)((char *)&flt_1039E918 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E918 + v19);
        *((float *)v20 + 24) = (*(float *)((char *)&flt_1039E91C + v24) -
                                *(float *)((char *)&flt_1039E918 + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E918 + v19 + 4);
        *((float *)v20 + 25) = (*(float *)((char *)&flt_1039E920 + v24) -
                                *(float *)((char *)&flt_1039E918 + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E918 + v19 + 8);
        v26 = (*(float *)((char *)&flt_1039E928 + v24) - *(float *)((char *)&flt_1039E928 + v19)) *
                  v8 +
              *(float *)((char *)&flt_1039E928 + v19);
        *((_DWORD *)v20 + 22) = 0;
        *((_DWORD *)v20 + 18) = 0;
        *((_DWORD *)v20 + 14) = 0;
        *((_DWORD *)v20 + 26) = 1065353216;
        *((float *)v20 + 27) = v26;
        *((float *)v20 + 28) =
            (*(float *)((char *)&flt_1039E92C + v24) - *(float *)((char *)&flt_1039E92C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E92C + v19);
        *((float *)v20 + 29) =
            (*(float *)((char *)&flt_1039E930 + v24) - *(float *)((char *)&flt_1039E930 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E930 + v19);
        *((float *)v20 + 30) =
            (*(float *)((char *)&flt_1039E934 + v24) - *(float *)((char *)&flt_1039E934 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E934 + v19);
        *((float *)v20 + 32) =
            (*(float *)((char *)&unk_1039E93C + v24) - *(float *)((char *)&unk_1039E93C + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E93C + v19);
        *((float *)v20 + 33) = (*(float *)((char *)&unk_1039E93C + v24 + 4) -
                                *(float *)((char *)&unk_1039E93C + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E93C + v19 + 4);
        *((float *)v20 + 34) = (*(float *)((char *)&unk_1039E93C + v24 + 8) -
                                *(float *)((char *)&unk_1039E93C + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E93C + v19 + 8);
        *((float *)v20 + 36) =
            (*(float *)((char *)&flt_1039E94C + v24) - *(float *)((char *)&flt_1039E94C + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E94C + v19);
        *((float *)v20 + 37) = (*(float *)((char *)&flt_1039E94C + v24 + 4) -
                                *(float *)((char *)&flt_1039E950 + v19)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E950 + v19);
        *((float *)v20 + 38) = (*(float *)((char *)&flt_1039E94C + v24 + 8) -
                                *(float *)((char *)&flt_1039E954 + v19)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E954 + v19);
        *((float *)v20 + 40) =
            (*(float *)((char *)&unk_1039E95C + v24) - *(float *)((char *)&unk_1039E95C + v19)) *
                v8 +
            *(float *)((char *)&unk_1039E95C + v19);
        *((float *)v20 + 41) = (*(float *)((char *)&unk_1039E95C + v24 + 4) -
                                *(float *)((char *)&unk_1039E95C + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E95C + v19 + 4);
        v27 = (float *)((char *)&flt_1039E970 + v19);
        *((float *)v20 + 42) = (*(float *)((char *)&unk_1039E95C + v24 + 8) -
                                *(float *)((char *)&unk_1039E95C + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&unk_1039E95C + v19 + 8);
        v28 = (*(float *)((char *)&flt_1039E96C + v24) - *(float *)((char *)&flt_1039E96C + v19)) *
                  v8 +
              *(float *)((char *)&flt_1039E96C + v19);
        *((_DWORD *)v20 + 39) = 0;
        *((_DWORD *)v20 + 35) = 0;
        *((_DWORD *)v20 + 31) = 0;
        *((_DWORD *)v20 + 43) = 1065353216;
        *((float *)v20 + 44) = v28;
        *((float *)v20 + 45) =
            (*(float *)((char *)&flt_1039E970 + v24) - *(float *)((char *)&flt_1039E970 + v19)) *
                v8 +
            *(float *)((char *)&flt_1039E970 + v19);
        *((float *)v20 + 46) = (*(float *)((char *)&flt_1039E974 + v24) -
                                *(float *)((char *)&flt_1039E970 + v19 + 4)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E970 + v19 + 4);
        *((float *)v20 + 47) = (*(float *)((char *)&flt_1039E978 + v24) -
                                *(float *)((char *)&flt_1039E970 + v19 + 8)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E970 + v19 + 8);
        *((float *)v20 + 49) = (*(float *)((char *)&flt_1039E980 + v24) -
                                *(float *)((char *)&flt_1039E970 + v19 + 16)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E970 + v19 + 16);
        *((float *)v20 + 50) = (*(float *)((char *)&flt_1039E984 + v24) -
                                *(float *)((char *)&flt_1039E970 + v19 + 20)) *
                                   v8 +
                               *(float *)((char *)&flt_1039E970 + v19 + 20);
        v29 = (*(float *)((char *)&flt_1039E988 + v24) -
               *(float *)((char *)&flt_1039E970 + v19 + 24)) *
              v8;
        v30 = (float *)((char *)&unk_1039E9F8 + v24);
        v31 = (float *)((char *)&unk_1039E9F8 + v19);
        *((float *)v20 + 51) = v29 + v27[6];
        *((float *)v20 + 53) = (*(float *)((char *)&flt_1039E990 + v24) - v27[8]) * v8 + v27[8];
        *((float *)v20 + 54) = (*(float *)((char *)&flt_1039E994 + v24) - v27[9]) * v8 + v27[9];
        *((float *)v20 + 55) = (*(float *)((char *)&flt_1039E998 + v24) - v27[10]) * v8 + v27[10];
        *((float *)v20 + 57) = (*(float *)((char *)&flt_1039E9A0 + v24) - v27[12]) * v8 + v27[12];
        *((float *)v20 + 58) = (*(float *)((char *)&flt_1039E9A4 + v24) - v27[13]) * v8 + v27[13];
        *((float *)v20 + 59) = (*(float *)((char *)&flt_1039E9A8 + v24) - v27[14]) * v8 + v27[14];
        v32 = (*(float *)((char *)&flt_1039E9B0 + v24) - v27[16]) * v8 + v27[16];
        *((_DWORD *)v20 + 56) = 0;
        *((_DWORD *)v20 + 52) = 0;
        *((_DWORD *)v20 + 48) = 0;
        *((_DWORD *)v20 + 60) = 1065353216;
        *((float *)v20 + 61) = v32;
        *((float *)v20 + 79) = (*(float *)((char *)&unk_1039E9F8 + v24) - *v31) * v8 + *v31;
        *((float *)v20 + 80) = (*(float *)((char *)&unk_1039E9F8 + v24 + 4) - v31[1]) * v8 + v31[1];
        *((float *)v20 + 81) = (*(float *)((char *)&unk_1039E9F8 + v24 + 8) - v31[2]) * v8 + v31[2];
        *((float *)v20 + 83) =
            (*(float *)((char *)&unk_1039E9F8 + v24 + 16) - v31[4]) * v8 + v31[4];
        *((float *)v20 + 84) =
            (*(float *)((char *)&unk_1039E9F8 + v24 + 20) - v31[5]) * v8 + v31[5];
        *((float *)v20 + 85) =
            (*(float *)((char *)&unk_1039E9F8 + v24 + 24) - v31[6]) * v8 + v31[6];
        *((float *)v20 + 87) =
            (*(float *)((char *)&unk_1039E9F8 + v24 + 32) - v31[8]) * v8 + v31[8];
        v33 = *(float *)((char *)&unk_1039E9F8 + v24 + 36) - v31[9];
        j += 11112;
        v17 = dword_100B36FC;
        ++v37;
        *((float *)v20 + 88) = v33 * v8 + v31[9];
        *((float *)v20 + 89) = (v30[10] - v31[10]) * v8 + v31[10];
        *((float *)v20 + 91) = (v30[12] - v31[12]) * v8 + v31[12];
        *((float *)v20 + 92) = (v30[13] - v31[13]) * v8 + v31[13];
        *((float *)v20 + 93) = (v30[14] - v31[14]) * v8 + v31[14];
        v34 = (v30[16] - v31[16]) * v8 + v31[16];
        *((_DWORD *)v20 + 90) = 0;
        *((_DWORD *)v20 + 86) = 0;
        *((_DWORD *)v20 + 82) = 0;
        *((_DWORD *)v20 + 94) = 1065353216;
        v9 = dword_104AFD14;
        *((float *)v20 + 95) = v34;
    }
    qmemcpy(&unk_104ADC98, (char *)&unk_103C77E8 + 188656 * v9, 0x58u);
    dword_104ADCF0 = dword_103C7840[47164 * v9];
    qmemcpy(&unk_104ADCF4, &word_103C7844[94328 * v9], 0x2008u);
    sub_10014A30(5);
    ++dword_104AFD08;
    return 1;
}
// 10015D4D: variable 'v3' is possibly undefined
// 10015D4D: variable 'v4' is possibly undefined
// 100A66EC: using guessed type int g_Interpolate;
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 1039B728: using guessed type int dword_1039B728[];
// 1039B72C: using guessed type int dword_1039B72C;
// 1039B730: using guessed type int dword_1039B730;
// 1039B734: using guessed type int dword_1039B734;
// 1039B738: using guessed type int dword_1039B738;
// 1039B73C: using guessed type float flt_1039B73C;
// 1039B75C: using guessed type int dword_1039B75C;
// 1039B760: using guessed type int dword_1039B760[];
// 1039C168: using guessed type float flt_1039C168[];
// 1039C16C: using guessed type float flt_1039C16C;
// 1039C170: using guessed type float flt_1039C170;
// 1039C178: using guessed type float flt_1039C178;
// 1039C17C: using guessed type float flt_1039C17C;
// 1039C180: using guessed type float flt_1039C180;
// 1039C188: using guessed type float flt_1039C188;
// 1039C18C: using guessed type float flt_1039C18C;
// 1039C190: using guessed type float flt_1039C190;
// 1039C198: using guessed type float flt_1039C198;
// 1039C19C: using guessed type float flt_1039C19C;
// 1039C1A0: using guessed type float flt_1039C1A0;
// 1039C1D8: using guessed type float flt_1039C1D8;
// 1039C1DC: using guessed type float flt_1039C1DC;
// 1039C1E0: using guessed type float flt_1039C1E0;
// 1039C218: using guessed type float flt_1039C218;
// 1039C21C: using guessed type float flt_1039C21C;
// 1039C220: using guessed type float flt_1039C220;
// 1039C258: using guessed type float flt_1039C258;
// 1039C25C: using guessed type float flt_1039C25C;
// 1039C260: using guessed type float flt_1039C260;
// 1039C298: using guessed type float flt_1039C298;
// 1039C29C: using guessed type float flt_1039C29C;
// 1039C2A0: using guessed type float flt_1039C2A0;
// 1039E89C: using guessed type int dword_1039E89C;
// 1039E8A0: using guessed type int dword_1039E8A0;
// 1039E8A4: using guessed type float flt_1039E8A4;
// 1039E8A8: using guessed type float flt_1039E8A8;
// 1039E8AC: using guessed type float flt_1039E8AC;
// 1039E8C4: using guessed type float flt_1039E8C4;
// 1039E8C8: using guessed type float flt_1039E8C8;
// 1039E8CC: using guessed type float flt_1039E8CC;
// 1039E8E4: using guessed type float flt_1039E8E4;
// 1039E8E8: using guessed type float flt_1039E8E8;
// 1039E8EC: using guessed type float flt_1039E8EC;
// 1039E8F0: using guessed type float flt_1039E8F0;
// 1039E918: using guessed type float flt_1039E918;
// 1039E91C: using guessed type float flt_1039E91C;
// 1039E920: using guessed type float flt_1039E920;
// 1039E928: using guessed type float flt_1039E928;
// 1039E92C: using guessed type float flt_1039E92C;
// 1039E930: using guessed type float flt_1039E930;
// 1039E934: using guessed type float flt_1039E934;
// 1039E94C: using guessed type float flt_1039E94C;
// 1039E950: using guessed type float flt_1039E950;
// 1039E954: using guessed type float flt_1039E954;
// 1039E96C: using guessed type float flt_1039E96C;
// 1039E970: using guessed type float flt_1039E970;
// 1039E974: using guessed type float flt_1039E974;
// 1039E978: using guessed type float flt_1039E978;
// 1039E980: using guessed type float flt_1039E980;
// 1039E984: using guessed type float flt_1039E984;
// 1039E988: using guessed type float flt_1039E988;
// 1039E990: using guessed type float flt_1039E990;
// 1039E994: using guessed type float flt_1039E994;
// 1039E998: using guessed type float flt_1039E998;
// 1039E9A0: using guessed type float flt_1039E9A0;
// 1039E9A4: using guessed type float flt_1039E9A4;
// 1039E9A8: using guessed type float flt_1039E9A8;
// 1039E9B0: using guessed type float flt_1039E9B0;
// 103C7840: using guessed type int dword_103C7840[];
// 104ADCF0: using guessed type int dword_104ADCF0;
// 104AFD04: using guessed type int dword_104AFD04;
// 104AFD08: using guessed type int dword_104AFD08;
// 104AFD0C: using guessed type int dword_104AFD0C;
// 104AFD14: using guessed type int dword_104AFD14;
// 104AFD18: using guessed type int dword_104AFD18;
