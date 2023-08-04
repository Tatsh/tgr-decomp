#include "../../types-n64.h"
//----- (8026AB04) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8026AB04(int a1, __int16 a2, _BYTE *a3)
{
  int v3; // $ra
  int v4; // $t9
  int result; // $v0
  BOOL v6; // $at
  BOOL v7; // $at
  char *v8; // $t6
  int *v9; // $t5
  int v10; // $at
  int v11; // $at
  _BYTE v12[20]; // [sp+0h] [-48h] BYREF
  int v13; // [sp+14h] [-34h]
  int v14; // [sp+18h] [-30h]
  char v15[4]; // [sp+1Ch] [-2Ch] BYREF
  __int16 v16; // [sp+20h] [-28h]
  _BYTE v17[4]; // [sp+40h] [-8h] BYREF
  int *v18; // [sp+44h] [-4h]

  v13 = v3;
  v18 = dword_8037F0B0;
  v14 = 0;
  do
  {
    v4 = v14;
    *(_DWORD *)(4 * v14 - 2143817552) = 0;
    v14 = v4 + 1;
  }
  while ( v4 + 1 < 16 );
  dword_8037F0EC = 1;
  v15[0] = -1;
  v15[1] = 35;
  v15[2] = 1;
  v15[3] = 3;
  result = sub_8026A780(a2);
  v17[2] = -1;
  v16 = result | (32 * a2);
  v14 = 0;
  do
  {
    v12[v14 + 34] = *a3;
    v6 = ++v14 < 32;
    ++a3;
  }
  while ( v6 );
  if ( a1 )
  {
    v14 = 0;
    if ( a1 > 0 )
    {
      do
      {
        *(_BYTE *)v18 = 0;
        v7 = ++v14 < a1;
        v18 = (int *)((char *)v18 + 1);
      }
      while ( v7 );
    }
  }
  v8 = v15;
  v9 = v18;
  do
  {
    v10 = *(_DWORD *)v8;
    v8 += 12;
    v9 += 3;
    *(v9 - 3) = v10;
    *(v9 - 2) = *((_DWORD *)v8 - 2);
    v11 = *((_DWORD *)v8 - 1);
    *(v9 - 1) = v11;
    *(v9 - 1) = v11;
  }
  while ( v8 != v17 );
  *v9 = *(_DWORD *)v8;
  v18 += 10;
  *(_BYTE *)v18 = -2;
  return result;
}
// 8026AB68: write access to const memory at 8037F0EC has been detected
// 8026AB10: variable 'v3' is possibly undefined
// 8037F0B0: using guessed type int dword_8037F0B0[15];
// 8037F0EC: using guessed type int dword_8037F0EC;
