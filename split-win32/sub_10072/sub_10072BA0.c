#include "../../types-win32.h"
//----- (10072BA0) --------------------------------------------------------
BOOL __cdecl sub_10072BA0(int a1, int a2)
{
  int v2; // edx
  BOOL result; // eax

  if ( g_Playsfx && g_DSound && dword_118290FC && (v2 = a2 + 8 * a1, dword_100B5DF0[2 * v2 + 2 * a1]) )
    result = sub_10072550(dword_100B5DF0[2 * v2 + 2 * a1]) == 0;
  else
    result = 1;
  return result;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
