#include "../../types-win32.h"
//----- (1003EB60) --------------------------------------------------------
int __cdecl sub_1003EB60(int a1)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, dword_10AA28AC);
  if ( v1 >= 0 )
    dword_10AA28AC = v1;
  return 1;
}
// 1003EB60: using guessed type int __cdecl sub_1003EB60(int);
// 10AA28AC: using guessed type int dword_10AA28AC;
