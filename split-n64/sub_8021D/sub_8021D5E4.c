#include "../../types-n64.h"
//----- (8021D5E4) --------------------------------------------------------
unsigned int __fastcall sub_8021D5E4(int a1, int a2, char *a3)
{
  unsigned int *v3; // $a0
  unsigned int result; // $v0
  unsigned __int8 *v5; // [sp+1Ch] [-4h]

  if ( a3 )
  {
    sub_80260B20((int)&dword_803C8000[14306 * a1], a3, *(_DWORD *)(96 * a2 - 2144817624));
    v3 = (unsigned int *)&dword_803C8000[14306 * a1];
  }
  else
  {
    v5 = (unsigned __int8 *)&dword_803C8000[14306 * a1];
    LoadCarWithIndex(v5, a2);
    v3 = (unsigned int *)v5;
  }
  result = sub_8021D32C(v3);
  *(_DWORD *)(4 * a1 - 2144226760) = a2;
  return result;
}
// 803C8000: using guessed type int dword_803C8000[512];
