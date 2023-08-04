#include "../../types-n64.h"
//----- (80265CD0) --------------------------------------------------------
int __fastcall sub_80265CD0(void *a1, int a2, int a3)
{
  int result; // $v0
  int v4; // [sp+1Ch] [-4h]

  sub_80269460();
  v4 = sub_80269580((int)a1, a3);
  sub_802694A4();
  if ( v4 )
    return v4;
  *(_DWORD *)(a2 + 4) = a1;
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 101) = -1;
  result = sub_80269D04(a2);
  if ( !result )
  {
    result = sub_80262A80(a2);
    *(_DWORD *)a2 |= 1u;
  }
  return result;
}
