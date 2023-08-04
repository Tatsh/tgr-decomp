#include "../../types-win32.h"
//----- (100435F0) --------------------------------------------------------
int sub_100435F0()
{
  int result; // eax

  if ( dword_10AA33D4 )
  {
    if ( ++dword_10AA2A28 > 1 )
      dword_10AA2A28 = 0;
  }
  else if ( dword_10AA33D0 )
  {
    if ( --dword_10AA2A28 < 0 )
      dword_10AA2A28 = 1;
  }
  result = 1;
  dword_10B4E7A0 = dword_100AC548[dword_10AA2A28];
  return result;
}
// 100AC548: using guessed type int dword_100AC548[];
// 10AA2A28: using guessed type int dword_10AA2A28;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E7A0: using guessed type int dword_10B4E7A0;
