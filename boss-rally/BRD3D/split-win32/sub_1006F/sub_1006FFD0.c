#include "types-win32.h"
//----- (1006FFD0) --------------------------------------------------------
void sub_1006FFD0() {
  int v0;        // ecx
  int v1;        // edx
  int *v2;       // esi
  int v3;        // eax
  float *v4;     // ebp
  int v5;        // edi
  int v6;        // ebx
  double v7;     // st7
  float *v8;     // ebx
  double v9;     // st5
  int *v10;      // eax
  double v11;    // st7
  double v12;    // st6
  double v13;    // st7
  char v15;      // c0
  __int64 v16;   // rax
  int v17;       // esi
  double v18;    // st7
  int *v19;      // eax
  double v20;    // st7
  int v21;       // esi
  int v22;       // esi
  double v23;    // st7
  int v24;       // eax
  double v25;    // st7
  int *v26;      // eax
  bool v27;      // cc
  float *v28;    // [esp-4h] [ebp-DCh]
  float *v29;    // [esp-4h] [ebp-DCh]
  float v30;     // [esp+0h] [ebp-D8h]
  int v31;       // [esp+14h] [ebp-C4h] BYREF
  float v32;     // [esp+18h] [ebp-C0h]
  float v33;     // [esp+1Ch] [ebp-BCh]
  int *v34;      // [esp+20h] [ebp-B8h]
  _DWORD *v35;   // [esp+24h] [ebp-B4h]
  float v36;     // [esp+28h] [ebp-B0h]
  float v37;     // [esp+2Ch] [ebp-ACh]
  float v38;     // [esp+30h] [ebp-A8h]
  float v39;     // [esp+34h] [ebp-A4h] BYREF
  float v40;     // [esp+38h] [ebp-A0h]
  float v41;     // [esp+3Ch] [ebp-9Ch]
  int v42;       // [esp+40h] [ebp-98h]
  int v43;       // [esp+44h] [ebp-94h]
  int v44[3];    // [esp+48h] [ebp-90h] BYREF
  int v45;       // [esp+54h] [ebp-84h] BYREF
  float v46;     // [esp+58h] [ebp-80h]
  float v47;     // [esp+5Ch] [ebp-7Ch]
  int v48[3];    // [esp+60h] [ebp-78h] BYREF
  float v49[9];  // [esp+6Ch] [ebp-6Ch] BYREF
  _DWORD v50[9]; // [esp+90h] [ebp-48h] BYREF
  float v51[9];  // [esp+B4h] [ebp-24h] BYREF

  v0 = dword_100B36F8;
  v1 = 0;
  v43 = 0;
  if (dword_100B36F8 > 0) {
    v2 = &dword_10ACD4F8;
    v34 = &dword_10ACD4F8;
    do {
        v3 = *v2;
        if (*v2) {
            if (*(_BYTE *)(v3 + 10671) != 2) {
                ++*(_BYTE *)(v3 + 869);
                v0 = dword_100B36F8;
                v4 = (float *)(*v2 + 476);
                v42 = v1 + 1;
                if (v1 + 1 < dword_100B36F8) {
                    v5 = (int)(v2 + 32);
                    v35 = v2 + 32;
                    do {
                        v6 = *(_DWORD *)v5;
                        if (*(_DWORD *)v5) {
                            if (*(_BYTE *)(v6 + 10671) != 2) {
                                v7 = *v4 - *(float *)(v6 + 476);
                                v8 = (float *)(v6 + 476);
                                *(float *)&v31 = v7;
                                v32 = v4[1] - v8[1];
                                v9 = v4[2] - v8[2];
                                v33 = v9;
                                v30 = *(float *)&v31 * *(float *)&v31 + v32 * v32 + v9 * v33;
                                if (sqrt_(v30) < 5.0) {
                                    v10 = (int *)(*(_DWORD *)v5 + 544);
                                    v48[0] = 1075838976;
                                    v48[1] = 1065353216;
                                    v48[2] = 1065353216;
                                    sub_10074A50(v50, v10);
                                    sub_10074A90(v49, (int *)(*v2 + 544));
                                    sub_10074AC0((int)v51, (int)v50, (int)v49);
                                    *(float *)v44 = *v4 - *v8;
                                    *(float *)&v44[1] = v4[1] - v8[1];
                                    *(float *)&v44[2] = v4[2] - v8[2];
                                    sub_10074830(&v39, v49, (float *)v44);
                                    if (!sub_1006F950(v51, &v39, (float *)v48, (float *)v48))
                                        return;
                                    sub_10074250((float *)&v31);
                                    v11 = *(float *)&v31 * v4[3] + v32 * v4[4] + v33 * v4[5];
                                    v12 =
                                        (*(float *)&v31 * v8[3] + v33 * v8[5] + v32 * v8[4] + v11) *
                                        0.5;
                                    v13 = v12 - v11;
                                    v36 = v12 * *(float *)&v31;
                                    v37 = v12 * v32;
                                    v38 = v12 * v33;
                                    if (v15)
                                        v13 = -v13;
                                    if (v13 > 27.0)
                                        v13 = 27.0;
                                    if (*(_BYTE *)(*v2 + 869) > 0x28u) {
                                        v16 = (__int64)(128.0 - v13 * -4.7037039);
                                        *(_BYTE *)(*v2 + 866) = v16;
                                        *(_BYTE *)(*(_DWORD *)v5 + 866) = v16;
                                    }
                                    *(_BYTE *)(*v2 + 869) = 0;
                                    v28 = (float *)(*v2 + 544);
                                    *(float *)&v45 = *(float *)&v31 * -1.0;
                                    v46 = v32 * -1.0;
                                    v47 = v33 * -1.0;
                                    v39 = *(float *)&v45 * 2.5;
                                    v40 = v46 * 2.5;
                                    v41 = v47 * 2.5;
                                    sub_10074720((float *)v44, v28, &v39);
                                    v4[3] = v4[3] - v36;
                                    v4[4] = v4[4] - v37;
                                    v4[5] = v4[5] - v38;
                                    qmemcpy((void *)(*v2 + 700), (const void *)(*v2 + 476), 0x44u);
                                    v17 = (int)v34;
                                    sub_1006CCD0(*v34 + 356, (int)v44, (int)&v31, 0, 0.44999999);
                                    v18 = v36;
                                    v19 = v34;
                                    qmemcpy((void *)(*(_DWORD *)v17 + 476),
                                            (const void *)(*(_DWORD *)v17 + 700),
                                            0x44u);
                                    *(float *)(*v19 + 712) = v18 + *(float *)(*v19 + 712);
                                    *(float *)(*v19 + 716) = v37 + *(float *)(*v19 + 716);
                                    *(float *)(*v19 + 720) = v38 + *(float *)(*v19 + 720);
                                    *(_DWORD *)(*v19 + 644) = *(_DWORD *)(*v19 + 712);
                                    *(_DWORD *)(*v19 + 648) = *(_DWORD *)(*v19 + 716);
                                    v20 = v36;
                                    *(_DWORD *)(*v19 + 652) = *(_DWORD *)(*v19 + 720);
                                    v21 = (int)v35;
                                    v4[3] = v20 + v4[3];
                                    v4[4] = v37 + v4[4];
                                    v4[5] = v38 + v4[5];
                                    v29 = (float *)(*(_DWORD *)v21 + 544);
                                    v39 = *(float *)&v31 * 2.5;
                                    v40 = v32 * 2.5;
                                    v41 = v33 * 2.5;
                                    sub_10074720((float *)v44, v29, &v39);
                                    v8[3] = v8[3] - v36;
                                    v8[4] = v8[4] - v37;
                                    v8[5] = v8[5] - v38;
                                    qmemcpy((void *)(*(_DWORD *)v21 + 700),
                                            (const void *)(*(_DWORD *)v21 + 476),
                                            0x44u);
                                    v22 = (int)v35;
                                    sub_1006CCD0(*v35 + 356, (int)v44, (int)&v45, 0, 0.44999999);
                                    v23 = v36;
                                    v24 = (int)v35;
                                    qmemcpy((void *)(*(_DWORD *)v22 + 476),
                                            (const void *)(*(_DWORD *)v22 + 700),
                                            0x44u);
                                    *(float *)(*(_DWORD *)v24 + 712) =
                                        v23 + *(float *)(*(_DWORD *)v24 + 712);
                                    *(float *)(*(_DWORD *)v24 + 716) =
                                        v37 + *(float *)(*(_DWORD *)v24 + 716);
                                    *(float *)(*(_DWORD *)v24 + 720) =
                                        v38 + *(float *)(*(_DWORD *)v24 + 720);
                                    *(_DWORD *)(*(_DWORD *)v24 + 644) =
                                        *(_DWORD *)(*(_DWORD *)v24 + 712);
                                    *(_DWORD *)(*(_DWORD *)v24 + 648) =
                                        *(_DWORD *)(*(_DWORD *)v24 + 716);
                                    v25 = v36;
                                    *(_DWORD *)(*(_DWORD *)v24 + 652) =
                                        *(_DWORD *)(*(_DWORD *)v24 + 720);
                                    v8[3] = v25 + v8[3];
                                    v8[4] = v37 + v8[4];
                                    v8[5] = v38 + v8[5];
                                    if (gNetworkPlay) {
                                        v26 = v34;
                                        *(float *)(*v34 + 644) = v4[3];
                                        *(float *)(*v26 + 648) = v4[4];
                                        *(float *)(*v26 + 652) = v4[5];
                                    }
                                    v2 = v34;
                                    v5 = (int)v35;
                                }
                            }
                        }
                        v0 = dword_100B36F8;
                        v5 += 128;
                        v27 = ++v42 < dword_100B36F8;
                        v35 = (_DWORD *)v5;
                    } while (v27);
                    v1 = v43;
                }
            }
        }
        ++v1;
        v2 += 32;
        v43 = v1;
        v34 = v2;
    } while (v1 < v0);
  }
}
// 1007020E: variable 'v15' is possibly undefined
// 100B36F8: using guessed type int dword_100B36F8;
// 1022AF18: using guessed type int g_NetworkPlay;
// 10ACD4F8: using guessed type int dword_10ACD4F8;
