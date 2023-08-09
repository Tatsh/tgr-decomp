#include "types-win32.h"
//----- (10075360) --------------------------------------------------------
int __thiscall meth_10075360(int this) {
    int v1;              // edi
    float *v2;           // ebx
    unsigned __int8 v3;  // cl
    unsigned __int8 v4;  // dl
    int v5;              // eax
    int v6;              // eax
    int v7;              // ebp
    int v8;              // edi
    int v9;              // ebx
    int v10;             // edx
    int v11;             // ecx
    int v12;             // edi
    int v13;             // ebp
    float *v14;          // esi
    double v15;          // st6
    double v16;          // st4
    double v17;          // rt2
    double v18;          // st4
    double v19;          // rtt
    double v20;          // rt0
    double v21;          // st6
    double v22;          // st7
    float *v23;          // esi
    double v24;          // st7
    float v25;           // edx
    unsigned __int8 v27; // [esp+12h] [ebp-46h]
    unsigned __int8 v28; // [esp+13h] [ebp-45h]
    float v29;           // [esp+14h] [ebp-44h]
    float v30;           // [esp+14h] [ebp-44h]
    float v31;           // [esp+14h] [ebp-44h]
    float v32;           // [esp+14h] [ebp-44h]
    int v33;             // [esp+18h] [ebp-40h]
    int v34;             // [esp+1Ch] [ebp-3Ch]
    float v35;           // [esp+1Ch] [ebp-3Ch]
    float v36;           // [esp+20h] [ebp-38h]
    float v37;           // [esp+24h] [ebp-34h]
    int v38;             // [esp+28h] [ebp-30h]
    float *v39;          // [esp+2Ch] [ebp-2Ch]
    float v41;           // [esp+34h] [ebp-24h]
    float v42;           // [esp+38h] [ebp-20h]
    float v43;           // [esp+3Ch] [ebp-1Ch]
    float v44;           // [esp+40h] [ebp-18h] BYREF
    float v45;           // [esp+44h] [ebp-14h]
    int v46;             // [esp+48h] [ebp-10h]
    float v47[3];        // [esp+4Ch] [ebp-Ch] BYREF

    v1 = this;
    v34 = -1;
    v2 = (float *)(this + 48);
    v41 = *(float *)(this + 48);
    v42 = *(float *)(this + 52);
    v3 = *(_BYTE *)(this + 10684);
    v43 = *(float *)(this + 56);
    v4 = *(_BYTE *)(this + 10685);
    v38 = 0;
    v39 = (float *)(this + 48);
    v33 = 1;
    v27 = v3;
    v28 = v4;
    if ((gChosenTrack == 3 || gChosenTrack == 9) && v3 >= 0x38u && v3 <= 0x3Au && v4 >= 0x17u &&
        v4 <= 0x1Bu) {
        v27 = 57;
        v28 = 25;
        v33 = 0;
    }
    v36 = *(float *)(v1 + 4084) - (double)*(int *)(v1 + 4012) * *(float *)(dword_106C7CB8 + 100);
    if (!v33 ||
        (v5 = *(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984),
         sub_1003BC90(
             (float *)(v5 + 64), (float *)(v5 + 88), (float *)(v1 + 3968), (float *)(this + 48))) ||
        (v6 = *(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984),
         sub_1003BC90((float *)(v6 + 104), (float *)(v6 + 128), (float *)(v1 + 3968), v2)) ||
        sub_1003B0E0(v2, (float *)(*(_DWORD *)(v1 + 3980) + 40 * *(_DWORD *)(v1 + 3984) + 76)) >=
            64.0) {
        v9 = 0;
        v37 = (flt_106C7C74 - flt_106C7C70) * (flt_106C7C74 - flt_106C7C70);
        if (dword_106C7CC4 > 0) {
            v10 = dword_106C7CB8;
            do {
                if (*(_DWORD *)(v1 + 320) < dword_100B4050 || gGameMode == GAME_MODE_2 ||
                    (*(_BYTE *)(*(_DWORD *)(dword_106C7CC0 + 4 * v9) + 22) & 1) == 0) {
                    v11 = *(_DWORD *)(dword_106C7CC0 + 4 * v9);
                    if (v27 >= *(_BYTE *)(v11 + 16) && v27 <= *(_BYTE *)(v11 + 18) &&
                        v28 >= *(_BYTE *)(v11 + 17) && v28 <= *(_BYTE *)(v11 + 19) &&
                        (!v33 ||
                         *(float *)(v10 + 100) - *(float *)(v11 + 100) - v36 <= 1000.0 &&
                             v36 - (*(float *)(v10 + 100) -
                                    *(float *)(v11 + 40 * *(unsigned __int16 *)(v11 + 20) + 100)) <=
                                 1000.0)) {
                        v12 = 0;
                        v13 = *(unsigned __int16 *)(v11 + 20);
                        if ((_WORD)v13) {
                            v14 = (float *)(v11 + 84);
                            do {
                                v15 = *v14 - v43;
                                v16 = *(v14 - 2) - v41;
                                v17 = v16 * v16;
                                v18 = *(v14 - 1) - v42;
                                v29 = v18;
                                v19 = v18 * v29;
                                v30 = v15;
                                v20 = v15 * v30;
                                v31 = v19 + v17;
                                v21 = v20 + v31;
                                if (v21 < v37) {
                                    v22 = *(v14 - 4) - v14[2];
                                    v46 = 0;
                                    v44 = v22;
                                    v45 = v14[1] - *(v14 - 5);
                                    sub_1003AEE0(v47, v39, v14 - 2);
                                    if (sub_1003AC90(&v44, v47) >= 0.0) {
                                        v34 = v12;
                                        v32 = v21;
                                        v37 = v32;
                                        v38 = v9;
                                    }
                                }
                                ++v12;
                                v14 += 10;
                            } while (v12 < v13);
                            v10 = dword_106C7CB8;
                        }
                        v1 = this;
                    }
                }
                ++v9;
            } while (v9 < dword_106C7CC4);
        }
        if (v34 == -1)
            return 0;
        v8 = v34;
        v7 = *(_DWORD *)(dword_106C7CC0 + 4 * v38);
    } else {
        v7 = *(_DWORD *)(v1 + 3980);
        v8 = *(_DWORD *)(v1 + 3984);
    }
    v23 = (float *)(v7 + 40 * v8);
    v44 = v23[17] - v23[23];
    v24 = v23[22] - v23[16];
    v46 = 0;
    v45 = v24;
    sub_1003AE50(&v44);
    sub_1003AEE0(v47, v39, v23 + 19);
    v35 = (double)(*(_DWORD *)(this + 4012) + 1) * *(float *)(dword_106C7CB8 + 100) - v23[25] +
          sub_1003AC90(&v44, v47) - *(float *)(this + 4084);
    if (!v33 || v35 > -1000.0 && v35 < 1000.0)
        *(float *)(this + 4084) = v35 + *(float *)(this + 4084);
    v25 = v45;
    *(float *)(this + 3988) = v44;
    *(_DWORD *)(this + 3996) = v46;
    *(_DWORD *)(this + 3980) = v7;
    *(_DWORD *)(this + 3984) = v8;
    *(float *)(this + 3992) = v25;
    return 1;
}
// 100B380C: using guessed type int gChosenTrack;
// 100B4050: using guessed type int dword_100B4050;
// 106C7C70: using guessed type float flt_106C7C70;
// 106C7C74: using guessed type float flt_106C7C74;
// 106C7CC0: using guessed type int dword_106C7CC0;
// 106C7CC4: using guessed type int dword_106C7CC4;
