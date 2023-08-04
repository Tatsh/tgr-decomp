#include "../../types-win32.h"
//----- (100759D0) --------------------------------------------------------
int __cdecl sub_100759D0(int a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9)
{
  double v9; // st6
  double v10; // st5
  double v11; // st7
  int v12; // edi
  float v13; // ecx
  __int16 v14; // ax
  char *v16; // esi
  char *i; // ebp
  double v18; // st7
  double v19; // st7
  int j; // eax
  int v21; // edx
  int v22; // eax
  _WORD *v23; // ecx
  double v24; // st7
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // esi
  _WORD *v29; // ecx
  float v31; // [esp-14h] [ebp-80h]
  float v32; // [esp-10h] [ebp-7Ch]
  int v33; // [esp+4h] [ebp-68h]
  int v34; // [esp+8h] [ebp-64h]
  float v35; // [esp+Ch] [ebp-60h]
  float v36; // [esp+10h] [ebp-5Ch]
  __int16 v37; // [esp+10h] [ebp-5Ch]
  float v38; // [esp+14h] [ebp-58h]
  float v39; // [esp+18h] [ebp-54h]
  unsigned __int16 v40; // [esp+1Ch] [ebp-50h]
  float v41; // [esp+20h] [ebp-4Ch]
  float v42; // [esp+24h] [ebp-48h] BYREF
  int v43; // [esp+28h] [ebp-44h]
  int v44; // [esp+2Ch] [ebp-40h]
  float v45; // [esp+30h] [ebp-3Ch] BYREF
  int v46; // [esp+34h] [ebp-38h]
  int v47; // [esp+38h] [ebp-34h]
  float v48; // [esp+3Ch] [ebp-30h] BYREF
  float v49; // [esp+40h] [ebp-2Ch]
  int v50; // [esp+44h] [ebp-28h]
  int v51[3]; // [esp+48h] [ebp-24h] BYREF
  int v52[2]; // [esp+54h] [ebp-18h] BYREF
  float v53; // [esp+5Ch] [ebp-10h]
  float v54[3]; // [esp+60h] [ebp-Ch] BYREF
  float v55; // [esp+84h] [ebp+18h]
  float v56; // [esp+84h] [ebp+18h]
  float v57; // [esp+84h] [ebp+18h]
  float v58; // [esp+84h] [ebp+18h]

  v9 = *(float *)(a3 + 4);
  v10 = flt_106C7C84 - flt_106C7C80;
  v11 = *(float *)a3;
  v36 = v10;
  v12 = 0;
  v45 = 0.0;
  v46 = 0;
  v47 = 1065353216;
  v42 = 0.0;
  v35 = v10 * v36 - -1.0;
  v43 = 0;
  v49 = v9;
  v38 = v35;
  v13 = *(float *)(a3 + 8);
  v32 = v49;
  v48 = v11;
  v41 = v13;
  v39 = v13;
  v31 = v48;
  v37 = 0;
  v44 = 1065353216;
  v51[0] = 0;
  v51[1] = 0;
  v51[2] = 1065353216;
  v50 = 1065353216;
  v40 = 0;
  v34 = 0;
  *(_DWORD *)a9 = 0;
  v33 = 0;
  v14 = sub_1006F720(v31, v32);
  v16 = (char *)&unk_11750338 + 4800 * v14;
  for ( i = &v16[32 * *((unsigned __int16 *)&dword_117554A0 + v14)]; v16 != i; v16 += 32 )
  {
    if ( *((float *)v16 + 2) >= 0.0 )
    {
      v18 = sub_1003AC90((float *)v51, (float *)v16);
      if ( v18 != 0.0 )
      {
        sub_1003AEE0(v54, *((float **)v16 + 4), &v48);
        v55 = v18;
        v56 = sub_1003AC90(v54, (float *)v16) / v55;
        sub_1003AFE0((int)v52, (int)&v48, (int)v51, v56);
        if ( sub_1003B940((float *)v52, *((float **)v16 + 4), *((float **)v16 + 5), *((float **)v16 + 6), (int)v16) )
        {
          v19 = *(float *)(a3 + 8) - -1.5 - v53;
          v57 = v19;
          if ( v19 >= 0.0 )
          {
            ++v34;
            if ( v57 >= (double)v35 )
            {
              if ( v33 < 32 )
              {
                *(_WORD *)(a4 + 2 * v33++) = *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) + 6) + 1;
                if ( v57 < 5.0 )
                {
                  v21 = dword_106C7CD4;
                  v22 = 2 * *(unsigned __int16 *)(dword_106C7CD8 + 2 * *((__int16 *)v16 + 14));
                  if ( *(_WORD *)(dword_106C7CD4 + v22) )
                  {
                    v23 = (_WORD *)(LODWORD(a6) + 2 * v12);
                    do
                    {
                      if ( v12 < 32 )
                      {
                        ++v12;
                        *v23 = *(_WORD *)(v21 + v22);
                        v21 = dword_106C7CD4;
                        ++v23;
                      }
                      v22 += 2;
                    }
                    while ( *(_WORD *)(v21 + v22) );
                  }
                }
              }
            }
            else
            {
              v35 = v19;
              v39 = v53;
              *(_DWORD *)a9 = *((__int16 *)v16 + 14);
              if ( *((float *)v16 + 2) >= 0.0 )
              {
                v42 = *(float *)v16;
                v43 = *((_DWORD *)v16 + 1);
                v44 = *((_DWORD *)v16 + 2);
              }
              else
              {
                sub_1003ACC0(&v42, (float *)v16);
              }
              if ( v33 < 32 )
                *(_WORD *)(a4 + 2 * v33++) = *(_WORD *)a4;
              *(_WORD *)a4 = *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) + 6) + 1;
              if ( v57 < 5.0 )
              {
                for ( j = 2 * *(unsigned __int16 *)(dword_106C7CD8 + 2 * *((__int16 *)v16 + 14));
                      *(_WORD *)(dword_106C7CD4 + j);
                      *(_WORD *)LODWORD(a6) = *(_WORD *)(dword_106C7CD4 + j - 2) )
                {
                  if ( v12 < 32 )
                    *(_WORD *)(LODWORD(a6) + 2 * v12++) = *(_WORD *)LODWORD(a6);
                  j += 2;
                }
              }
            }
          }
          v24 = v57 - 1.5;
          v58 = v24;
          if ( v24 <= 0.0 && v58 < (double)v38 )
          {
            v37 = *(_WORD *)(dword_106C7C54 + 8 * *((__int16 *)v16 + 14) + 6) + 1;
            if ( v58 > -1.0 )
            {
              v38 = v24;
              v41 = v53;
              v40 = *((_WORD *)v16 + 14);
              if ( *((float *)v16 + 2) >= 0.0 )
              {
                v45 = *(float *)v16;
                v46 = *((_DWORD *)v16 + 1);
                v47 = *((_DWORD *)v16 + 2);
              }
              else
              {
                sub_1003ACC0(&v45, (float *)v16);
              }
            }
          }
        }
      }
    }
  }
  if ( v34 )
  {
    if ( a1 )
    {
      *(float *)(a1 + 8) = v39;
      *(float *)a8 = v35 - 1.5;
    }
    v25 = a2;
    if ( a2 )
    {
      *(float *)a2 = v42;
      *(_DWORD *)(a2 + 4) = v43;
      v26 = v44;
LABEL_50:
      *(_DWORD *)(v25 + 8) = v26;
      goto LABEL_51;
    }
  }
  else
  {
    v27 = *(unsigned __int16 *)(dword_106C7CD8 + 2 * v40);
    v28 = dword_106C7CD4;
    if ( *(_WORD *)(dword_106C7CD4 + 2 * (unsigned __int16)v27) )
    {
      v29 = (_WORD *)(LODWORD(a6) + 2 * v12);
      while ( v12 < 32 )
      {
        ++v12;
        *v29 = *(_WORD *)(v28 + 2 * v27);
        v28 = dword_106C7CD4;
        ++v29;
        ++v27;
        if ( !*(_WORD *)(dword_106C7CD4 + 2 * v27) )
          goto LABEL_43;
      }
      *(_WORD *)(LODWORD(a6) + 62) = *(_WORD *)(v28 + 2 * v27);
    }
LABEL_43:
    if ( v33 >= 32 )
      *(_WORD *)(a4 + 62) = v37;
    else
      *(_WORD *)(a4 + 2 * v33) = v37;
    if ( a1 )
      *(float *)(a1 + 8) = v41;
    v25 = a2;
    if ( a2 )
    {
      *(float *)a2 = v45;
      *(_DWORD *)(a2 + 4) = v46;
      v26 = v47;
      goto LABEL_50;
    }
  }
LABEL_51:
  *(_DWORD *)a5 = 1;
  *(_DWORD *)a7 = v12;
  return v34;
}
// 106C7C54: using guessed type int dword_106C7C54;
// 106C7C80: using guessed type float flt_106C7C80;
// 106C7C84: using guessed type float flt_106C7C84;
// 106C7CD4: using guessed type int dword_106C7CD4;
// 106C7CD8: using guessed type int dword_106C7CD8;
// 117554A0: using guessed type int dword_117554A0;
