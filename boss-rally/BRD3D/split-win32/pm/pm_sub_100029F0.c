#include "../../types-win32.h"
//----- (100029F0) --------------------------------------------------------
int __cdecl pm_sub_100029F0(int a1)
{
  int result; // eax

  if ( g_Playmusic == 1 )
    result = sub_10002A80(a1);
  else
    result = pm_sub_10002A20(a1);
  return result;
}
// 100940A4: using guessed type int g_Playmusic;
