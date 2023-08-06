#include "../../types-win32.h"
//----- (10061660) --------------------------------------------------------
void __cdecl sub_10061660(int a1)
{
  int i; // esi
  __int16 v2; // ax
  char v3; // al

  for ( i = a1; i; i = *(_DWORD *)(i + 4) )
  {
    v2 = *(_WORD *)(i + 22);
    if ( (v2 & 0x8000) == 0 && (v2 & 1) == 0 )
    {
      v3 = *(_BYTE *)(i + 17);
      *(_WORD *)(i + 22) |= 0x8000u;
      if ( v3 == 2 && (g_chosenTrack == 3 || g_chosenTrack == 9) )
        *(_BYTE *)(i + 17) = 0;
      sub_10061660(*(_DWORD *)i);
    }
  }
}
// 100B380C: using guessed type int g_chosenTrack;
