#include "../../types-win32.h"
//----- (10002930) --------------------------------------------------------
int pm_sub_10002930()
{
  int v0; // eax

  if ( g_Playmusic && dword_10220CD0 )
  {
    v0 = pm_sub_10002910() - 1;
    dword_10220CD4 = v0;
    if ( v0 < dword_10220C44 )
    {
      v0 = dword_10220C44;
      dword_10220CD4 = dword_10220C44;
    }
    pm_sub_100027C0(v0);
  }
  return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C44: using guessed type int dword_10220C44;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
