#include "../../types-n64.h"
//----- (8025C2C8) --------------------------------------------------------
int __fastcall sub_8025C2C8(float *a1)
{
  int v1; // $v0
  int v2; // $a1
  float *v3; // $a2
  double v4; // $f2
  int v5; // $v1
  float v6; // $f0
  float v7; // $f0
  int result; // $v0
  int v9; // $v1
  __int16 v10; // $v0
  int v11; // $t1
  int v12; // $a1
  float v13; // $f0
  int v14; // $t5
  float v15; // $f0
  float v16; // $f0
  float v17; // $f0
  float v18; // $f0
  float v19; // $f0
  char v20; // $v0
  int v21; // $v1
  int v22; // $t8
  int v23; // $a1
  float v24; // $f0
  int v25; // $t3
  float v26; // $f0
  float v27; // $f0
  float v28; // $f0

  v1 = -1;
  v2 = 0;
  v3 = a1;
  do
  {
    v2 += 12;
    v4 = *v3;
    v5 = 0;
    if ( v4 <= 0.5 )
    {
      if ( v4 >= -0.5 )
      {
        v6 = v3[1];
        goto LABEL_8;
      }
      v5 = 2;
    }
    else
    {
      v5 = 1;
    }
    v6 = v3[1];
LABEL_8:
    if ( v6 <= 0.5 )
    {
      if ( v6 >= -0.5 )
      {
        v7 = v3[2];
        goto LABEL_14;
      }
      v5 |= 8u;
    }
    else
    {
      v5 |= 4u;
    }
    v7 = v3[2];
LABEL_14:
    v3 += 3;
    if ( v7 <= 0.5 )
    {
      if ( v7 < -0.5 )
        v5 |= 0x20u;
    }
    else
    {
      v5 |= 0x10u;
    }
    if ( !v5 )
      return 1;
    v1 &= v5;
  }
  while ( v2 < 36 );
  v9 = 0;
  if ( v1 )
    return 0;
  v10 = -1;
  v11 = 3;
  while ( 2 )
  {
    v12 = 0;
    if ( v11 )
    {
      v13 = a1[3 * v9 + 1] + a1[3 * v9];
      if ( (v10 & 1) != 0 && v13 > 1.0 )
      {
        v12 = 1;
        goto LABEL_33;
      }
      if ( (v10 & 2) == 0 )
      {
        v14 = v10 & 0xC;
        goto LABEL_34;
      }
      if ( v13 >= -1.0 )
      {
        v14 = v10 & 0xC;
        goto LABEL_34;
      }
      v12 = 2;
    }
LABEL_33:
    v14 = v10 & 0xC;
LABEL_34:
    if ( v14 )
    {
      v15 = a1[3 * v9] - a1[3 * v9 + 1];
      if ( (v10 & 4) != 0 && v15 > 1.0 )
      {
        v12 |= 4u;
      }
      else if ( (v10 & 8) != 0 && v15 < -1.0 )
      {
        v12 |= 8u;
      }
    }
    if ( (v10 & 0x30) != 0 )
    {
      v16 = a1[3 * v9 + 2] + a1[3 * v9];
      if ( (v10 & 0x10) != 0 && v16 > 1.0 )
      {
        v12 |= 0x10u;
      }
      else if ( (v10 & 0x20) != 0 && v16 < -1.0 )
      {
        v12 |= 0x20u;
      }
    }
    if ( (v10 & 0xC0) != 0 )
    {
      v17 = a1[3 * v9] - a1[3 * v9 + 2];
      if ( (v10 & 0x40) != 0 && v17 > 1.0 )
      {
        v12 |= 0x40u;
      }
      else if ( (v10 & 0x80) != 0 && v17 < -1.0 )
      {
        v12 |= 0x80u;
      }
    }
    if ( (v10 & 0x300) != 0 )
    {
      v18 = a1[3 * v9 + 2] + a1[3 * v9 + 1];
      if ( (v10 & 0x100) != 0 && v18 > 1.0 )
      {
        v12 |= 0x100u;
      }
      else if ( (v10 & 0x200) != 0 && v18 < -1.0 )
      {
        v12 |= 0x200u;
      }
    }
    if ( (v10 & 0xC00) != 0 )
    {
      v19 = a1[3 * v9 + 1] - a1[3 * v9 + 2];
      if ( (v10 & 0x400) != 0 && v19 > 1.0 )
      {
        v12 |= 0x400u;
      }
      else if ( (v10 & 0x800) != 0 && v19 < -1.0 )
      {
        v12 |= 0x800u;
      }
    }
    v10 = v12;
    if ( v12 )
    {
      if ( ++v9 < 3 )
      {
        v11 = v12 & 3;
        continue;
      }
    }
    break;
  }
  v20 = -1;
  if ( v12 )
    return 0;
  v21 = 0;
  v22 = 3;
  while ( 2 )
  {
    v23 = 0;
    if ( v22 )
    {
      v24 = a1[3 * v21 + 2] + (float)(a1[3 * v21] + a1[3 * v21 + 1]);
      if ( (v20 & 1) != 0 && v24 > 1.5 )
      {
        v23 = 1;
        goto LABEL_84;
      }
      if ( (v20 & 2) == 0 )
      {
        v25 = v20 & 0xC;
        goto LABEL_85;
      }
      if ( v24 >= -1.5 )
      {
        v25 = v20 & 0xC;
        goto LABEL_85;
      }
      v23 = 2;
    }
LABEL_84:
    v25 = v20 & 0xC;
LABEL_85:
    if ( v25 )
    {
      v26 = (float)(a1[3 * v21] + a1[3 * v21 + 1]) - a1[3 * v21 + 2];
      if ( (v20 & 4) != 0 && v26 > 1.5 )
      {
        v23 |= 4u;
      }
      else if ( (v20 & 8) != 0 && v26 < -1.5 )
      {
        v23 |= 8u;
      }
    }
    if ( (v20 & 0x30) != 0 )
    {
      v27 = a1[3 * v21 + 2] + (float)(a1[3 * v21] - a1[3 * v21 + 1]);
      if ( (v20 & 0x10) != 0 && v27 > 1.5 )
      {
        v23 |= 0x10u;
      }
      else if ( (v20 & 0x20) != 0 && v27 < -1.5 )
      {
        v23 |= 0x20u;
      }
    }
    if ( (v20 & 0xC0) != 0 )
    {
      v28 = (float)(a1[3 * v21] - a1[3 * v21 + 1]) - a1[3 * v21 + 2];
      if ( (v20 & 0x40) != 0 && v28 > 1.5 )
      {
        v23 |= 0x40u;
      }
      else if ( (v20 & 0x80) != 0 && v28 < -1.5 )
      {
        v23 |= 0x80u;
      }
    }
    v20 = v23;
    if ( v23 )
    {
      if ( ++v21 != 3 )
      {
        v22 = v23 & 3;
        continue;
      }
    }
    break;
  }
  result = -1;
  if ( v23 )
    result = 0;
  return result;
}
