#include "types-win32.h"
//----- (100309A0) --------------------------------------------------------
int __cdecl sub_100309A0(int a1,
                         float a2,
                         float a3,
                         float a4,
                         float a5,
                         float a6,
                         float a7,
                         float a8,
                         float a9,
                         float a10) {
  double v10; // st7
  int result; // eax
  double v12; // st2
  double v13; // st1
  double v14; // st6
  double v15; // st7
  double v16; // st5
  double v17; // st4
  double v18; // st3
  double v19; // st0
  double v20; // st2
  double v21; // st0
  double v22; // st1
  double v23; // st0
  double v24; // st6
  double v25; // st6
  double v26; // st7
  double v27; // [esp+0h] [ebp-48h] BYREF
  double v28; // [esp+8h] [ebp-40h]
  double v29; // [esp+10h] [ebp-38h]
  double v30; // [esp+18h] [ebp-30h] BYREF
  double v31; // [esp+20h] [ebp-28h]
  double v32; // [esp+28h] [ebp-20h]
  double v33; // [esp+30h] [ebp-18h] BYREF
  double v34; // [esp+38h] [ebp-10h]
  double v35; // [esp+40h] [ebp-8h]

  v30 = a2 - a5;
  v31 = a3 - a6;
  v32 = a4 - a7;
  sub_10030600(&v30);
  v27 = a8;
  v28 = a9;
  v29 = a10;
  v10 = sub_10030640(&v27, &v30);
  v27 = v27 - v10 * v30;
  v28 = v28 - v10 * v31;
  v29 = v29 - v10 * v32;
  sub_10030600(&v27);
  sub_10030670(&v27, &v30, &v33);
  result = a1;
  v12 = v34;
  v13 = v35;
  v14 = v27;
  v15 = -(a2 * v33) - a3 * v34 - a4 * v35;
  v16 = v28;
  v17 = -(a2 * v27) - a3 * v28 - a4 * v29;
  v18 = v29;
  *(float *)a1 = v33;
  v19 = v12;
  v20 = v30;
  *(float *)(a1 + 16) = v19;
  v21 = v13;
  v22 = v31;
  *(float *)(a1 + 32) = v21;
  v23 = v14;
  v24 = v32;
  *(float *)(a1 + 4) = v23;
  *(float *)(a1 + 20) = v16;
  *(float *)(a1 + 36) = v18;
  *(float *)(a1 + 8) = v20;
  *(float *)(a1 + 24) = v22;
  *(float *)(a1 + 40) = v24;
  *(float *)(a1 + 48) = v15;
  *(float *)(a1 + 52) = v17;
  v25 = a4 * v32;
  v26 = -(a2 * v30) - a3 * v31;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 56) = v26 - v25;
  return result;
}
