#include "../../types-n64.h"
//----- (8026E500) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8026E500(int a1)
{
  int v1; // $s0
  int *v2; // $s1
  int *v3; // $s2

  v1 = sub_80268540();
  if ( a1 )
  {
    if ( *(_WORD *)(a1 + 16) != 1 )
      sub_8026AC80(*(_DWORD ***)(a1 + 8), (_DWORD *)a1);
  }
  else
  {
    a1 = 0;
  }
  if ( &gMtqueue == (int *)a1 )
  {
    MEMORY[0x802A629C] = &gMtqueue;
  }
  else
  {
    v2 = &gMtqueue;
    v3 = &gMtqueue;
    if ( &gMtqueue )
    {
      while ( v3 != (int *)a1 )
      {
        v2 = v3;
        v3 = (int *)v3[3];
        if ( !v3 )
          goto LABEL_11;
      }
      v2[3] = *(_DWORD *)(a1 + 12);
    }
  }
LABEL_11:
  if ( !a1 )
    sub_8026B444();
  sub_80268560(v1);
}
// 8026E57C: write access to const memory at 802A629C has been detected
// 802A6290: using guessed type int dword_802A6290;
// 802A629C: using guessed type int *off_802A629C;
// 802A62A0: using guessed type int dword_802A62A0;
