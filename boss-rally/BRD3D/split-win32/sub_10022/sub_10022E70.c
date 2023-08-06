#include "../../types-win32.h"
//----- (10022E70) --------------------------------------------------------
int __cdecl sub_10022E70(float *a1, int a2)
{
  float *v2; // eax
  double v3; // st6
  double v4; // st5
  double v5; // st4
  double v6; // st2
  double v7; // st6
  double v8; // st3
  double v9; // st5
  double v10; // st2
  double v11; // st4
  double v12; // st7
  double v13; // st6
  double v14; // st5
  int result; // eax
  double v16; // rt1
  double v17; // st7
  double v18; // st6
  double v19; // st6
  double v20; // rt1
  double v21; // st6
  double v22; // st5
  double v24; // st6
  double v25; // st7
  float v26; // [esp+Ch] [ebp-10h]
  float v27; // [esp+10h] [ebp-Ch] BYREF
  float v28; // [esp+14h] [ebp-8h]
  float v29; // [esp+18h] [ebp-4h]
  float v30; // [esp+20h] [ebp+4h]
  float v31; // [esp+20h] [ebp+4h]
  float v32; // [esp+20h] [ebp+4h]
  float v33; // [esp+20h] [ebp+4h]
  float v34; // [esp+20h] [ebp+4h]
  float v35; // [esp+20h] [ebp+4h]
  float v36; // [esp+20h] [ebp+4h]
  float v37; // [esp+20h] [ebp+4h]
  float v38; // [esp+20h] [ebp+4h]
  float v39; // [esp+20h] [ebp+4h]
  float v40; // [esp+20h] [ebp+4h]
  float v41; // [esp+20h] [ebp+4h]
  float v42; // [esp+20h] [ebp+4h]
  float v43; // [esp+20h] [ebp+4h]
  float v44; // [esp+24h] [ebp+8h]
  float v45; // [esp+24h] [ebp+8h]
  float v46; // [esp+24h] [ebp+8h]
  float v47; // [esp+24h] [ebp+8h]
  float v48; // [esp+24h] [ebp+8h]
  float v49; // [esp+24h] [ebp+8h]
  float v50; // [esp+24h] [ebp+8h]

  if ( dword_100A79DC )
    v2 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
  else
    v2 = 0;
  v27 = v2[4] * a1[6] + v2[8] * a1[7] + *v2 * a1[5];
  v28 = v2[5] * a1[6] + v2[9] * a1[7] + v2[1] * a1[5];
  v29 = v2[6] * a1[6] + v2[10] * a1[7] + v2[2] * a1[5];
  sub_1003AE50(&v27);
  v30 = (float)*(char *)(dword_104C169C + 8);
  v3 = v30;
  v31 = (float)*(char *)(dword_104C169C + 9);
  v4 = v31;
  v32 = (float)*(char *)(dword_104C1698 + 8);
  v5 = v32;
  v33 = (float)*(char *)(dword_104C1698 + 10);
  v6 = v3;
  v7 = v33;
  v34 = (float)*(char *)(dword_104C169C + 10);
  v8 = v4;
  v9 = v6 * v27;
  v10 = v5;
  v11 = v34;
  v35 = (float)*(char *)(dword_104C1698 + 9);
  v12 = (v10 * v27 + v7 * v29 + v35 * v28) / 128.0;
  v36 = (v9 + v8 * v28 + v11 * v29) / 128.0;
  v26 = v12;
  if ( dword_11829840 == dword_118AA094 )
  {
    v13 = v36;
    v37 = (float)dword_11829840;
    v14 = v13 * v37;
    v38 = (float)dword_118AA080;
    result = a2;
    *(float *)(a2 + 16) = (v14 - -128.0 - v38) / (flt_118AA08C * 256.0);
    v44 = (float)dword_118AA094;
    v16 = v26 * v44;
    v45 = (float)dword_11829838;
    *(float *)(result + 20) = (v16 - -128.0 - v45) / (flt_118AA090 * 256.0);
  }
  else if ( dword_11829840 >= dword_118AA094 )
  {
    v21 = v36;
    v42 = (float)dword_11829840;
    v22 = v21 * v42;
    v43 = (float)dword_118AA080;
    *(float *)(a2 + 16) = (v22 - -128.0 - v43) / (flt_118AA08C * 256.0);
    v48 = (float)dword_118AA094;
    result = dword_11829840 / dword_118AA094;
    v24 = v26 * v48;
    v49 = (float)dword_11829838;
    v25 = (v24 - -128.0 - v49) / (flt_118AA090 * 256.0);
    v50 = (float)(dword_11829840 / dword_118AA094);
    *(float *)(a2 + 20) = v25 * v50;
  }
  else
  {
    v17 = v36;
    v39 = (float)dword_11829840;
    v18 = v17 * v39;
    v40 = (float)dword_118AA080;
    v19 = (v18 - -128.0 - v40) / (flt_118AA08C * 256.0);
    result = a2;
    v41 = (float)(dword_118AA094 / dword_11829840);
    *(float *)(a2 + 16) = v19 * v41;
    v46 = (float)dword_118AA094;
    v20 = v26 * v46;
    v47 = (float)dword_11829838;
    *(float *)(result + 20) = (v20 - -128.0 - v47) / (flt_118AA090 * 256.0);
  }
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
