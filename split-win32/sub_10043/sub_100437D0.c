#include "../../types-win32.h"
//----- (100437D0) --------------------------------------------------------
int __cdecl sub_100437D0(int a1)
{
  if ( dword_10AA2894 && dword_10A9D000 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 10984) + 104) = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 10984) + 24))(*(_DWORD *)(a1 + 10984), 0);
    cleanUpAndExitWithCode(0);
  }
  return 1;
}
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA2894: using guessed type int dword_10AA2894;
