#include "../../types-win32.h"
//----- (100418F0) --------------------------------------------------------
int __cdecl sub_100418F0(int a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(a1 + 28);
  if ( dword_10AA28E8 )
  {
    *(_DWORD *)(a1 + 28) = v1 & 0xFFFFEFEF;
  }
  else
  {
    *(_WORD *)(a1 + 123404) = 2;
    *(_DWORD *)(a1 + 28) = v1 | 0x1010;
    *(_BYTE *)(a1 + 11108) = 0;
  }
  return 1;
}
// 10AA28E8: using guessed type int dword_10AA28E8;
