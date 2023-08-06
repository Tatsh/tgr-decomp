#include "../../types-n64.h"
//----- (80226488) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_80226488(int a1)
{
  float v2; // $f2
  float v3; // $f16
  int v4; // $a0
  float *v5; // $v1
  float v6; // $f0
  float v7; // $f14
  float v8; // $f8
  float v9; // $f4
  int v10; // $a0
  int v11; // $v0
  int v12; // $t9
  float v13; // $f2
  int v14; // $v1
  int v15; // $v0
  int *v16; // $t9
  int *v17; // $t0
  int *v18; // $t2
  int *v19; // $t4
  int *v20; // $t8
  int *v21; // $t7
  float v22; // $f0
  float v23; // $f0
  float v24; // $f2
  float *v25; // [sp+28h] [-A8h]
  float *v26; // [sp+2Ch] [-A4h]
  float v27; // [sp+34h] [-9Ch]
  float v28[3]; // [sp+58h] [-78h] BYREF
  float v29[3]; // [sp+64h] [-6Ch] BYREF
  float v30[3]; // [sp+70h] [-60h] BYREF
  float v31; // [sp+C4h] [-Ch]
  float v32; // [sp+C8h] [-8h]
  float v33; // [sp+CCh] [-4h]

  v2 = *(float *)(*(_DWORD *)(a1 + 8308) + 32);
  if ( v2 <= 0.1 )
  {
    if ( v2 < -0.1 )
    {
      *(float *)(a1 + 7636) = (float)(v2 + 0.1) / 0.89999998;
      *(float *)(a1 + 7636) = *(float *)(a1 + 7636) * *(float *)(a1 + 7636);
    }
    else
    {
      *(float *)(a1 + 7636) = 0.0;
    }
  }
  else
  {
    *(float *)(a1 + 7636) = (float)(v2 - 0.1) / 0.89999998;
    *(float *)(a1 + 7636) = *(float *)(a1 + 7636) * (float)-*(float *)(a1 + 7636);
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 3792) + 104) & 2) != 0 && *(_DWORD *)(a1 + 320) == 337448266 )
  {
    v3 = 16777216.0;
    v4 = 0;
    if ( MEMORY[0x80025C88] > 0 )
    {
      v5 = (float *)MEMORY[0x80025C84];
      do
      {
        v4 += 12;
        v6 = *(float *)(a1 + 56) - v5[2];
        if ( v6 <= 10.0 )
        {
          v7 = (float)((float)((float)(*(float *)(a1 + 48) - *v5) * (float)(*(float *)(a1 + 48) - *v5))
                     + (float)((float)(*(float *)(a1 + 52) - v5[1]) * (float)(*(float *)(a1 + 52) - v5[1])))
             + (float)(v6 * v6);
          if ( v7 < v3 )
          {
            v3 = v7;
            v31 = *v5;
            v32 = v5[1];
            v33 = v5[2];
          }
        }
        v5 += 3;
      }
      while ( v4 < 12 * MEMORY[0x80025C88] );
    }
    if ( v3 >= 22500.0 )
    {
      if ( a1 + 7868 == *(_DWORD *)(a1 + 7656) )
      {
        *(_DWORD *)(a1 + 3912) = 1;
        *(_DWORD *)(a1 + 7656) = a1 + 7732;
        dword_8028B7F8 = 60;
        dword_8028B9EC = 1;
      }
      goto LABEL_28;
    }
    if ( a1 + 7868 == *(_DWORD *)(a1 + 7656) )
    {
      if ( *(float *)(a1 + 7916) != v31 )
      {
        *(_DWORD *)(a1 + 3912) = 1;
LABEL_24:
        v8 = v31;
        goto LABEL_25;
      }
      if ( *(float *)(a1 + 7920) != v32 )
      {
        *(_DWORD *)(a1 + 3912) = 1;
        goto LABEL_24;
      }
      if ( *(float *)(a1 + 7924) == v33 )
      {
        v8 = v31;
LABEL_25:
        *(float *)(a1 + 7916) = v8;
        *(float *)(a1 + 7920) = v32;
        v9 = v33;
        *(_DWORD *)(a1 + 7656) = a1 + 7868;
        *(float *)(a1 + 7924) = v9;
LABEL_28:
        if ( (**(_DWORD **)(a1 + 8308) & 0xF000000) == 0 )
        {
          v10 = *(_DWORD *)(a1 + 8308);
          goto LABEL_35;
        }
        dword_8028B7F8 = 450;
        goto LABEL_34;
      }
    }
    *(_DWORD *)(a1 + 3912) = 1;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a1 + 320) != 337448266 )
  {
    v10 = *(_DWORD *)(a1 + 8308);
    goto LABEL_35;
  }
  dword_8028B7F8 = 0;
LABEL_34:
  v10 = *(_DWORD *)(a1 + 8308);
LABEL_35:
  v11 = *(_DWORD *)v10;
  if ( (*(_DWORD *)v10 & 0x1000000) != 0 )
  {
    *(_DWORD *)(a1 + 7656) = a1 + 7664;
    *(_DWORD *)(a1 + 3912) = 1;
    sub_80255910((int *)v10, 0x1000000);
    v10 = *(_DWORD *)(a1 + 8308);
    v11 = *(_DWORD *)v10;
  }
  if ( (v11 & 0x2000000) != 0 )
  {
    sub_80221108(a1);
    *(_DWORD *)(a1 + 3912) = 1;
    sub_80255910(*(int **)(a1 + 8308), 0x2000000);
    v10 = *(_DWORD *)(a1 + 8308);
    v12 = 32 * *(_DWORD *)v10;
  }
  else
  {
    v12 = 32 * v11;
  }
  if ( v12 < 0 )
  {
    *(_DWORD *)(a1 + 7656) = a1 + 7732;
    *(_DWORD *)(a1 + 3912) = 1;
    sub_80255910((int *)v10, 0x4000000);
    v10 = *(_DWORD *)(a1 + 8308);
  }
  if ( (*(_DWORD *)v10 & 0x8000000) != 0 )
  {
    *(_DWORD *)(a1 + 7656) = a1 + 7800;
    *(_DWORD *)(a1 + 3912) = 1;
    sub_80255910((int *)v10, 0x8000000);
    v10 = *(_DWORD *)(a1 + 8308);
  }
  v13 = *(float *)(v10 + 28);
  if ( v13 <= 0.25 )
  {
    if ( v13 < -0.25 )
    {
      *(float *)(a1 + 7644) = (float)(v13 + 0.25) / 0.75;
      *(float *)(a1 + 7644) = *(float *)(a1 + 7644) * (float)-*(float *)(a1 + 7644);
    }
    else
    {
      *(float *)(a1 + 7644) = 0.0;
    }
  }
  else
  {
    *(float *)(a1 + 7644) = (float)(v13 - 0.25) / 0.75;
    *(float *)(a1 + 7644) = *(float *)(a1 + 7644) * *(float *)(a1 + 7644);
  }
  v14 = *(_DWORD *)(a1 + 3916);
  if ( v14 )
  {
    v14 = *(_DWORD *)(a1 + 3916);
    *(float *)(a1 + 7648) = 0.0;
  }
  v15 = **(_DWORD **)(a1 + 8308);
  if ( (v15 & 0x8000) != 0 )
  {
    if ( !v14 )
    {
      v16 = *(int **)(a1 + 8308);
      *(_DWORD *)(a1 + 7644) = 1065353216;
      v15 = *v16;
    }
  }
  else if ( v14 )
  {
    v17 = *(int **)(a1 + 8308);
    *(_DWORD *)(a1 + 7640) = *(_DWORD *)(a1 + 7644);
    *(float *)(a1 + 7644) = 0.0;
    v15 = *v17;
  }
  if ( (v15 & 8) != 0 )
  {
    v18 = *(int **)(a1 + 8308);
    *(float *)(a1 + 7644) = 1.0;
    v15 = *v18;
  }
  if ( (v15 & 2) != 0 )
  {
    v19 = *(int **)(a1 + 8308);
    *(_DWORD *)(a1 + 7644) = -1082130432;
    v15 = *v19;
  }
  if ( (v15 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 3916) )
    {
      v21 = *(int **)(a1 + 8308);
      *(float *)(a1 + 7648) = 1.0;
      v15 = *v21;
    }
    else
    {
      v20 = *(int **)(a1 + 8308);
      *(float *)(a1 + 7636) = -1.0;
      v15 = *v20;
    }
  }
  if ( (v15 & 4) != 0 )
  {
    if ( *(_DWORD *)(a1 + 3916) )
      *(float *)(a1 + 7648) = -1.0;
    else
      *(float *)(a1 + 7636) = 1.0;
  }
  sub_8021F998(a1);
  if ( !*(_DWORD *)(a1 + 3916) )
  {
    sub_80224894(v28, (float *)(a1 + 48), (float *)a1);
    sub_802248C8(v28, (float *)(a1 + 16));
    v26 = (float *)(a1 + 4088);
    sub_80224894(v29, (float *)(a1 + 4076), (float *)(a1 + 4088));
    v30[0] = *(float *)(a1 + 4100);
    v30[1] = *(float *)(a1 + 4104);
    v25 = (float *)(a1 + 4100);
    v30[2] = *(float *)(a1 + 4108);
    sub_80224808((float *)(a1 + 4100), (float *)(a1 + 4076), v28);
    v22 = sub_80224B08((float *)(a1 + 4100));
    if ( v22 != 0.0 )
      sub_80224528(v25, (float)(v22 / (float)(v22 + 1.0)) / v22);
    v23 = sub_80224A78(v25, v30);
    v27 = sub_80261140(v23);
    v24 = v27 / (float)(sub_80224B08(v26) + 1.0);
    if ( v24 > 0.025 )
      sub_8021BE28(*(_DWORD *)(a1 + 320), v24 + v24);
    *(float *)(a1 + 4076) = v28[0];
    *(float *)(a1 + 4080) = v28[1];
    *(float *)(a1 + 4084) = v28[2];
    sub_80224808(v26, (float *)(a1 + 4076), v29);
    *(float *)(a1 + 4096) = *(float *)(a1 + 4096) - 0.32666668;
  }
  sub_80226248(a1);
}
// 802267A8: write access to const memory at 8028B9EC has been detected
// 80226808: write access to const memory at 8028B7F8 has been detected
// 802267DC: write access to const memory at 8028B7F8 has been detected
// 802267A4: write access to const memory at 8028B7F8 has been detected
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B7F8: using guessed type int dword_8028B7F8;
// 8028B9EC: using guessed type int dword_8028B9EC;
// 8031B2D8: using guessed type int dword_8031B2D8;
