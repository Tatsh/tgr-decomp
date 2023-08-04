#include "../../types-win32.h"
//----- (1003F860) --------------------------------------------------------
int __cdecl sub_1003F860(int a1)
{
  const char *v1; // edi
  int v2; // edx

  v1 = getCaptionString(*(&dword_100AC3A8 + dword_10AA2A08));
  v2 = *(_DWORD *)(a1 + 11100);
  strcpy((char *)(a1 + 11109), v1);
  (*(void (__thiscall **)(int))(v2 + 4))(a1 + 11100);
  sub_1003EE50(a1, 0);
  return 1;
}
// 1003F860: using guessed type int __cdecl sub_1003F860(int);
// 10AA2A08: using guessed type int dword_10AA2A08;
