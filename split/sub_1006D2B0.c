//----- (1006D2B0) --------------------------------------------------------
int __cdecl sub_1006D2B0(int a1)
{
  int v1; // ebx
  float *v2; // edx
  int v3; // edi
  float *v4; // esi
  double v5; // st7
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  __int16 v10; // cx
  int v11; // edi
  int v12; // esi
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // eax
  int v20; // edi
  float *v21; // esi

  v1 = -1;
  v2 = (float *)(a1 + 8);
  v3 = 0;
  v4 = (float *)(a1 + 8);
  do
  {
    v5 = *(v4 - 2);
    v6 = 0;
    if ( v5 <= 0.5 )
    {
      if ( v5 < -0.5 )
        v6 = 2;
    }
    else
    {
      v6 = 1;
    }
    v7 = *(v4 - 1);
    if ( v7 <= 0.5 )
    {
      if ( v7 < -0.5 )
        v6 |= 8u;
    }
    else
    {
      v6 |= 4u;
    }
    v8 = *v4;
    if ( v8 <= 0.5 )
    {
      if ( v8 < -0.5 )
        v6 |= 0x20u;
    }
    else
    {
      v6 |= 0x10u;
    }
    if ( !v6 )
      return 1;
    v1 &= v6;
    ++v3;
    v4 += 3;
  }
  while ( v3 < 3 );
  if ( v1 )
    return 0;
  v10 = -1;
  v11 = 0;
  while ( 1 )
  {
    v12 = 0;
    if ( (v10 & 3) != 0 )
    {
      v13 = *(v2 - 2) + *(v2 - 1);
      if ( (v10 & 1) != 0 && v13 > 1.0 )
      {
        v12 = 1;
      }
      else if ( (v10 & 2) != 0 && v13 < -1.0 )
      {
        v12 = 2;
      }
    }
    if ( (v10 & 0xC) != 0 )
    {
      v14 = *(v2 - 2) - *(v2 - 1);
      if ( (v10 & 4) != 0 && v14 > 1.0 )
      {
        v12 |= 4u;
      }
      else if ( (v10 & 8) != 0 && v14 < -1.0 )
      {
        v12 |= 8u;
      }
    }
    if ( (v10 & 0x30) != 0 )
    {
      v15 = *(v2 - 2) + *v2;
      if ( (v10 & 0x10) != 0 && v15 > 1.0 )
      {
        v12 |= 0x10u;
      }
      else if ( (v10 & 0x20) != 0 && v15 < -1.0 )
      {
        v12 |= 0x20u;
      }
    }
    if ( (v10 & 0xC0) != 0 )
    {
      v16 = *(v2 - 2) - *v2;
      if ( (v10 & 0x40) != 0 && v16 > 1.0 )
      {
        v12 |= 0x40u;
      }
      else if ( (v10 & 0x80u) != 0 && v16 < -1.0 )
      {
        v12 |= 0x80u;
      }
    }
    if ( (v10 & 0x300) != 0 )
    {
      v17 = *(v2 - 1) + *v2;
      if ( (v10 & 0x100) != 0 && v17 > 1.0 )
      {
        v12 |= 0x100u;
      }
      else if ( (v10 & 0x200) != 0 && v17 < -1.0 )
      {
        v12 |= 0x200u;
      }
    }
    if ( (v10 & 0xC00) != 0 )
    {
      v18 = *(v2 - 1) - *v2;
      if ( (v10 & 0x400) != 0 && v18 > 1.0 )
      {
        v12 |= 0x400u;
      }
      else if ( (v10 & 0x800) != 0 && v18 < -1.0 )
      {
        v12 |= 0x800u;
      }
    }
    v10 = v12;
    if ( !v12 )
      break;
    ++v11;
    v2 += 3;
    if ( v11 >= 3 )
      return 0;
  }
  LOBYTE(v19) = -1;
  v20 = 0;
  v21 = (float *)a1;
  do
  {
    v19 = sub_1006D540(v21, v19);
    if ( !v19 )
      break;
    ++v20;
    v21 += 3;
  }
  while ( v20 < 3 );
  return (v19 != 0) - 1;
}
// 1006D4F7: conditional instruction was optimized away because of 'esi.4 in (1..2|>=4u)'
