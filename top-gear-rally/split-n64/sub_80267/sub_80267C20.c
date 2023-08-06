#include "../../types-n64.h"
//----- (80267C20) --------------------------------------------------------
int __fastcall sub_80267C20(int a1, __int16 a2, int a3, int a4, int a5)
{
  int v5; // $ra
  int result; // $v0
  _BYTE v7[16]; // [sp+0h] [-160h] BYREF
  int v8; // [sp+24h] [-13Ch]
  __int16 v9; // [sp+2Eh] [-132h]
  __int16 v10; // [sp+30h] [-130h] BYREF
  __int16 v11; // [sp+32h] [-12Eh] BYREF
  int v12; // [sp+34h] [-12Ch] BYREF
  __int16 v13; // [sp+38h] [-128h]
  __int16 v14; // [sp+3Ah] [-126h]
  char v15; // [sp+3Ch] [-124h]
  __int16 v16; // [sp+3Eh] [-122h]
  char v17[256]; // [sp+54h] [-10Ch] BYREF
  int v18; // [sp+154h] [-Ch]
  int i; // [sp+158h] [-8h]
  int v20; // [sp+15Ch] [-4h] BYREF

  v8 = v5;
  v11 = 0;
  if ( !a2 || !a3 )
    return 5;
  if ( (*(_DWORD *)a1 & 1) == 0 )
    return 5;
  if ( sub_80269F60(a1) == 2 )
    return 2;
  if ( !*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, result = sub_8026A37C(a1), (v18 = result) == 0) )
  {
    result = sub_802628C0((int *)a1, a2, a3, a4, a5, &v20);
    v18 = result;
    if ( !result )
    {
      if ( v20 == -1 )
      {
        result = 5;
      }
      else
      {
        result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 92) + v20, &v12);
        v18 = result;
        if ( !result )
        {
          v9 = v14;
          if ( HIBYTE(v14) >= (int)*(unsigned __int8 *)(a1 + 100) )
          {
LABEL_20:
            if ( HIBYTE(v9) < (int)*(unsigned __int8 *)(a1 + 100) )
            {
              v12 = 0;
              v13 = 0;
              v14 = 0;
              v16 = 0;
              for ( i = 0; i < 16; ++i )
                v7[i + 68] = 0;
              for ( i = 0; i < 4; ++i )
                v7[i + 64] = 0;
              v15 = 0;
              result = sub_8026A900(
                         *(_DWORD *)(a1 + 4),
                         *(_DWORD *)(a1 + 8),
                         *(_DWORD *)(a1 + 92) + v20,
                         (unsigned __int8 *)&v12,
                         0);
            }
            else
            {
              result = 3;
            }
          }
          else
          {
            while ( 1 )
            {
              result = sub_8026A05C(a1, (int)v17, 0, HIBYTE(v9));
              v18 = result;
              if ( result )
                break;
              result = sub_80267F00(a1, (int)v17, v9, &v11, HIBYTE(v9), (unsigned __int16 *)&v10, 1);
              v18 = result;
              if ( result )
                break;
              result = sub_8026A05C(a1, (int)v17, 1, HIBYTE(v9));
              v18 = result;
              if ( result )
                break;
              if ( v10 != 1 )
              {
                v9 = v10;
                if ( HIBYTE(v10) < (int)*(unsigned __int8 *)(a1 + 100) )
                  continue;
              }
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
  return result;
}
// 80267C2C: variable 'v5' is possibly undefined
