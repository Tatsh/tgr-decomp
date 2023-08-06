#include "../../types-n64.h"
//----- (8026A05C) --------------------------------------------------------
int __fastcall sub_8026A05C(int a1, int a2, char a3, unsigned __int8 a4)
{
  int result; // $v0
  unsigned __int8 *v5; // [sp+24h] [-14h]
  int v6; // [sp+28h] [-10h]
  int v7; // [sp+2Ch] [-Ch]
  int i; // [sp+30h] [-8h]
  int k; // [sp+30h] [-8h]
  int l; // [sp+30h] [-8h]
  int j; // [sp+30h] [-8h]
  unsigned __int8 v12; // [sp+37h] [-1h]

  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, (result = sub_8026A37C(a1)) == 0) )
  {
    if ( a4 )
      v6 = 1;
    else
      v6 = *(_DWORD *)(a1 + 96);
    if ( a3 == 1 )
      *(_BYTE *)(a2 + 1) = sub_80269690((unsigned __int8 *)(a2 + 2 * v6), -2 * v6 + 256);
    for ( i = 0; i < 8; ++i )
    {
      v5 = (unsigned __int8 *)(a2 + 32 * i);
      if ( a3 == 1 )
      {
        sub_8026A900(
          *(_DWORD *)(a1 + 4),
          *(_DWORD *)(a1 + 8),
          *(_WORD *)(a1 + 84) + 8 * a4 + i,
          (unsigned __int8 *)(a2 + 32 * i),
          0);
        v7 = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 88) + 8 * a4 + i, v5, 0);
      }
      else
      {
        v7 = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 84) + 8 * a4 + i, v5);
      }
      if ( v7 )
        return v7;
    }
    if ( !a3 )
    {
      v12 = sub_80269690((unsigned __int8 *)(a2 + 2 * v6), -2 * v6 + 256);
      if ( *(unsigned __int8 *)(a2 + 1) == v12 )
      {
        for ( j = 0; j < 8; ++j )
          sub_8026A900(
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 8),
            *(_DWORD *)(a1 + 88) + 8 * a4 + j,
            (unsigned __int8 *)(a2 + 32 * j),
            0);
      }
      else
      {
        for ( k = 0; k < 8; ++k )
          sub_8026A3F0(
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 8),
            *(_DWORD *)(a1 + 88) + 8 * a4 + k,
            (_BYTE *)(a2 + 32 * k));
        if ( *(unsigned __int8 *)(a2 + 1) != v12 )
          return 3;
        for ( l = 0; l < 8; ++l )
          sub_8026A900(
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 8),
            *(_DWORD *)(a1 + 84) + 8 * a4 + l,
            (unsigned __int8 *)(a2 + 32 * l),
            0);
      }
    }
    result = 0;
  }
  return result;
}
