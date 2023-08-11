#include "types-win32.h"
//----- (1006F0C0) --------------------------------------------------------
double __cdecl sub_1006F0C0(int a2, int a3) {
  float v4;            // ecx
  float v5;            // ecx
  float v6;            // edx
  __int16 v7;          // ax
  int v8;              // esi
  int v9;              // eax
  float *v10;          // esi
  int v11;             // ebx
  double v12;          // st7
  double v13;          // st7
  double v15;          // st6
  char v16;            // c0
  unsigned __int8 v18; // c0
  unsigned __int8 v19; // c3
  float v21;           // [esp+8h] [ebp-34h]
  float v22;           // [esp+Ch] [ebp-30h] BYREF
  float v23;           // [esp+10h] [ebp-2Ch]
  float v24;           // [esp+14h] [ebp-28h]
  float v25;           // [esp+18h] [ebp-24h] BYREF
  float v26;           // [esp+1Ch] [ebp-20h]
  float v27;           // [esp+20h] [ebp-1Ch]
  float v28;           // [esp+24h] [ebp-18h] BYREF
  float v29;           // [esp+28h] [ebp-14h]
  float v30;           // [esp+2Ch] [ebp-10h]
  int v31[3];          // [esp+30h] [ebp-Ch] BYREF
  float v32;           // [esp+44h] [ebp+8h]

  v21 = 100.0;
  v4 = *(float *)(a3 + 124);
  v25 = *(float *)(a3 + 120);
  v26 = v4;
  v31[0] = 0;
  v31[1] = 0;
  v31[2] = -1082130432;
  v27 = 0.0;
  sub_100747C0(&v22, (float *)(a2 + 188), &v25);
  sub_10074770(&v28, a2 + 188, (float *)v31);
  v5 = v23;
  v6 = v22;
  *(_DWORD *)(a3 + 412) = 0;
  v7 = sub_1006F720(v6, v5);
  v8 = 75 * v7;
  v9 = (unsigned __int16)v7;
  LOWORD(v9) = *((_WORD *)&dword_117554A0 + v7);
  v10 = (float *)((char *)&unk_11750338 + 64 * v8);
  if ((_WORD)v9) {
    v11 = v9;
    do {
        v12 = sub_1006C9A0((int)v10, v10[3], (int)&v22);
        if (v12 > -2.0 && v12 < 2.0) {
            v13 = v29 * v10[1] + v30 * v10[2] + v28 * *v10;
            v15 = v13;
            if (v16)
                v15 = -v13;
            if (v15 > 0.001) {
                v32 = -((v23 * v10[1] + v24 * v10[2] + v22 * *v10 + v10[3]) / v13);
                v25 = v32 * v28 + v22;
                v26 = v32 * v29 + v23;
                v27 = v32 * v30 + v24;
                if (!(v18 | v19) && v32 < 2.0 && v32 < (double)v21 && v10[2] > 0.2 &&
                    sub_1006C740((int)v10, (int)&v25)) {
                    *(_DWORD *)(a3 + 412) = v10;
                    v21 = v32;
                    *(_BYTE *)(a3 + 416) = *((_BYTE *)v10 + 30);
                    *(float *)(a3 + 420) = *v10;
                    *(float *)(a3 + 424) = v10[1];
                    *(float *)(a3 + 428) = v10[2];
                    *(float *)(a3 + 432) = v10[3];
                }
            }
        }
        v10 += 8;
        --v11;
    } while (v11);
  }
  return v21;
}
// 1006F1D6: variable 'v16' is possibly undefined
// 1006F266: variable 'v18' is possibly undefined
// 1006F266: variable 'v19' is possibly undefined
// 117554A0: using guessed type int dword_117554A0;
