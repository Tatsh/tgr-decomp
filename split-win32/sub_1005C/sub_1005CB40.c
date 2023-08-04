#include "../../types-win32.h"
//----- (1005CB40) --------------------------------------------------------
int __thiscall sub_1005CB40(int *this, int a2)
{
  int v3; // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v5 = -1;
  v3 = *this;
  (*(void (__thiscall **)(int *, int))(*this + 8))(this, a2);
  if ( !dword_10AA28D8 && !dword_10AA2858 )
    (*(void (__thiscall **)(int *, int *))(v3 + 28))(this, &v5);
  ++word_10AA2870;
  return v5;
}
// 10AA2858: using guessed type int dword_10AA2858;
// 10AA2870: using guessed type __int16 word_10AA2870;
// 10AA28D8: using guessed type int dword_10AA28D8;
