#include "../../types-win32.h"
//----- (100586A0) --------------------------------------------------------
int *__cdecl sub_100586A0()
{
  int *result; // eax

  result = dword_10AA253C;
  dword_10AA288C = 0;
  do
  {
    *(result - 1) = -1;
    *result = 0;
    result[1] = 0;
    result += 3;
  }
  while ( (int)result < (int)&unk_10AA259C );
  return result;
}
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA288C: using guessed type int dword_10AA288C;
