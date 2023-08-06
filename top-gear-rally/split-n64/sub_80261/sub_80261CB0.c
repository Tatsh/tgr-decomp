#include "../../types-n64.h"
//----- (80261CB0) --------------------------------------------------------
int __fastcall sub_80261CB0(int a1, int a2, int a3)
{
  int result; // $v0
  char v4[32]; // [sp+18h] [-50h] BYREF
  char *v5; // [sp+38h] [-30h]
  char v6[28]; // [sp+3Ch] [-2Ch] BYREF
  __int16 v7; // [sp+58h] [-10h]
  __int16 v8; // [sp+5Ah] [-Eh]
  __int16 v9; // [sp+5Ch] [-Ch] BYREF
  __int16 v10; // [sp+5Eh] [-Ah] BYREF
  int v11; // [sp+60h] [-8h]
  int i; // [sp+64h] [-4h]

  sub_80269460();
  v11 = sub_80269580(a1, a3);
  sub_802694A4();
  if ( v11 )
    return v11;
  *(_DWORD *)(a2 + 4) = a1;
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 101) = 0;
  result = sub_8026A37C(a2);
  v11 = result;
  if ( !result )
  {
    if ( (sub_802696EC((int)v6, &v10, &v9), v5 = v6, v7 == v10) && v8 == v9
      || (result = sub_80269B6C(a2, (int)v5), (v11 = result) == 0) )
    {
      if ( (*((_WORD *)v5 + 12) & 1) != 0 )
        goto LABEL_11;
      result = sub_80269754(a2, (int)v5, (int)v4);
      v11 = result;
      if ( result )
        return result;
      v5 = v4;
      if ( (v4[25] & 1) != 0 )
      {
LABEL_11:
        for ( i = 0; i < 32; ++i )
          *(_BYTE *)(a2 + i + 12) = v5[i];
        *(_DWORD *)(a2 + 76) = (unsigned __int8)v5[27];
        *(_BYTE *)(a2 + 100) = v5[26];
        *(_DWORD *)(a2 + 96) = 2 * *(unsigned __int8 *)(a2 + 100) + 3;
        *(_DWORD *)(a2 + 80) = 16;
        *(_DWORD *)(a2 + 84) = 8;
        *(_DWORD *)(a2 + 88) = 8 * *(unsigned __int8 *)(a2 + 100) + 8;
        *(_DWORD *)(a2 + 92) = *(_DWORD *)(a2 + 88) + 8 * *(unsigned __int8 *)(a2 + 100);
        result = sub_8026A3F0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), 7, (_BYTE *)(a2 + 44));
        v11 = result;
        if ( !result )
        {
          v11 = sub_80262A80(a2);
          *(_DWORD *)a2 |= 1u;
          result = v11;
        }
      }
      else
      {
        result = 11;
      }
    }
  }
  return result;
}
