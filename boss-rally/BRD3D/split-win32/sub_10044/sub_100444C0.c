#include "../../types-win32.h"
//----- (100444C0) --------------------------------------------------------
int __cdecl sub_100444C0(int a1)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
  if ( dword_10AA2904 )
    (**(void (__thiscall ***)(void *, int))dword_10AA2904)(dword_10AA2904, 1);
  dword_10AA294C = 0;
  dword_10AA29B8 = 0;
  dword_10AA2904 = (void *)dword_10AA2948;
  if ( dword_10AA29D8 )
    *(_DWORD *)(dword_10AA29D8 + 28) &= 0xFFFFFFEF;
  if ( (!dword_10AA287C || dword_10AA287C == 1) && !dword_10A9D000 )
  {
    sub_1003BF60();
    dword_10AA2898 = 1;
    sub_1003C020();
  }
  return 0;
}
// 1003BF60: using guessed type int sub_1003BF60(void);
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA2948: using guessed type int dword_10AA2948;
// 10AA294C: using guessed type int dword_10AA294C;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29D8: using guessed type int dword_10AA29D8;
