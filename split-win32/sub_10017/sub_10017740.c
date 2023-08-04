#include "../../types-win32.h"
//----- (10017740) --------------------------------------------------------
void sub_10017740()
{
  double v0; // st7

  if ( *(float *)&dword_104B033C != 0.0 )
  {
    v0 = *(float *)&dword_104B033C - *(float *)&dword_106C2CFC;
    *(float *)&dword_104B033C = v0;
    if ( v0 <= 0.0 )
    {
      dword_104B033C = 0;
      dword_104B0338 = 0;
    }
  }
}
// 104B0338: using guessed type int dword_104B0338;
// 104B033C: using guessed type int dword_104B033C;
// 106C2CFC: using guessed type int dword_106C2CFC;
