#include "../../types-win32.h"
//----- (10058700) --------------------------------------------------------
int sub_10058700()
{
  int v0; // ecx
  int *v1; // eax

  if ( !dword_10A9D008 )
    return 0;
  v0 = 0;
  v1 = dword_10AA2538;
  while ( *v1 != *(_DWORD *)(dword_10A9D008 + 8) )
  {
    v1 += 3;
    ++v0;
    if ( (int)v1 >= (int)&dword_10AA2598 )
      return 0;
  }
  dword_10AA253C[3 * v0] = dword_10AA253C[3 * v0] == 0;
  return dword_10AA253C[3 * v0];
}
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
