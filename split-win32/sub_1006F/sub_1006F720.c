#include "../../types-win32.h"
//----- (1006F720) --------------------------------------------------------
__int16 __cdecl sub_1006F720(float a1, float a2)
{
  unsigned int v2; // ebx
  int *v3; // esi
  int v4; // edi
  int v5; // eax
  int *v6; // ecx
  int v7; // ebp
  int v8; // edx
  __int16 v9; // di
  char *v10; // esi
  unsigned __int16 i; // ax
  float *v12; // ecx
  char v13; // dl
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  float *v18; // ecx
  double v19; // st5
  double v20; // st4
  float *v21; // eax
  double v22; // rt0
  double v23; // st6
  int v25; // [esp+0h] [ebp-10h]
  float v26; // [esp+4h] [ebp-Ch]
  float v27; // [esp+8h] [ebp-8h]

  ++dword_117554E0;
  v2 = 0x40000000;
  v3 = dword_117554C8;
  v4 = (((__int64)a2 / 32) << 6) + (__int64)a1 / 32;
  v5 = 0;
  v6 = &dword_117554D8;
  do
  {
    if ( *(unsigned __int16 *)v6 == (__int16)v4 )
    {
      dword_117554C8[v5] = dword_117554E0;
      return v5;
    }
    if ( *v3 >= v2 )
    {
      v7 = v25;
    }
    else
    {
      v7 = v5;
      v2 = *v3;
      v25 = v5;
    }
    v6 = (int *)((char *)v6 + 2);
    ++v5;
    ++v3;
  }
  while ( (int)v6 < (int)&dword_117554E0 );
  v8 = dword_117554E0;
  *((_WORD *)&dword_117554D8 + v7) = v4;
  dword_117554C8[v7] = v8;
  v9 = 0;
  v10 = (char *)&unk_11750338 + 4800 * v7;
  a2 = COERCE_FLOAT(sub_10002DE0(a1, a2));
  if ( a2 != 0.0 )
  {
    for ( i = sub_10002EF0((unsigned __int16 *)&a2); i; i = sub_10002EF0((unsigned __int16 *)&a2) )
    {
      *((_DWORD *)v10 + 4) = dword_106C7C5C + 12 * *(unsigned __int16 *)(dword_106C7C54 + 8 * i);
      *((_DWORD *)v10 + 5) = dword_106C7C5C + 12 * *(unsigned __int16 *)(dword_106C7C54 + 8 * i + 2);
      *((_DWORD *)v10 + 6) = dword_106C7C5C + 12 * *(unsigned __int16 *)(dword_106C7C54 + 8 * i + 4);
      v12 = (float *)*((_DWORD *)v10 + 5);
      v13 = *(_BYTE *)(dword_106C7CDC + i) & 7;
      *((_WORD *)v10 + 14) = i;
      v14 = (float *)*((_DWORD *)v10 + 4);
      v10[30] = v13;
      v15 = *v12 - *v14;
      v16 = v12[1] - v14[1];
      v17 = v12[2];
      v18 = (float *)*((_DWORD *)v10 + 6);
      v19 = v17 - v14[2];
      v26 = *v18 - *v14;
      v27 = v18[1] - v14[1];
      v20 = v18[2] - v14[2];
      *(float *)v10 = v20 * v16 - v27 * v19;
      *((float *)v10 + 1) = v26 * v19 - v20 * v15;
      *((float *)v10 + 2) = v27 * v15 - v26 * v16;
      sub_10074250((float *)v10);
      v21 = (float *)*((_DWORD *)v10 + 4);
      ++v9;
      v22 = *(float *)v10 * *v21 + v21[1] * *((float *)v10 + 1);
      v23 = v21[2] * *((float *)v10 + 2);
      v10 += 32;
      *((float *)v10 - 5) = -(v22 + v23);
    }
  }
  *((_WORD *)&dword_117554A0 + v7) = v9;
  LOWORD(v5) = v7;
  return v5;
}
// 1006F789: variable 'v25' is possibly undefined
// 106C7C54: using guessed type int dword_106C7C54;
// 106C7C5C: using guessed type int dword_106C7C5C;
// 106C7CDC: using guessed type int dword_106C7CDC;
// 117554A0: using guessed type int dword_117554A0;
// 117554C8: using guessed type int dword_117554C8[];
// 117554D8: using guessed type int dword_117554D8;
// 117554E0: using guessed type int dword_117554E0;
