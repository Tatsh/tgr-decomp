#include "../../types-win32.h"
//----- (10072820) --------------------------------------------------------
int __cdecl sub_10072820(int a1, unsigned int a2)
{
  int v2; // ecx
  signed int v3; // esi
  int v4; // eax

  if ( !g_Playsfx || !g_DSound || !dword_118290FC )
    return 1;
  if ( !a1 )
    return 0;
  v2 = (unsigned __int16)a2;
  v3 = HIWORD(a2);
  if ( HIWORD(a2) > 0x20u )
    v3 = 32;
  if ( (unsigned __int16)a2 > 0x20u )
    v2 = 32;
  if ( v3 <= v2 )
  {
    *(_DWORD *)(a1 + 16) = 400;
    *(_DWORD *)(a1 + 20) = 400 * v2 / 32;
    if ( v2 )
    {
      v4 = 400 * (v2 - v3) / v2;
      goto LABEL_14;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 400;
    *(_DWORD *)(a1 + 20) = 400 * v3 / 32;
    if ( v3 )
    {
      v4 = 400 * (v2 - v3) / v3;
LABEL_14:
      *(_DWORD *)(a1 + 16) = v4 + 400;
      return !sub_100724D0(a1) && !sub_10072490(a1);
    }
  }
  return !sub_100724D0(a1) && !sub_10072490(a1);
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
