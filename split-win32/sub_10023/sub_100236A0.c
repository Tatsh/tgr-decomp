#include "../../types-win32.h"
//----- (100236A0) --------------------------------------------------------
int __cdecl sub_100236A0(float *a1, int a2)
{
  float *v2; // eax
  double v3; // st4
  double v4; // st3
  double v5; // st2
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st5
  double v10; // st7
  double v11; // rt0
  int result; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st5
  double v16; // rt1
  double v17; // st7
  double v18; // rt2
  double v20; // rt2
  double v21; // st5
  float v22; // [esp+14h] [ebp-10h]
  float v23; // [esp+14h] [ebp-10h]
  float v24; // [esp+18h] [ebp-Ch] BYREF
  float v25; // [esp+1Ch] [ebp-8h]
  float v26; // [esp+20h] [ebp-4h]
  float v27; // [esp+28h] [ebp+4h]
  float v28; // [esp+28h] [ebp+4h]
  float v29; // [esp+28h] [ebp+4h]
  float v30; // [esp+28h] [ebp+4h]
  float v31; // [esp+28h] [ebp+4h]
  float v32; // [esp+28h] [ebp+4h]
  float v33; // [esp+28h] [ebp+4h]
  float v34; // [esp+28h] [ebp+4h]
  float v35; // [esp+28h] [ebp+4h]
  float v36; // [esp+28h] [ebp+4h]
  float v37; // [esp+28h] [ebp+4h]
  float v38; // [esp+28h] [ebp+4h]
  float v39; // [esp+28h] [ebp+4h]
  float v40; // [esp+28h] [ebp+4h]
  float v41; // [esp+2Ch] [ebp+8h]
  float v42; // [esp+2Ch] [ebp+8h]
  float v43; // [esp+2Ch] [ebp+8h]
  float v44; // [esp+2Ch] [ebp+8h]
  float v45; // [esp+2Ch] [ebp+8h]
  float v46; // [esp+2Ch] [ebp+8h]
  float v47; // [esp+2Ch] [ebp+8h]

  if ( dword_100A79DC )
    v2 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
  else
    v2 = 0;
  v24 = v2[8] * a1[7] + v2[4] * a1[6] + *v2 * a1[5];
  v25 = v2[9] * a1[7] + v2[5] * a1[6] + v2[1] * a1[5];
  v26 = v2[10] * a1[7] + v2[6] * a1[6] + v2[2] * a1[5];
  sub_1003AE50(&v24);
  v27 = (float)*(char *)(dword_104C1698 + 10);
  v3 = v27 * v26;
  v28 = (float)*(char *)(dword_104C169C + 10);
  v4 = v28 * v26;
  v29 = (float)*(char *)(dword_104C1698 + 8);
  v5 = v24 * v29;
  v30 = (float)*(char *)(dword_104C169C + 8);
  v6 = v24 * v30;
  v31 = (float)*(char *)(dword_104C1698 + 9);
  v7 = v31 * v25;
  v32 = (float)*(char *)(dword_104C169C + 9);
  v33 = (v6 + v4 + v32 * v25) / 128.0;
  v22 = asin((v5 + v3 + v7) / 128.0);
  v23 = v22 / 3.1415927;
  v8 = v33;
  v9 = (double)dword_11829840;
  v10 = (double)dword_118AA080;
  if ( dword_11829840 == dword_118AA094 )
  {
    v34 = v9;
    v11 = v8 * v34;
    v35 = v10;
    result = a2;
    *(float *)(a2 + 16) = (v11 - -128.0 - v35 * 0.5) / (flt_118AA08C * 256.0);
    v13 = flt_118AA090;
    v41 = (float)dword_118AA094;
    v14 = v23 * v41;
    v42 = (float)dword_11829838;
    v15 = v42;
LABEL_8:
    *(float *)(result + 20) = (v14 - -128.0 - v15 * 0.5) / (v13 * 256.0);
    return result;
  }
  if ( dword_11829840 < dword_118AA094 )
  {
    v36 = v9;
    v16 = v8 * v36;
    v37 = v10;
    v17 = (v16 - -128.0 - v37 * 0.5) / (flt_118AA08C * 256.0);
    result = a2;
    v38 = (float)(dword_118AA094 / dword_11829840);
    *(float *)(a2 + 16) = v17 * v38;
    v13 = flt_118AA090;
    v43 = (float)dword_118AA094;
    v14 = v23 * v43;
    v44 = (float)dword_11829838;
    v15 = v44;
    goto LABEL_8;
  }
  v39 = v9;
  v18 = v8 * v39;
  v40 = v10;
  *(float *)(a2 + 16) = (v18 - -128.0 - v40 * 0.5) / (flt_118AA08C * 256.0);
  v45 = (float)dword_118AA094;
  v20 = v23 * v45;
  v46 = (float)dword_11829838;
  result = dword_11829840 / dword_118AA094;
  v21 = v46 * 0.5;
  v47 = (float)(dword_11829840 / dword_118AA094);
  *(float *)(a2 + 20) = (v20 - -128.0 - v21) / (flt_118AA090 * 256.0) * v47;
  return result;
}
// 100A79DC: using guessed type int dword_100A79DC;
// 104C1698: using guessed type int dword_104C1698;
// 104C169C: using guessed type int dword_104C169C;
// 11829838: using guessed type int dword_11829838;
// 11829840: using guessed type int dword_11829840;
// 118AA080: using guessed type int dword_118AA080;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
// 118AA094: using guessed type int dword_118AA094;
