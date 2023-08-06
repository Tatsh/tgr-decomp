#include "../../types-n64.h"
//----- (80255120) --------------------------------------------------------
int __fastcall sub_80255120(int a1)
{
  int v1; // $v1
  __int16 v3; // $v0
  int v4; // $t2
  int v5; // $v0
  int v6; // $t9
  int v7; // $t4
  int v8; // $v1
  int v9; // $v0
  int v10; // $t5
  int v11; // $v1
  int v12; // $v0
  int v13; // $v1
  int v14; // $v0
  int v15; // $v0
  int v16; // $a1
  _DWORD *v17; // $v0
  int v18; // $v1
  int v19; // $a0
  int v20; // $v1
  int v21; // $a1
  int v22; // $a0
  int v23; // $v0
  _BYTE *v24; // $v1
  float v25; // $f6
  float v26; // $f2
  float v27; // $f18
  float v28; // $f12
  float v29; // $f0
  float v30; // $f0

  v1 = *(_DWORD *)(a1 + 344);
  if ( *(_BYTE *)(v1 + 4) )
  {
    *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v1 + 4) == 8;
    *(_BYTE *)(v1 + 2) = 0;
    *(_BYTE *)(*(_DWORD *)(a1 + 344) + 3) = 0;
    **(_WORD **)(a1 + 344) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
  }
  v3 = **(_WORD **)(a1 + 344);
  *(_DWORD *)a1 = 0;
  if ( (v3 & 0x800) != 0 )
    *(_DWORD *)a1 = 8;
  if ( (v3 & 0x400) != 0 )
    *(_DWORD *)a1 |= 2u;
  if ( (v3 & 0x200) != 0 )
    *(_DWORD *)a1 |= 4u;
  if ( (v3 & 0x100) != 0 )
    *(_DWORD *)a1 |= 1u;
  if ( (v3 & 0x8000) != 0 )
    *(_DWORD *)a1 |= 0x10u;
  if ( (v3 & 0x4000) != 0 )
    *(_DWORD *)a1 |= 0x20u;
  if ( (v3 & 0x20) != 0 )
    *(_DWORD *)a1 |= 0x1000u;
  if ( (v3 & 0x10) != 0 )
    *(_DWORD *)a1 |= 0x2000u;
  if ( (v3 & 0x2000) != 0 )
    *(_DWORD *)a1 |= 0x8000u;
  if ( (v3 & 0x1000) != 0 )
    *(_DWORD *)a1 |= 0x4000u;
  if ( (v3 & 8) != 0 )
    *(_DWORD *)a1 |= 0x100u;
  if ( (v3 & 1) != 0 )
    *(_DWORD *)a1 |= 0x200u;
  if ( (v3 & 4) != 0 )
    *(_DWORD *)a1 |= 0x400u;
  if ( (v3 & 2) != 0 )
    *(_DWORD *)a1 |= 0x800u;
  if ( sub_8021C6D0((int)sub_8020082C) )
  {
    switch ( *(_BYTE *)(a1 + 37) )
    {
      case 0:
        v5 = *(_DWORD *)a1;
        v7 = *(_DWORD *)a1 | 0x200000;
        if ( (*(_DWORD *)a1 & 0x8000) != 0 )
        {
          *(_DWORD *)a1 = v7;
          v5 = v7;
        }
        if ( (v5 & 0x2000) != 0 )
        {
          *(_DWORD *)a1 = v5 | 0x100000;
          v5 |= 0x100000u;
        }
        goto LABEL_43;
      case 1:
        v9 = *(_DWORD *)a1;
        v10 = *(_DWORD *)a1 | 0x200000;
        if ( (*(_DWORD *)a1 & 0x8000) != 0 )
        {
          *(_DWORD *)a1 = v10;
          v9 = v10;
        }
        if ( (v9 & 0x2000) != 0 )
        {
          *(_DWORD *)a1 = v9 | 0x100000;
          v9 |= 0x100000u;
        }
        v11 = *(_DWORD *)(a1 + 344);
        *(_BYTE *)(a1 + 36) = *(_BYTE *)(v11 + 2);
        if ( (v9 & 0x10) != 0 )
        {
          if ( *(char *)(v11 + 3) < -64 )
          {
            *(_DWORD *)a1 = v9 | 0x20000;
            v9 |= 0x20000u;
          }
          *(_DWORD *)a1 = v9 | 0x10000;
          v9 |= 0x10000u;
        }
        if ( (v9 & 0x20) != 0 )
        {
          *(_DWORD *)a1 = v9 | 0x40000;
          v9 |= 0x40000u;
        }
        if ( (v9 & 0x400) != 0 )
        {
          *(_DWORD *)a1 = v9 | 0x80000;
          v9 |= 0x80000u;
        }
        if ( (v9 & 0x100) != 0 )
        {
          *(_DWORD *)a1 = v9 | 0x1000000;
          v9 |= 0x1000000u;
        }
        if ( (v9 & 0x200) != 0 )
        {
          *(_DWORD *)a1 = v9 | 0x4000000;
          v9 |= 0x4000000u;
        }
        if ( (v9 & 0x800) != 0 )
          *(_DWORD *)a1 = v9 | 0x8000000;
        goto LABEL_120;
      case 2:
        if ( (*(_DWORD *)a1 & 4) != 0 )
        {
          if ( (*(_DWORD *)a1 & 1) != 0 )
            *(_BYTE *)(a1 + 36) = 0;
          else
            *(_BYTE *)(a1 + 36) = -80;
        }
        else if ( (*(_DWORD *)a1 & 1) != 0 )
        {
          *(_BYTE *)(a1 + 36) = 80;
        }
        else
        {
          *(_BYTE *)(a1 + 36) = 0;
        }
        v12 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)a1 & 2) != 0 )
          {
            *(_DWORD *)a1 = v12 | 0x20000;
            v12 |= 0x20000u;
          }
          *(_DWORD *)a1 = v12 | 0x10000;
          v12 |= 0x10000u;
        }
        if ( (v12 & 0x20) != 0 )
        {
          if ( (v12 & 0x10000) != 0 )
          {
            *(_DWORD *)a1 = v12 | 0x80000;
            v12 |= 0x80000u;
          }
          else
          {
            *(_DWORD *)a1 = v12 | 0x40000;
            v12 |= 0x40000u;
          }
        }
        if ( (v12 & 0x1000) != 0 )
        {
          *(_DWORD *)a1 = v12 | 0x200000;
          v12 |= 0x200000u;
        }
        if ( (v12 & 0x2000) != 0 )
        {
          *(_DWORD *)a1 = v12 | 0x100000;
          v12 |= 0x100000u;
        }
        if ( (v12 & 0x100) != 0 )
        {
          *(_DWORD *)a1 = v12 | 0x1000000;
          v12 |= 0x1000000u;
        }
        if ( (v12 & 0x400) != 0 )
        {
          *(_DWORD *)a1 = v12 | 0x4000000;
          v12 |= 0x4000000u;
        }
        if ( (v12 & 0x800) != 0 )
          *(_DWORD *)a1 = v12 | 0x8000000;
        goto LABEL_120;
      case 3:
        v13 = *(_DWORD *)(a1 + 344);
        v14 = *(char *)(v13 + 3);
        if ( v14 < 33 )
        {
          if ( v14 >= -16 )
          {
            v15 = *(_DWORD *)a1;
            goto LABEL_106;
          }
          v13 = *(_DWORD *)(a1 + 344);
          *(_DWORD *)a1 |= 0x30000u;
        }
        else
        {
          v13 = *(_DWORD *)(a1 + 344);
          *(_DWORD *)a1 |= 0x10000u;
        }
        v15 = *(_DWORD *)a1;
LABEL_106:
        *(_BYTE *)(a1 + 36) = *(_BYTE *)(v13 + 2);
        if ( (v15 & 0x8000) != 0 )
        {
          if ( (v15 & 0x10000) != 0 )
          {
            *(_DWORD *)a1 = v15 | 0x80000;
            v15 |= 0x80000u;
          }
          else
          {
            *(_DWORD *)a1 = v15 | 0x40000;
            v15 |= 0x40000u;
          }
        }
        if ( (v15 & 0x12) != 0 )
        {
          *(_DWORD *)a1 = v15 | 0x200000;
          v15 |= 0x200000u;
        }
        if ( (v15 & 0x28) != 0 )
        {
          *(_DWORD *)a1 = v15 | 0x100000;
          v15 |= 0x100000u;
        }
        if ( (v15 & 0x100) != 0 )
        {
          *(_DWORD *)a1 = v15 | 0x1000000;
          v15 |= 0x1000000u;
        }
        if ( (v15 & 0x400) != 0 )
        {
          *(_DWORD *)a1 = v15 | 0x4000000;
          v15 |= 0x4000000u;
        }
        if ( (v15 & 0x800) != 0 )
          *(_DWORD *)a1 = v15 | 0x8000000;
LABEL_120:
        v4 = *(_DWORD *)(a1 + 44);
        break;
      case 4:
        v5 = *(_DWORD *)a1;
        v6 = *(_DWORD *)a1 | 0x200000;
        if ( (*(_DWORD *)a1 & 0x1000) != 0 )
        {
          *(_DWORD *)a1 = v6;
          v5 = v6;
        }
        if ( (v5 & 0x2000) != 0 )
        {
          *(_DWORD *)a1 = v5 | 0x100000;
          v5 |= 0x100000u;
        }
LABEL_43:
        v8 = *(_DWORD *)(a1 + 344);
        *(_BYTE *)(a1 + 36) = *(_BYTE *)(v8 + 2);
        if ( (v5 & 0x10) != 0 )
        {
          if ( *(char *)(v8 + 3) < -64 )
          {
            *(_DWORD *)a1 = v5 | 0x20000;
            v5 |= 0x20000u;
          }
          *(_DWORD *)a1 = v5 | 0x10000;
          v5 |= 0x10000u;
        }
        if ( (v5 & 0x20) != 0 )
        {
          if ( (v5 & 0x10000) != 0 )
          {
            *(_DWORD *)a1 = v5 | 0x80000;
            v5 |= 0x80000u;
          }
          else
          {
            *(_DWORD *)a1 = v5 | 0x40000;
            v5 |= 0x40000u;
          }
        }
        if ( (v5 & 0x100) != 0 )
        {
          *(_DWORD *)a1 = v5 | 0x1000000;
          v5 |= 0x1000000u;
        }
        if ( (v5 & 0x400) != 0 )
        {
          *(_DWORD *)a1 = v5 | 0x4000000;
          v5 |= 0x4000000u;
        }
        if ( (v5 & 0x800) != 0 )
          *(_DWORD *)a1 = v5 | 0x8000000;
        goto LABEL_120;
      default:
        goto LABEL_120;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 44);
  }
  v16 = 0;
  v17 = (_DWORD *)a1;
  if ( v4 || *(_DWORD *)(a1 + 48) )
  {
    do
    {
      v18 = v17[11];
      v16 += 4;
      if ( v18 )
      {
        v19 = v17[13];
        if ( v19 < v17[15] )
        {
          *(_BYTE *)(v18 + v19) = *(_BYTE *)(a1 + 36);
          *(_BYTE *)(v17[11] + v17[13] + 1) = (*(_DWORD *)a1 & 0x3F0000u) >> 16;
          v17[13] += 2;
        }
      }
      ++v17;
    }
    while ( v16 != 8 );
    v20 = *(_DWORD *)(a1 + 344);
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 68);
    if ( v21 )
    {
      v22 = *(_DWORD *)(a1 + 72);
      v23 = *(_DWORD *)a1;
      v24 = (_BYTE *)(v21 + v22);
      if ( v22 >= *(_DWORD *)(a1 + 76) )
      {
        *(_BYTE *)(a1 + 36) = 0;
        *(_DWORD *)a1 = v23 & 0xFFC0FFFF;
      }
      else
      {
        *(_BYTE *)(a1 + 36) = *v24;
        *(_DWORD *)a1 = ((unsigned __int8)v24[1] << 16) | v23 & 0xFFC0FFFF;
        *(_DWORD *)(a1 + 72) = v22 + 2;
      }
      v20 = *(_DWORD *)(a1 + 344);
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 344);
    }
  }
  v25 = (float)*(char *)(a1 + 36);
  *(float *)(a1 + 24) = (float)*(char *)(v20 + 2) / 70.0;
  v26 = *(float *)(a1 + 24);
  v27 = (float)*(char *)(v20 + 3) / 70.0;
  *(float *)(a1 + 32) = v25 / 70.0;
  *(float *)(a1 + 28) = v27;
  if ( v26 <= 1.0 )
  {
    v28 = -1.0;
    if ( v26 >= -1.0 )
    {
      v29 = *(float *)(a1 + 28);
      goto LABEL_140;
    }
    *(_DWORD *)(a1 + 24) = -1082130432;
  }
  else
  {
    v28 = -1.0;
    *(float *)(a1 + 24) = 1.0;
  }
  v29 = *(float *)(a1 + 28);
LABEL_140:
  if ( v29 <= 1.0 )
  {
    if ( v29 >= v28 )
    {
      v30 = *(float *)(a1 + 32);
      goto LABEL_146;
    }
    *(float *)(a1 + 28) = v28;
  }
  else
  {
    *(float *)(a1 + 28) = 1.0;
  }
  v30 = *(float *)(a1 + 32);
LABEL_146:
  if ( v30 <= 1.0 )
  {
    if ( v30 < v28 )
      *(float *)(a1 + 32) = v28;
  }
  else
  {
    *(float *)(a1 + 32) = 1.0;
  }
  return sub_80255048(a1);
}
// 8020082C: using guessed type int sub_8020082C();
