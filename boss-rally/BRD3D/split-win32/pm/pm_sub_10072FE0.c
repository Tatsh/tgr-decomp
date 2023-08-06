#include "../../types-win32.h"
//----- (10072FE0) --------------------------------------------------------
BOOL __cdecl pm_sub_10072FE0(int a1)
{
  if ( !g_Playsfx || !g_DSound || !dword_118290FC )
    return 1;
  if ( dword_11828F08[a1] )
    return sub_10073020(dword_11828F08[a1]);
  return 0;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
