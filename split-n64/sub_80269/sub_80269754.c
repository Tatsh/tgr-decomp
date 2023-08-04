#include "../../types-n64.h"
//----- (80269754) --------------------------------------------------------
int __fastcall sub_80269754(int a1, int a2, int a3)
{
  int v3; // $ra
  int result; // $v0
  int v5; // $t5
  int v6; // $t7
  int v7; // [sp+1Ch] [-5Ch]
  __int16 v8[4]; // [sp+20h] [-58h]
  int v9; // [sp+28h] [-50h]
  int i; // [sp+2Ch] [-4Ch]
  bool v11; // [sp+33h] [-45h]
  char v12[32]; // [sp+34h] [-44h] BYREF
  unsigned __int8 v13[32]; // [sp+54h] [-24h] BYREF
  int v14; // [sp+74h] [-4h]

  v7 = v3;
  v14 = 0;
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v14 = result) == 0) )
  {
    *(_DWORD *)a3 = -1;
    *(_DWORD *)(a3 + 4) = sub_802649F0();
    v5 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a3 + 12) = v5;
    v6 = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a3 + 20) = v6;
    v9 = 0;
    while ( 1 )
    {
      *(_BYTE *)(a1 + 101) = v9;
      result = sub_8026A37C(a1);
      v14 = result;
      if ( result )
        break;
      result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0, v13);
      v14 = result;
      if ( result )
        break;
      v13[0] = v9 | 0x80;
      for ( i = 1; i < 32; ++i )
        v13[i] = ~v13[i];
      result = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0, v13, 0);
      v14 = result;
      if ( result )
        break;
      result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0, v12);
      v14 = result;
      if ( result )
        break;
      for ( i = 0; i < 32; ++i )
      {
        if ( v13[i] != (unsigned __int8)v12[i] )
          break;
      }
      if ( i == 32 )
      {
        if ( v9 <= 0 )
          goto LABEL_31;
        *(_BYTE *)(a1 + 101) = 0;
        result = sub_8026A37C(a1);
        v14 = result;
        if ( result )
          return result;
        result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 0, v13);
        v14 = result;
        if ( result )
          return result;
        if ( v13[0] == 128 )
        {
LABEL_31:
          if ( ++v9 < 62 )
            continue;
        }
      }
      *(_BYTE *)(a1 + 101) = 0;
      result = sub_8026A37C(a1);
      v14 = result;
      if ( !result )
      {
        v11 = v9 > 0;
        *(_WORD *)(a3 + 24) = *(_WORD *)(a2 + 24) & 0xFFFE | (v9 > 0);
        *(_BYTE *)(a3 + 26) = v9;
        *(_BYTE *)(a3 + 27) = *(_BYTE *)(a2 + 27);
        sub_802696EC(a3, (_WORD *)(a3 + 28), (_WORD *)(a3 + 30));
        v8[0] = 1;
        v8[1] = 3;
        v8[2] = 4;
        v8[3] = 6;
        i = 0;
        while ( 1 )
        {
          result = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), v8[i], (unsigned __int8 *)a3, 1);
          v14 = result;
          if ( result )
            break;
          if ( ++i >= 4 )
          {
            result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 1, v13);
            v14 = result;
            if ( !result )
            {
              for ( i = 0; i < 32; ++i )
              {
                if ( *(unsigned __int8 *)(a3 + i) != v13[i] )
                  return 10;
              }
              result = 0;
            }
            return result;
          }
        }
      }
      return result;
    }
  }
  return result;
}
// 80269760: variable 'v3' is possibly undefined
