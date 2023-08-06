#include "../../types-win32.h"
//----- (10074F70) --------------------------------------------------------
BOOL __cdecl sub_10074F70(int a1, int a2)
{
  int v2; // eax

  WaitForSingleObject(dword_118AA0A0, 0xFFFFFFFF);
  v2 = dword_118A9878;
  *(&dword_118A9880 + 2 * dword_118A9878) = a1;
  dword_118A9884[2 * v2] = a2;
  dword_118A9878 = v2 + 1;
  if ( v2 + 1 >= 256 )
    dword_118A9878 = 0;
  return ReleaseMutex(dword_118AA0A0);
}
// 118A9878: using guessed type int dword_118A9878;
