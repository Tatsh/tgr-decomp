#include "../../types-n64.h"
//----- (80225370) --------------------------------------------------------
int __fastcall sub_80225370(int a1, float *a2)
{
  float v2; // $f12
  float v3; // $f14
  float v4; // $f0
  float v5; // $f16
  float v6; // $f0
  float v7; // $f2
  float v8; // $f0
  float v9; // $f0
  float v10; // $f0
  float v11; // $f0
  float v12; // $f2
  float v13; // $f16
  int result; // $v0
  float v15; // $f4
  float v16; // $f10
  float v17; // $f6
  float v18; // $f10
  float v19; // $f8
  float v20; // $f4
  float v21; // [sp+1Ch] [-3Ch]
  float v22; // [sp+24h] [-34h]
  float v23; // [sp+28h] [-30h]
  float v24; // [sp+2Ch] [-2Ch]
  float v25; // [sp+34h] [-24h]
  float v26; // [sp+38h] [-20h]
  float v27; // [sp+3Ch] [-1Ch]
  float v28; // [sp+44h] [-14h]

  v27 = a2[10];
  v2 = 0.0;
  v3 = 0.0;
  v26 = *a2;
  v25 = a2[5];
  v4 = v27 * (float)(v26 * v25);
  if ( v4 < 0.0 )
    v2 = v4 + 0.0;
  else
    v3 = v4 + 0.0;
  v5 = a2[8];
  v24 = a2[1];
  v23 = a2[6];
  v6 = v5 * (float)(v24 * v23);
  if ( v6 < 0.0 )
    v2 = v2 + v6;
  else
    v3 = v3 + v6;
  v22 = a2[9];
  v7 = a2[2];
  v21 = a2[4];
  v8 = v22 * (float)(v7 * v21);
  if ( v8 >= 0.0 )
    v3 = v3 + v8;
  else
    v2 = v2 + v8;
  v9 = v5 * (float)((float)-v7 * v25);
  if ( v9 >= 0.0 )
    v3 = v3 + v9;
  else
    v2 = v2 + v9;
  v10 = v27 * (float)((float)-v24 * v21);
  if ( v10 >= 0.0 )
    v3 = v3 + v10;
  else
    v2 = v2 + v10;
  v11 = v22 * (float)((float)-v26 * v23);
  if ( v11 < 0.0 )
    v2 = v2 + v11;
  else
    v3 = v3 + v11;
  v12 = v3 + v2;
  v13 = (float)(v3 + v2) / (float)(v3 - v2);
  v28 = v13;
  if ( v13 < 0.0 )
    v28 = -v13;
  if ( v12 == 0.0 || v28 < 1.0e-15 )
  {
    sub_8021E1F4((int)"Matrix4Inverse: singular matrix");
    result = 0;
  }
  else
  {
    result = 1;
    *(float *)a1 = (float)((float)(v25 * v27) - (float)(v22 * v23)) * (float)(1.0 / v12);
    *(float *)(a1 + 16) = (float)-(float)((float)(a2[4] * a2[10]) - (float)(a2[8] * a2[6])) * (float)(1.0 / v12);
    *(float *)(a1 + 32) = (float)((float)(a2[4] * a2[9]) - (float)(a2[8] * a2[5])) * (float)(1.0 / v12);
    *(float *)(a1 + 4) = (float)-(float)((float)(a2[1] * a2[10]) - (float)(a2[9] * a2[2])) * (float)(1.0 / v12);
    *(float *)(a1 + 20) = (float)((float)(*a2 * a2[10]) - (float)(a2[8] * a2[2])) * (float)(1.0 / v12);
    *(float *)(a1 + 36) = (float)-(float)((float)(*a2 * a2[9]) - (float)(a2[8] * a2[1])) * (float)(1.0 / v12);
    *(float *)(a1 + 8) = (float)((float)(a2[1] * a2[6]) - (float)(a2[5] * a2[2])) * (float)(1.0 / v12);
    *(float *)(a1 + 24) = (float)-(float)((float)(*a2 * a2[6]) - (float)(a2[4] * a2[2])) * (float)(1.0 / v12);
    v15 = *(float *)a1;
    *(float *)(a1 + 40) = (float)((float)(*a2 * a2[5]) - (float)(a2[4] * a2[1])) * (float)(1.0 / v12);
    v16 = *(float *)(a1 + 4);
    *(float *)(a1 + 48) = -(float)((float)(*(float *)(a1 + 32) * a2[14])
                                 + (float)((float)(a2[12] * v15) + (float)(a2[13] * *(float *)(a1 + 16))));
    v17 = *(float *)(a1 + 8);
    *(float *)(a1 + 52) = -(float)((float)(*(float *)(a1 + 36) * a2[14])
                                 + (float)((float)(a2[12] * v16) + (float)(a2[13] * *(float *)(a1 + 20))));
    v18 = *(float *)(a1 + 40);
    v19 = (float)(a2[12] * v17) + (float)(a2[13] * *(float *)(a1 + 24));
    v20 = a2[14];
    *(float *)(a1 + 12) = 0.0;
    *(float *)(a1 + 28) = 0.0;
    *(float *)(a1 + 44) = 0.0;
    *(_DWORD *)(a1 + 60) = 1065353216;
    *(float *)(a1 + 56) = -(float)((float)(v18 * v20) + v19);
  }
  return result;
}
