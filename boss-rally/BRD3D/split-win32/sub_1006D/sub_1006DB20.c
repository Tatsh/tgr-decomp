#include "types-win32.h"
//----- (1006DB20) --------------------------------------------------------
int __cdecl sub_1006DB20(int a1, float *a2) {
  int v2;      // ebp
  int v3;      // ecx
  int v4;      // eax
  int v5;      // ecx
  int v6;      // edx
  int v7;      // eax
  float **v8;  // esi
  int v9;      // ebx
  double v10;  // st2
  double v11;  // st1
  double v12;  // st0
  float **v14; // esi
  int v15;     // ebx
  double v16;  // st2
  double v17;  // st1
  double v18;  // st0
  float v19;   // [esp+10h] [ebp-48h]
  float v20;   // [esp+10h] [ebp-48h]
  float v21;   // [esp+14h] [ebp-44h]
  float v22;   // [esp+14h] [ebp-44h]
  float v23;   // [esp+18h] [ebp-40h]
  float v24;   // [esp+18h] [ebp-40h]
  float v25;   // [esp+1Ch] [ebp-3Ch]
  float v26;   // [esp+1Ch] [ebp-3Ch]
  float v27;   // [esp+20h] [ebp-38h]
  float v28;   // [esp+20h] [ebp-38h]
  float v29;   // [esp+24h] [ebp-34h]
  float v30;   // [esp+24h] [ebp-34h]
  float v31;   // [esp+28h] [ebp-30h] BYREF
  float v32;   // [esp+2Ch] [ebp-2Ch]
  float v33;   // [esp+30h] [ebp-28h]
  float v34;   // [esp+34h] [ebp-24h] BYREF
  float v35;   // [esp+38h] [ebp-20h]
  float v36;   // [esp+3Ch] [ebp-1Ch]
  float v37;   // [esp+40h] [ebp-18h] BYREF
  float v38;   // [esp+44h] [ebp-14h]
  float v39;   // [esp+48h] [ebp-10h]
  float v40;   // [esp+4Ch] [ebp-Ch] BYREF
  float v41;   // [esp+50h] [ebp-8h]
  float v42;   // [esp+54h] [ebp-4h]

  v2 = 0;
  v3 = sub_1006F720(*(float *)(a1 + 236), *(float *)(a1 + 240));
  v4 = *((unsigned __int16 *)&dword_117554A0 + v3);
  v5 = 15 * v3;
  if (!dword_117554E8) {
    v14 = (float **)((char *)&unk_11750338 + 320 * v5);
    if (v4 > 0) {
        v15 = v4;
        do {
            sub_100747C0(&v34, a2, v14[4]);
            sub_100747C0(&v37, a2, v14[5]);
            sub_100747C0(&v40, a2, v14[6]);
            v16 = v40 - v34;
            v20 = v16;
            v17 = v41 - v35;
            v22 = v17;
            v18 = v42 - v36;
            v24 = v18;
            v26 = v37 - v34;
            v28 = v38 - v35;
            v30 = v39 - v36;
            v31 = v18 * v28 - v17 * v30;
            v32 = v16 * v30 - v24 * v26;
            v33 = v22 * v26 - v20 * v28;
            if (sub_1006DAF0(&v34, &v31)) {
                sub_1006D280((int)v14);
                ++v2;
            }
            v14 += 8;
            --v15;
        } while (v15);
    }
    return v2;
  }
  v6 = 32 * (v4 + 10 * v5);
  v7 = v4 - 1;
  v8 = (float **)((char *)&unk_11750318 + v6);
  if (v7 < 0)
    return v2;
  v9 = v7 + 1;
  do {
    sub_100747C0(&v34, a2, v8[4]);
    sub_100747C0(&v37, a2, v8[5]);
    sub_100747C0(&v40, a2, v8[6]);
    v10 = v40 - v34;
    v19 = v10;
    v11 = v41 - v35;
    v21 = v11;
    v12 = v42 - v36;
    v23 = v12;
    v25 = v37 - v34;
    v27 = v38 - v35;
    v29 = v39 - v36;
    v31 = v12 * v27 - v11 * v29;
    v32 = v10 * v29 - v23 * v25;
    v33 = v21 * v25 - v19 * v27;
    if (sub_1006DAF0(&v34, &v31)) {
        sub_1006D280((int)v8);
        ++v2;
    }
    v8 -= 8;
    --v9;
  } while (v9);
  return v2;
}
// 117554A0: using guessed type int dword_117554A0;
// 117554E8: using guessed type int dword_117554E8;
