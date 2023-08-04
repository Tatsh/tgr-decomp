#include "../../types-win32.h"
//----- (1002B970) --------------------------------------------------------
int __cdecl sub_1002B970(int *a1)
{
  int result; // eax

  result = *a1;
  if ( *a1 )
  {
    if ( result >= dword_1057553C )
      *a1 = result + dword_10575538 - dword_1057553C;
    else
      *a1 = 0;
  }
  return result;
}
// 10575538: using guessed type int dword_10575538;
// 1057553C: using guessed type int dword_1057553C;
