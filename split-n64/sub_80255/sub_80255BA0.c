#include "../../types-n64.h"
//----- (80255BA0) --------------------------------------------------------
void __fastcall sub_80255BA0(int a1)
{
  int v1; // $s0
  __int16 i; // $v0

  v1 = a1;
  if ( a1 )
  {
    for ( i = *(_WORD *)(a1 + 22); ; i = *(_WORD *)(v1 + 22) )
    {
      if ( (i & 0x8000) == 0 )
      {
        if ( (i & 1) != 0 )
        {
          v1 = *(_DWORD *)(v1 + 4);
          goto LABEL_8;
        }
        *(_WORD *)(v1 + 22) = i | 0x8000;
        sub_80255BA0(*(_DWORD *)v1);
      }
      v1 = *(_DWORD *)(v1 + 4);
LABEL_8:
      if ( !v1 )
        return;
    }
  }
}
// 80255C10: conditional instruction was optimized away because of '$v0.4==2'
// 8028B940: using guessed type int dword_8028B940;
