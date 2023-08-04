#include "../../types-win32.h"
//----- (10040B30) --------------------------------------------------------
int __cdecl sub_10040B30(int a1)
{
  int v1; // edi

  sprintf(byte_10A9D618, "%d", dword_10AA28A4 + 1);
  strcpy((char *)(a1 + 11109), getCaptionString(0x37u));
  strcat((char *)(a1 + 11109), asc_100AD304);
  strcat((char *)(a1 + 11109), byte_10A9D618);
  v1 = *(_DWORD *)(a1 + 11100);
  (*(void (__thiscall **)(int))(v1 + 4))(a1 + 11100);
  if ( a1 != -11109 )
    (*(void (__thiscall **)(int))(v1 + 16))(a1 + 11100);
  return 1;
}
// 10AA28A4: using guessed type int dword_10AA28A4;
