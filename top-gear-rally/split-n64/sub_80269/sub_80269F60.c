#include "../../types-n64.h"
//----- (80269F60) --------------------------------------------------------
int __fastcall sub_80269F60(int a1)
{
  int v1; // $ra
  int result; // $v0
  int v3; // [sp+14h] [-2Ch]
  int v4; // [sp+18h] [-28h]
  char v5[32]; // [sp+1Ch] [-24h] BYREF
  int i; // [sp+3Ch] [-4h]

  v3 = v1;
  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v4 = result) == 0) )
  {
    result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 1, v5);
    v4 = result;
    if ( !result
      || result == 2 && (result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 1, v5), (v4 = result) == 0) )
    {
      for ( i = 0; i < 32; ++i )
      {
        if ( v5[i] != *(_BYTE *)(a1 + i + 12) )
          return 2;
      }
      result = 0;
    }
  }
  return result;
}
// 80269F6C: variable 'v1' is possibly undefined
