#include "../../types-n64.h"
//----- (8026A60C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8026A60C(int a1, __int16 a2)
{
  int v2; // $ra
  int v3; // $t9
  int result; // $v0
  BOOL v5; // $at
  char *v6; // $t3
  int *v7; // $t2
  int v8; // $at
  int v9; // $at
  _BYTE v10[20]; // [sp+0h] [-48h] BYREF
  int v11; // [sp+14h] [-34h]
  int i; // [sp+18h] [-30h]
  char v13[4]; // [sp+1Ch] [-2Ch] BYREF
  __int16 v14; // [sp+20h] [-28h]
  _BYTE v15[4]; // [sp+40h] [-8h] BYREF
  int *v16; // [sp+44h] [-4h]

  v11 = v2;
  v16 = dword_8037F0B0;
  i = 0;
  do
  {
    v3 = i;
    *(_DWORD *)(4 * i - 2143817552) = 0;
    i = v3 + 1;
  }
  while ( v3 + 1 < 16 );
  dword_8037F0EC = 1;
  v13[0] = -1;
  v13[1] = 3;
  v13[2] = 33;
  v13[3] = 2;
  result = sub_8026A780(a2);
  v15[2] = -1;
  v14 = result | (32 * a2);
  for ( i = 0; i < 32; ++i )
    v10[i + 34] = -1;
  if ( a1 )
  {
    i = 0;
    if ( a1 > 0 )
    {
      do
      {
        *(_BYTE *)v16 = 0;
        v5 = ++i < a1;
        v16 = (int *)((char *)v16 + 1);
      }
      while ( v5 );
    }
  }
  v6 = v13;
  v7 = v16;
  do
  {
    v8 = *(_DWORD *)v6;
    v6 += 12;
    v7 += 3;
    *(v7 - 3) = v8;
    *(v7 - 2) = *((_DWORD *)v6 - 2);
    v9 = *((_DWORD *)v6 - 1);
    *(v7 - 1) = v9;
    *(v7 - 1) = v9;
  }
  while ( v6 != v15 );
  *v7 = *(_DWORD *)v6;
  v16 += 10;
  *(_BYTE *)v16 = -2;
  return result;
}
// 8026A66C: write access to const memory at 8037F0EC has been detected
// 8026A618: variable 'v2' is possibly undefined
// 8037F0B0: using guessed type int dword_8037F0B0[15];
// 8037F0EC: using guessed type int dword_8037F0EC;
