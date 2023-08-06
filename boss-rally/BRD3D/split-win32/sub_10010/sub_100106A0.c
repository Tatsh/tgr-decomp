#include "../../types-win32.h"
//----- (100106A0) --------------------------------------------------------
int *__cdecl sub_100106A0(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7)
{
  int v7; // edi
  int v8; // esi
  int v9; // esi
  int *result; // eax
  int *v11; // ecx
  int *v12; // edx
  int *v13; // esi
  int *v14; // esi
  int *v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h]
  int i; // [esp+30h] [ebp+18h]

  v7 = dword_102E5ECC;
  v15 = 0;
  if ( dword_102E5ECC )
    dword_102E5ECC = *(_DWORD *)dword_102E5ECC;
  *(_DWORD *)(v7 + 4) = v7 + 8;
  *(_DWORD *)(v7 + 8) = *a6;
  *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4) = a6[1];
  *(_DWORD *)(*(_DWORD *)(v7 + 4) + 8) = a6[2];
  *(_DWORD *)(*(_DWORD *)(v7 + 4) + 20) = a6[5];
  *(_DWORD *)(*(_DWORD *)(v7 + 4) + 24) = a6[6];
  *(_DWORD *)(*(_DWORD *)(v7 + 4) + 28) = a6[7];
  sub_10010D10(*(float **)(v7 + 4));
  *(_DWORD *)v7 = v15;
  v8 = dword_102E5ECC;
  v15 = (int *)v7;
  if ( dword_102E5ECC )
    dword_102E5ECC = *(_DWORD *)dword_102E5ECC;
  *(_DWORD *)(v8 + 4) = v8 + 8;
  *(_DWORD *)(v8 + 8) = *a5;
  *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4) = a5[1];
  *(_DWORD *)(*(_DWORD *)(v8 + 4) + 8) = a5[2];
  *(_DWORD *)(*(_DWORD *)(v8 + 4) + 20) = a5[5];
  *(_DWORD *)(*(_DWORD *)(v8 + 4) + 24) = a5[6];
  *(_DWORD *)(*(_DWORD *)(v8 + 4) + 28) = a5[7];
  sub_10010D10(*(float **)(v8 + 4));
  *(_DWORD *)v8 = v15;
  v15 = (int *)v8;
  v9 = dword_102E5ECC;
  if ( dword_102E5ECC )
    dword_102E5ECC = *(_DWORD *)dword_102E5ECC;
  *(_DWORD *)(v9 + 4) = v9 + 8;
  *(_DWORD *)(v9 + 8) = *a4;
  *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) = a4[1];
  *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8) = a4[2];
  *(_DWORD *)(*(_DWORD *)(v9 + 4) + 20) = a4[5];
  *(_DWORD *)(*(_DWORD *)(v9 + 4) + 24) = a4[6];
  *(_DWORD *)(*(_DWORD *)(v9 + 4) + 28) = a4[7];
  sub_10010D10(*(float **)(v9 + 4));
  *(_DWORD *)v9 = v15;
  v15 = (int *)v9;
  *(_DWORD *)v7 = v9;
  v16 = 3;
  sub_100109A0((int)&v15, (double (__cdecl *)(_DWORD *))sub_10010960);
  result = (int *)v16;
  if ( v16 >= 2
    && (sub_100109A0((int)&v15, (double (__cdecl *)(_DWORD *))sub_10010970), result = (int *)v16, v16 >= 2)
    && (sub_100109A0((int)&v15, (double (__cdecl *)(_DWORD *))sub_10010980), result = (int *)v16, v16 >= 2)
    && (sub_100109A0((int)&v15, (double (__cdecl *)(_DWORD *))sub_10010990), result = (int *)v16, v16 >= 2) )
  {
    for ( i = 0; i < v16; ++i )
    {
      v14 = v15;
      v15 = (int *)*v15;
      sub_10010BF0(a1, a2, a3, 0, v14[1], 0.0, 0.0, a7);
      sub_10010BF0(a1, a2, a3, 1, v14[1], 1024.0, 0.0, a7);
      sub_10010BF0(a1, a2, a3, 2, v14[1], 0.0, 1024.0, a7);
      sub_10010BF0(a1, a2, a3, 3, v14[1], 1024.0, 1024.0, a7);
      if ( v14 >= dword_102E54C0 && v14 < &dword_102E5EC0 )
      {
        *v14 = dword_102E5ECC;
        dword_102E5ECC = (int)v14;
      }
      result = (int *)(i + 1);
    }
  }
  else if ( (int)result > 0 )
  {
    v11 = v15;
    v12 = (int *)dword_102E5ECC;
    v13 = result;
    do
    {
      result = v11;
      v11 = (int *)*v11;
      v15 = v11;
      if ( result >= dword_102E54C0 && result < &dword_102E5EC0 )
      {
        *result = (int)v12;
        v11 = v15;
        v12 = result;
        dword_102E5ECC = (int)result;
      }
      v13 = (int *)((char *)v13 - 1);
    }
    while ( v13 );
  }
  return result;
}
// 10010894: conditional instruction was optimized away because of '%var_4.4>=2'
// 102E5EC0: using guessed type int dword_102E5EC0;
// 102E5ECC: using guessed type int dword_102E5ECC;
