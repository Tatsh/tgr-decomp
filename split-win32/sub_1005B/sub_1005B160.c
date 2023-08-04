#include "../../types-win32.h"
//----- (1005B160) --------------------------------------------------------
void __fastcall sub_1005B160(int a1, int a2)
{
  char v2; // dl
  int v3; // esi
  int v4; // ebx
  __int16 i; // di
  __int16 v6; // ax
  int v7; // eax
  __int16 v8; // ax

  v2 = *(_BYTE *)(a1 + 9);
  v3 = 0;
  v4 = 0;
  for ( i = *(_WORD *)(a1 + 1036); v2; v2 = *(_BYTE *)((__int16)++v4 + a1 + 9) )
  {
    v6 = v2 - 32;
    if ( (v6 < 0 || v6 > 127) && v2 != 32 )
      break;
    if ( v2 < 33 || v2 == 127 || (v7 = 6 * v6, word_100AC6E4[v7] == -1) || word_100AC6E6[v7] == -1 )
    {
      if ( v2 == 32 )
        v3 += 6;
    }
    else
    {
      LOWORD(a2) = word_100ACB5C[v7];
      v8 = word_100ACB5E[v7];
      LOWORD(a2) = a2 - 4;
      v3 += a2;
      if ( i < v8 )
        i = v8;
    }
  }
  *(_WORD *)(a1 + 1036) = i;
  *(_WORD *)(a1 + 1034) = v3;
}
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E6: using guessed type __int16 word_100AC6E6[];
// 100ACB5C: using guessed type __int16 word_100ACB5C[];
// 100ACB5E: using guessed type __int16 word_100ACB5E[];
