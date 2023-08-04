#include "../../types-win32.h"
//----- (100011F0) --------------------------------------------------------
void __thiscall sub_100011F0(float *this, float a2, int a3)
{
  float *this_offset_A38; // ebx
  __int16 v4; // ax
  int v5; // esi
  float *v6; // edi
  __int16 v7; // ax
  int v8; // esi
  double v9; // st7
  int *v10; // ebx
  char *v11; // esi
  char *i; // edi
  double v13; // st7
  double v14; // st7
  int *v16; // ebx
  char *v17; // esi
  char *j; // edi
  double v19; // st7
  double v20; // st7
  float v21; // [esp+0h] [ebp-68h]
  float v22; // [esp+14h] [ebp-54h]
  float v23; // [esp+14h] [ebp-54h]
  int v24; // [esp+18h] [ebp-50h]
  int v25; // [esp+18h] [ebp-50h]
  float *this_offset_A38_1; // [esp+1Ch] [ebp-4Ch]
  int v27; // [esp+20h] [ebp-48h]
  int v28; // [esp+24h] [ebp-44h]
  int v29; // [esp+28h] [ebp-40h]
  int v30[3]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v31; // [esp+38h] [ebp-30h] BYREF
  int v32; // [esp+3Ch] [ebp-2Ch]
  int v33; // [esp+40h] [ebp-28h]
  int v34[3]; // [esp+44h] [ebp-24h] BYREF
  int v35; // [esp+50h] [ebp-18h] BYREF
  int v36; // [esp+54h] [ebp-14h]
  int v37; // [esp+58h] [ebp-10h]
  float v38[3]; // [esp+5Ch] [ebp-Ch] BYREF
  float v39; // [esp+6Ch] [ebp+4h]
  float v40; // [esp+6Ch] [ebp+4h]
  float v41; // [esp+6Ch] [ebp+4h]
  float v42; // [esp+6Ch] [ebp+4h]
  float v43; // [esp+6Ch] [ebp+4h]
  int v44; // [esp+70h] [ebp+8h]
  int v45; // [esp+70h] [ebp+8h]

  this_offset_A38 = this + 0xA38;
  dword_100C129C = 0;
  this_offset_A38_1 = this + 0xA38;
  v4 = sub_1006F720(this[0xA38], this[0xA39]);
  v5 = v4;
  v30[0] = v4;
  v6 = (float *)(LODWORD(a2) + 48);
  v28 = LODWORD(a2) + 48;
  v7 = sub_1006F720(*(float *)(LODWORD(a2) + 48), *(float *)(LODWORD(a2) + 52));
  v8 = (v5 != v7) + 1;
  v30[1] = v7;
  v29 = v8;
  sub_1003AEE0((float *)v34, (float *)(LODWORD(a2) + 48), this_offset_A38);
  v24 = 0;
  v9 = sub_1003B170((float *)v34);
  if ( v9 == 0.0 )
    v22 = 1.0;
  else
    v22 = (v9 - -0.1) / v9;
  if ( v8 > 0 )
  {
    v10 = v30;
    v27 = v8;
    do
    {
      v11 = (char *)&unk_11750338 + 4800 * *v10;
      for ( i = &v11[32 * *((unsigned __int16 *)&dword_117554A0 + *v10)]; v11 != i; v11 += 32 )
      {
        v13 = sub_1003AC90((float *)v34, (float *)v11);
        if ( v13 < 0.0 )
        {
          sub_1003AEE0(v38, *((float **)v11 + 4), this_offset_A38_1);
          v39 = v13;
          v14 = sub_1003AC90(v38, (float *)v11) / v39;
          v40 = v14;
          if ( v14 > 0.0 && v40 < (double)v22 )
          {
            sub_1003AFE0((int)&v31, (int)this_offset_A38_1, (int)v34, v40);
            if ( sub_1003B940((float *)&v31, *((float **)v11 + 4), *((float **)v11 + 5), *((float **)v11 + 6), (int)v11) )
            {
              v22 = v14;
              v24 = (int)v11;
              v35 = v31;
              v36 = v32;
              v37 = v33;
            }
          }
        }
      }
      ++v10;
      --v27;
    }
    while ( v27 );
    v8 = v29;
    v6 = (float *)v28;
    this_offset_A38 = this_offset_A38_1;
  }
  if ( v24 )
  {
    sub_1003AEE0((float *)v34, v6, (float *)a3);
    v25 = 0;
    v23 = 1.0;
    if ( v8 > 0 )
    {
      v16 = v30;
      v44 = v8;
      do
      {
        v17 = (char *)&unk_11750338 + 4800 * *v16;
        for ( j = &v17[32 * *((unsigned __int16 *)&dword_117554A0 + *v16)]; v17 != j; v17 += 32 )
        {
          v19 = sub_1003AC90((float *)v34, (float *)v17);
          if ( v19 < 0.0 )
          {
            sub_1003AEE0(v38, *((float **)v17 + 4), (float *)a3);
            v41 = v19;
            v20 = sub_1003AC90(v38, (float *)v17) / v41;
            v42 = v20;
            if ( v20 > 0.0 && v42 < (double)v23 )
            {
              sub_1003AFE0((int)&v31, a3, (int)v34, v42);
              if ( sub_1003B940(
                     (float *)&v31,
                     *((float **)v17 + 4),
                     *((float **)v17 + 5),
                     *((float **)v17 + 6),
                     (int)v17) )
              {
                v23 = v20;
                v25 = (int)v17;
                v35 = v31;
                v36 = v32;
                v37 = v33;
              }
            }
          }
        }
        ++v16;
        --v44;
      }
      while ( v44 );
      v6 = (float *)v28;
      this_offset_A38 = this_offset_A38_1;
    }
    if ( v25 )
    {
      *(float *)&v45 = sub_1003B0E0(v6, this_offset_A38);
      sub_1003AFE0((int)v6, (int)&v35, v25, 0.30000001);
      sub_1003AEE0((float *)v30, v6, this_offset_A38);
      v43 = sub_1003B170((float *)v30);
      if ( *(float *)&v45 < (double)v43 && v43 != 0.0 )
      {
        v21 = *(float *)&v45 / v43;
        sub_1003AD10((int)v30, v21);
        sub_1003AF40(v6, this_offset_A38, (float *)v30);
      }
      dword_100C129C = 1;
    }
  }
}
// 100C129C: using guessed type int dword_100C129C;
// 117554A0: using guessed type int dword_117554A0;
