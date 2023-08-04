#include "../../types-win32.h"
//----- (100471B0) --------------------------------------------------------
int __cdecl sub_100471B0(int a1)
{
  sub_10045C90();
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
  if ( dword_10AA2970 )
    (**(void (__thiscall ***)(int, int))dword_10AA2970)(dword_10AA2970, 1);
  dword_10AA2970 = 0;
  return 0;
}
// 100471B0: using guessed type int __cdecl sub_100471B0(int);
// 10AA2970: using guessed type int dword_10AA2970;
