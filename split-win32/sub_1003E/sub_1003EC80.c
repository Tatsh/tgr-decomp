#include "../../types-win32.h"
//----- (1003EC80) --------------------------------------------------------
int __cdecl sub_1003EC80(int a1)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, dword_10AA2840);
  if ( v1 >= 0 )
    dword_10AA2840 = v1;
  return 1;
}
// 10AA2840: using guessed type int dword_10AA2840;
