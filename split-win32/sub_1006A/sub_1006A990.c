#include "../../types-win32.h"
//----- (1006A990) --------------------------------------------------------
int __cdecl sub_1006A990(int a1)
{
  int result; // eax

  dword_10B502E4 = a1;
  result = a1 - 1;
  if ( a1 == 1 )
  {
    dword_10690A20 = sub_1001BAE0;
    dword_10B501C8 = (int (*)(void))sub_10024460;
    off_100B8C94 = (int (*)(void))sub_1002A640;
  }
  return result;
}
// 100B8C94: using guessed type int (*off_100B8C94)(void);
// 10690A20: using guessed type int (*dword_10690A20)(void);
// 10B501C8: using guessed type int (*dword_10B501C8)(void);
// 10B502E4: using guessed type int dword_10B502E4;
