#include "../../types-n64.h"
//----- (802635DC) --------------------------------------------------------
int __fastcall sub_802635DC(int a1, int a2, char a3, int a4, int a5, unsigned __int8 *a6)
{
  int result; // $v0
  int v7; // $t4
  unsigned __int8 v8; // [sp+23h] [-135h] BYREF
  unsigned __int8 *v9; // [sp+24h] [-134h]
  int v10; // [sp+28h] [-130h]
  int v11; // [sp+2Ch] [-12Ch]
  unsigned __int16 v12; // [sp+30h] [-128h] BYREF
  char v13[256]; // [sp+34h] [-124h] BYREF
  unsigned __int8 v14[6]; // [sp+134h] [-24h] BYREF
  unsigned __int16 v15; // [sp+13Ah] [-1Eh]
  char v16; // [sp+13Ch] [-1Ch]
  int v17; // [sp+154h] [-4h]
  __int16 v19; // [sp+15Eh] [+6h]

  v19 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 80) || a2 < 0 )
    return 5;
  if ( a5 <= 0 || (a5 & 0x1F) != 0 )
    return 5;
  if ( a4 < 0 || (a4 & 0x1F) != 0 )
    return 5;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return 5;
  if ( sub_80269F60(a1) == 2 )
    return 2;
  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v17 = result) == 0) )
  {
    result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + v19, v14);
    v17 = result;
    if ( !result )
    {
      if ( v15 >= *(int *)(a1 + 96)
        && HIBYTE(v15) < (int)*(unsigned __int8 *)(a1 + 100)
        && (_BYTE)v15
        && (unsigned __int8)v15 < 0x80u )
      {
        if ( a3 || (v16 & 2) != 0 )
        {
          v8 = -1;
          v7 = a4 >> 5;
          if ( a4 < 0 )
            v7 = (a4 + 31) >> 5;
          v11 = v7;
          v12 = v15;
          if ( v7 < 8 )
          {
LABEL_32:
            v10 = a5 >> 5;
            v9 = a6;
            if ( a5 >> 5 <= 0 )
            {
LABEL_44:
              if ( a3 != 1
                || (v16 & 2) != 0
                || (v16 |= 2u, *(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v17 = result) == 0)
                && (result = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + v19, v14, 0),
                    (v17 = result) == 0) )
              {
                result = 0;
              }
            }
            else
            {
              while ( 1 )
              {
                if ( v11 == 8 )
                {
                  result = sub_802634E0(a1, &v8, (int)v13, (unsigned __int8 *)&v12);
                  v17 = result;
                  if ( result )
                    return result;
                  v11 = 0;
                }
                if ( *(unsigned __int8 *)(a1 + 101) != HIBYTE(v12) )
                {
                  *(_BYTE *)(a1 + 101) = HIBYTE(v12);
                  result = sub_8026A37C(a1);
                  v17 = result;
                  if ( result )
                    break;
                }
                if ( a3 )
                  v17 = sub_8026A900(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 8 * (unsigned __int8)v12 + v11, v9, 0);
                else
                  v17 = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 8 * (unsigned __int8)v12 + v11, v9);
                if ( v17 )
                  return v17;
                --v10;
                v9 += 32;
                ++v11;
                if ( v10 <= 0 )
                  goto LABEL_44;
              }
            }
          }
          else
          {
            while ( 1 )
            {
              result = sub_802634E0(a1, &v8, (int)v13, (unsigned __int8 *)&v12);
              v17 = result;
              if ( result )
                break;
              v11 -= 8;
              if ( v11 < 8 )
                goto LABEL_32;
            }
          }
        }
        else
        {
          result = 6;
        }
      }
      else if ( v15 == 1 )
      {
        result = 5;
      }
      else
      {
        result = 3;
      }
    }
  }
  return result;
}
// 8026380C: conditional instruction was optimized away because of '%arg_10.4>=1'
