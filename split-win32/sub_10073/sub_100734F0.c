#include "../../types-win32.h"
//----- (100734F0) --------------------------------------------------------
int sub_100734F0()
{
  int v0; // esi
  int *v1; // edx
  int *v2; // edi

  if ( g_Playsfx && g_DSound && dword_118290FC )
  {
    sub_10072BF0((int)&dword_11828F48);
    sub_10072C20((int)&dword_11828F48);
    v0 = dword_11828F00;
    if ( dword_11828F00 > 0 )
    {
      v1 = dword_100B5DF0;
      do
      {
        v2 = v1;
        v1 += 18;
        --v0;
        memset(v2, 0, 0x3Cu);
      }
      while ( v0 );
    }
    memset(dword_11828F08, 0, sizeof(dword_11828F08));
  }
  return 1;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 11828F00: using guessed type int dword_11828F00;
// 118290FC: using guessed type int dword_118290FC;
