#include "../../types-win32.h"
//----- (1003EE20) --------------------------------------------------------
int __cdecl sub_1003EE20(int a1)
{
  int v1; // eax
  int v2; // eax

  v1 = dword_10AA2A34;
  if ( dword_10AA2A34 < 0 || dword_10AA2A34 >= 12 )
    v1 = -1;
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 14392) + 32))(a1 + 14392, v1);
  if ( v2 >= 0 )
    dword_10AA2A34 = v2;
  return 1;
}
// 10AA2A34: using guessed type int dword_10AA2A34;
