#include "types-win32.h"
//----- (10063FE0) --------------------------------------------------------
void __cdecl sub_10063FE0(int a1) {
  int v1;              // ecx
  double v3;           // st7
  unsigned __int8 v4;  // c0
  unsigned __int8 v5;  // c3
  double v6;           // st7
  int v7;              // eax
  int v8;              // eax
  int v9;              // eax
  int v10;             // edx
  float *v11;          // ecx
  double v12;          // st7
  double v13;          // st5
  double v14;          // rt2
  double v15;          // st5
  double v16;          // st6
  double v18;          // st5
  unsigned __int8 v19; // c0
  unsigned __int8 v20; // c3
  double v21;          // st7
  float v22;           // eax
  float v23;           // edx
  int *v24;            // ecx
  int *v25;            // ecx
  int *v26;            // ecx
  int *v27;            // ecx
  int v28;             // ecx
  double v30;          // st7
  unsigned __int8 v31; // c0
  unsigned __int8 v32; // c3
  double v33;          // st7
  int v34;             // eax
  int v35;             // edx
  int v36;             // ecx
  int v37;             // edx
  int *v38;            // eax
  int v39;             // ecx
  double v40;          // st7
  int v41;             // edx
  double v42;          // st7
  double v43;          // st7
  double v44;          // st6
  double v45;          // st7
  float v46;           // [esp+0h] [ebp-44h]
  int v47;             // [esp+0h] [ebp-44h]
  float v48;           // [esp+0h] [ebp-44h]
  float v49;           // [esp+0h] [ebp-44h]
  float v50;           // [esp+14h] [ebp-30h]
  float v51;           // [esp+18h] [ebp-2Ch]
  float v52;           // [esp+1Ch] [ebp-28h]
  float v53;           // [esp+1Ch] [ebp-28h]
  float v54;           // [esp+1Ch] [ebp-28h]
  int v55;             // [esp+20h] [ebp-24h] BYREF
  float v56;           // [esp+24h] [ebp-20h]
  float v57;           // [esp+28h] [ebp-1Ch]
  int v58;             // [esp+2Ch] [ebp-18h] BYREF
  int v59;             // [esp+30h] [ebp-14h]
  int v60;             // [esp+34h] [ebp-10h]
  float v61[3];        // [esp+38h] [ebp-Ch] BYREF

  if (dword_106C3364)
    *(float *)(*(_DWORD *)(a1 + 10688) + 32) = -*(float *)(*(_DWORD *)(a1 + 10688) + 32);
  v1 = *(_DWORD *)(a1 + 10688);
  v3 = *(float *)(v1 + 32);
  if (v4 | v5) {
    if (v3 >= -0.1) {
        *(_DWORD *)(a1 + 10016) = 0;
    } else {
        v6 = (*(float *)(v1 + 32) - -0.1) * 1.1111112;
        *(float *)(a1 + 10016) = v6 * v6;
    }
  } else {
    *(float *)(a1 + 10016) = -((v3 - 0.1) * 1.1111112 * ((v3 - 0.1) * 1.1111112));
  }
  if ((*(_BYTE *)(*(_DWORD *)(a1 + 3840) + 104) & 2) != 0) {
    v7 = *(_DWORD *)(a1 + 320);
    if (v7 == dword_106C1638 || dword_100AA8B4 > 1 && v7 == dword_106C1690) {
        if (dword_10AF9BB0)
            goto LABEL_47;
        goto LABEL_25;
    }
  }
  if (gGameMode == GAME_MODE_4 || gGameMode == GAME_MODE_5 || dword_106909E0) {
    v8 = *(_DWORD *)(a1 + 320);
    if (v8 == dword_106C1638 || dword_100AA8B4 > 1 && v8 == dword_106C1690) {
        if (dword_10AF9BB0) {
            --dword_10AF9BB0;
        LABEL_45:
            if ((**(_DWORD **)(a1 + 10688) & 0xF000000) != 0)
                dword_10AF9BB0 = 450;
            goto LABEL_47;
        }
    LABEL_25:
        v10 = *(_DWORD *)&gUnk06594.gap493C[20];
        v50 = 16777216.0;
        if (*(int *)&gUnk06594.gap493C[20] > 0) {
            v11 = (float *)(*(_DWORD *)&gUnk06594.gap493C[16] + 8);
            do {
                v13 = *(float *)(a1 + 48) - *(v11 - 2);
                v51 = v13;
                v14 = v13;
                v15 = *(float *)(a1 + 52) - *(v11 - 1);
                v52 = v15;
                v16 = v14 * v51;
                v18 = v15 * v52;
                if (v19 | v20) {
                    v12 = *(float *)(a1 + 56) - *v11;
                    v21 = v12 * v12 + v18 + v16;
                    if (v21 < v50) {
                        v50 = v21;
                        v55 = *((int *)v11 - 2);
                        v56 = *(v11 - 1);
                        v57 = *v11;
                    }
                }
                v11 += 3;
                --v10;
            } while (v10);
        }
        if (v50 >= 22500.0) {
            if (*(_DWORD *)(a1 + 10036) == a1 + 10248) {
                *(_DWORD *)(a1 + 3960) = 1;
                if (dword_10AF9BB8 || dword_10AF9BB4)
                    *(_DWORD *)(a1 + 10036) = a1 + 10044;
                else
                    *(_DWORD *)(a1 + 10036) = a1 + 10112;
                dword_10AF9BB0 = 60;
                dword_10AF9BB8 = dword_10AF9BB8 == 0;
            }
        } else {
            if (*(_DWORD *)(a1 + 10036) != a1 + 10248 || *(float *)(a1 + 10296) != *(float *)&v55 ||
                *(float *)(a1 + 10300) != v56 || *(float *)(a1 + 10304) != v57) {
                *(_DWORD *)(a1 + 3960) = 1;
            }
            v22 = v56;
            *(float *)(a1 + 10296) = *(float *)&v55;
            v23 = v57;
            *(float *)(a1 + 10300) = v22;
            *(float *)(a1 + 10304) = v23;
            *(_DWORD *)(a1 + 10036) = a1 + 10248;
        }
        goto LABEL_45;
    }
  }
  v9 = *(_DWORD *)(a1 + 320);
  if (v9 == dword_106C1638 || dword_100AA8B4 > 1 && v9 == dword_106C1690)
    dword_10AF9BB0 = 0;
LABEL_47:
  v24 = *(int **)(a1 + 10688);
  if ((*v24 & 0x1000000) != 0) {
    *(_DWORD *)(a1 + 10036) = a1 + 10044;
    *(_DWORD *)(a1 + 3960) = 1;
    meth_10035FA0(v24, 0x1000000);
  }
  if ((**(_DWORD **)(a1 + 10688) & 0x2000000) != 0) {
    meth_10001970((#481 *)a1);
    v25 = *(int **)(a1 + 10688);
    *(_DWORD *)(a1 + 3960) = 1;
    meth_10035FA0(v25, 0x2000000);
  }
  v26 = *(int **)(a1 + 10688);
  if ((*v26 & 0x4000000) != 0) {
    *(_DWORD *)(a1 + 10036) = a1 + 10112;
    *(_DWORD *)(a1 + 3960) = 1;
    meth_10035FA0(v26, 0x4000000);
  }
  if (dword_100AA8B4 == 1) {
    v27 = *(int **)(a1 + 10688);
    if ((*v27 & 0x8000000) != 0) {
        *(_DWORD *)(a1 + 10036) = a1 + 10180;
        *(_DWORD *)(a1 + 3960) = 1;
        meth_10035FA0(v27, 0x8000000);
    }
  }
  v28 = *(_DWORD *)(a1 + 10688);
  v30 = *(float *)(v28 + 28);
  if (v31 | v32) {
    if (v30 >= -0.25) {
        *(_DWORD *)(a1 + 10024) = 0;
    } else {
        v33 = (*(float *)(v28 + 28) - -0.25) * 1.3333334;
        *(float *)(a1 + 10024) = -(v33 * v33);
    }
  } else {
    *(float *)(a1 + 10024) = (v30 - 0.25) * 1.3333334 * ((v30 - 0.25) * 1.3333334);
  }
  v34 = *(_DWORD *)(a1 + 3964);
  if (v34)
    *(_DWORD *)(a1 + 10028) = 0;
  if ((BYTE1(*(_DWORD *)v28) & 0x80u) == 0) {
    if (v34) {
        v35 = *(_DWORD *)(a1 + 10024);
        *(_DWORD *)(a1 + 10024) = 0;
        *(_DWORD *)(a1 + 10020) = v35;
    }
  } else if (!v34) {
    *(_DWORD *)(a1 + 10024) = 1065353216;
  }
  if ((*(_BYTE *)v28 & 8) != 0)
    *(_DWORD *)(a1 + 10024) = 1065353216;
  if ((*(_BYTE *)v28 & 2) != 0)
    *(_DWORD *)(a1 + 10024) = -1082130432;
  if ((*(_BYTE *)v28 & 1) != 0) {
    if (v34)
        *(_DWORD *)(a1 + 10028) = 1065353216;
    else
        *(_DWORD *)(a1 + 10016) = -1082130432;
  }
  if ((*(_BYTE *)v28 & 4) != 0) {
    if (v34)
        *(_DWORD *)(a1 + 10028) = -1082130432;
    else
        *(_DWORD *)(a1 + 10016) = 1065353216;
  }
  if (gGameMode == GAME_MODE_5) {
    sub_1003B020(a1 + 48, a1, 15.0);
    meth_10064350((_DWORD *)a1);
    v36 = *(_DWORD *)(a1 + 3880);
    v37 = *(_DWORD *)(a1 + 3884);
    v58 = *(_DWORD *)(a1 + 3876);
    v59 = v36;
    v60 = v37;
    sub_1003B020(a1 + 48, a1, -15.0);
    meth_10064350((_DWORD *)a1);
    **(_DWORD **)(a1 + 10688) &= 0xF0C0FFFF;
    if (*(float *)(a1 + 4084) >= 114.5) {
        v46 = (168.5 - *(float *)(a1 + 4084)) * 0.5;
        sub_1003ACE0((int)&v55, a1 + 3876, v46);
        v38 = *(int **)(a1 + 10688);
        v39 = *v38;
        if (*(float *)(a1 + 4084) <= 167.5) {
            *v38 = v39 | 0x80000;
        } else {
            *v38 = v39 | 0x40000;
            if (*(float *)(a1 + 4084) > 168.39999) {
                v57 = 0.0;
                v56 = 0.0;
                *(float *)&v55 = 0.0;
            }
        }
    } else {
        sub_1003ACE0((int)&v55, a1 + 3876, 27.0);
    }
    v40 = sub_1003AC90((float *)&v58, (float *)(a1 + 16));
    v47 = LODWORD(v57);
    *(float *)(a1 + 3616) = v40 * 3.0;
    *(float *)&v55 = *(float *)&v55 - *(float *)(a1 + 3916) * 0.2;
    v56 = v56 - *(float *)(a1 + 3920) * 0.2;
    meth_100767A0((_DWORD *)a1, v55, SLODWORD(v56), v47);
  }
  if ((dword_118ABAD0 & 0x10000) != 0)
    *(_BYTE *)(a1 + 870) = 0x80;
  if ((dword_118ABAD0 & 0x20000) != 0)
    *(_BYTE *)(a1 + 871) = 0x80;
  if ((dword_118ABAD0 & 0x40000) != 0)
    *(_BYTE *)(a1 + 872) = 0x80;
  if ((dword_118ABAD0 & 0x80000) != 0)
    *(_BYTE *)(a1 + 873) = 0x80;
  if ((dword_118ABAD0 & 0x80u) != 0)
    *(_BYTE *)(a1 + 874) = 0x80;
  meth_10075F10(a1);
  if (!*(_DWORD *)(a1 + 3964)) {
    sub_1003AF40((float *)&v55, (float *)(a1 + 48), (float *)a1);
    sub_1003AF70((float *)&v55, (float *)(a1 + 16));
    sub_1003AF40(v61, (float *)(a1 + 4152), (float *)(a1 + 4164));
    v58 = *(_DWORD *)(a1 + 4176);
    v41 = *(_DWORD *)(a1 + 4184);
    v59 = *(_DWORD *)(a1 + 4180);
    v60 = v41;
    sub_1003AEE0((float *)(a1 + 4176), (float *)(a1 + 4152), (float *)&v55);
    v42 = sub_1003B170((float *)(a1 + 4176));
    if (v42 != 0.0) {
        v48 = v42 / (v42 - -1.0) / v42;
        sub_1003AD10(a1 + 4176, v48);
    }
    v53 = sub_1003B0E0((float *)(a1 + 4176), (float *)&v58);
    v54 = sqrt_(v53);
    v43 = v54 / (sub_1003B170((float *)(a1 + 4164)) - -1.0);
    if (v43 > 0.025) {
        v49 = v43 + v43;
        sub_100347BA(*(_DWORD *)(a1 + 320), v49);
    }
    v44 = v56;
    v45 = v57;
    *(float *)(a1 + 4152) = *(float *)&v55;
    *(float *)(a1 + 4156) = v44;
    *(float *)(a1 + 4160) = v45;
    sub_1003AEE0((float *)(a1 + 4164), (float *)(a1 + 4152), v61);
    *(float *)(a1 + 4172) = *(float *)(a1 + 4172) - 0.32666668;
  }
  if (dword_118ABDCC) {
    if ((*(_BYTE *)(*(_DWORD *)(a1 + 3840) + 104) & 3) == 0 && !dword_106909E0)
        *(_DWORD *)(a1 + 860) = -1;
    dword_118ABDCC = 0;
  }
  meth_10063660((_DWORD *)a1);
}
// 10063876: variable 'v4' is possibly undefined
// 10063876: variable 'v5' is possibly undefined
// 100639B7: variable 'v19' is possibly undefined
// 100639B7: variable 'v20' is possibly undefined
// 10063BBF: variable 'v31' is possibly undefined
// 10063BBF: variable 'v32' is possibly undefined
// 100AA8B4: using guessed type int dword_100AA8B4;
// 106909E0: using guessed type int dword_106909E0;
// 106C1638: using guessed type int dword_106C1638;
// 106C1690: using guessed type int dword_106C1690;
// 106C3364: using guessed type int dword_106C3364;
// 10AF9BB0: using guessed type int dword_10AF9BB0;
// 10AF9BB4: using guessed type int dword_10AF9BB4;
// 10AF9BB8: using guessed type int dword_10AF9BB8;
// 118ABAD0: using guessed type int dword_118ABAD0;
// 118ABDCC: using guessed type int dword_118ABDCC;
