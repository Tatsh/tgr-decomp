#include "../../types-n64.h"
//----- (80269B6C) --------------------------------------------------------
int __fastcall sub_80269B6C(int a1, int a2)
{
  int v2; // $ra
  int result; // $v0
  int v4; // [sp+1Ch] [-1Ch]
  int v5; // [sp+20h] [-18h]
  int v6; // [sp+24h] [-14h]
  unsigned __int16 v7; // [sp+28h] [-10h] BYREF
  unsigned __int16 v8; // [sp+2Ah] [-Eh] BYREF
  int v9; // [sp+2Ch] [-Ch]
  __int16 v10[4]; // [sp+30h] [-8h]

  v4 = v2;
  v9 = 0;
  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v9 = result) == 0) )
  {
    v10[0] = 1;
    v10[1] = 3;
    v10[2] = 4;
    v10[3] = 6;
    v6 = 1;
    while ( 1 )
    {
      result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), v10[v6], (_BYTE *)a2);
      v9 = result;
      if ( result )
        break;
      sub_802696EC(a2, &v8, &v7);
      if ( (*(unsigned __int16 *)(a2 + 28) != v8 || *(unsigned __int16 *)(a2 + 30) != v7) && ++v6 < 4 )
        continue;
      if ( v6 == 4 )
        return 10;
      v5 = 0;
      while ( 1 )
      {
        if ( v5 != v6 )
        {
          result = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), v10[v5], (unsigned __int8 *)a2, 1);
          v9 = result;
          if ( result )
            break;
        }
        if ( ++v5 >= 4 )
          return 0;
      }
      return result;
    }
  }
  return result;
}
// 80269B78: variable 'v2' is possibly undefined
