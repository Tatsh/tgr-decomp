#include "../../types-win32.h"
//----- (1007F3C0) --------------------------------------------------------
int __cdecl sub_1007F3C0(int a1, int a2)
{
  int v2; // esi

  _lock(12);
  v2 = _getdcwd_lk(0, a1, a2);
  _unlock(12);
  return v2;
}
