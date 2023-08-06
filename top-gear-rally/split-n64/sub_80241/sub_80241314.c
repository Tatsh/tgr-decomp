#include "../../types-n64.h"
//----- (80241314) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80241314(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  char *v4; // $v0
  char *v5; // $v0
  int result; // $v0
  int v7; // [sp+30h] [-4C0h] BYREF
  char v8[32]; // [sp+34h] [-4BCh] BYREF
  int *(__fastcall *v9)(_DWORD *, int); // [sp+54h] [-49Ch]
  int v10; // [sp+58h] [-498h]
  int *v11; // [sp+5Ch] [-494h]
  int v12[2]; // [sp+6Ch] [-484h] BYREF
  char v13; // [sp+74h] [-47Ch] BYREF
  char v14; // [sp+E4h] [-40Ch] BYREF
  char v15; // [sp+2ACh] [-244h] BYREF
  char v16[96]; // [sp+46Ch] [-84h] BYREF
  char v17[32]; // [sp+4CCh] [-24h] BYREF
  char v18; // [sp+4ECh] [-4h] BYREF

  v7 = 530;
  v9 = sub_802412EC;
  v10 = 0;
  v11 = &v7;
  v4 = (char *)v12;
  do
  {
    v4 += 16;
    *((_DWORD *)v4 - 3) = 8;
    *((_DWORD *)v4 - 2) = 8;
    *((_DWORD *)v4 - 1) = 8;
    *((_DWORD *)v4 - 4) = 8;
  }
  while ( v4 != &v15 );
  for ( ; v4 < v16; *((_DWORD *)v4 - 1) = 9 )
    v4 += 4;
  for ( ; v4 < v17; *((_DWORD *)v4 - 1) = 7 )
    v4 += 4;
  for ( ; v4 < &v18; *((_DWORD *)v4 - 1) = 8 )
    v4 += 4;
  dword_80369B60 = 7;
  sub_80240A30(
    v12,
    0x120u,
    0x101u,
    (int)dword_8028C8D0,
    (int)dword_8028C94C,
    &dword_80369B68,
    (unsigned int *)&dword_80369B60,
    (int)v8);
  v12[1] = 5;
  v12[0] = 5;
  v5 = &v13;
  do
  {
    v5 += 16;
    *((_DWORD *)v5 - 3) = 5;
    *((_DWORD *)v5 - 2) = 5;
    *((_DWORD *)v5 - 1) = 5;
    *((_DWORD *)v5 - 4) = 5;
  }
  while ( v5 != &v14 );
  dword_80369B64 = 5;
  sub_80240A30(
    v12,
    0x1Eu,
    0,
    (int)dword_8028C9C8,
    (int)dword_8028CA40,
    &dword_80369B6C,
    (unsigned int *)&dword_80369B64,
    (int)v8);
  dword_8028CAB8 = 1;
  *a1 = 365136284;
  result = 0;
  *a2 = 394941786;
  *a3 = 1680957241;
  *a4 = 435692482;
  return result;
}
// 802414B0: write access to const memory at 8028CAB8 has been detected
// 80241408: write access to const memory at 80369B60 has been detected
// 80241484: write access to const memory at 80369B64 has been detected
// 8028C8D0: using guessed type int dword_8028C8D0[31];
// 8028C94C: using guessed type int dword_8028C94C[8];
// 8028C9C8: using guessed type int dword_8028C9C8[30];
// 8028CA40: using guessed type int dword_8028CA40[4];
// 8028CAB8: using guessed type int dword_8028CAB8;
// 80369B60: using guessed type int dword_80369B60;
// 80369B64: using guessed type int dword_80369B64;
// 80369B68: using guessed type int dword_80369B68;
// 80369B6C: using guessed type int dword_80369B6C;
