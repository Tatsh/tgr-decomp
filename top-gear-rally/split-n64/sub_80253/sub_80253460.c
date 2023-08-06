#include "../../types-n64.h"
//----- (80253460) --------------------------------------------------------
int __fastcall sub_80253460(unsigned __int8 a1)
{
  int *v1; // $t7
  char *v2; // $t1
  int v3; // $at
  int result; // $v0
  char v5[68]; // [sp+4h] [-44h] BYREF

  v1 = dword_8028DD50;
  v2 = v5;
  do
  {
    v3 = *v1;
    v1 += 3;
    v2 += 12;
    *((_DWORD *)v2 - 3) = v3;
    *((_DWORD *)v2 - 2) = *(v1 - 2);
    *((_DWORD *)v2 - 1) = *(v1 - 1);
  }
  while ( v1 != (int *)"./:=?@" );
  *(_DWORD *)v2 = *v1;
  *((_WORD *)v2 + 2) = *((_WORD *)v1 + 2);
  if ( a1 < 0x42u )
    result = (unsigned __int8)v5[a1];
  else
    result = 32;
  return result;
}
// 8028DD50: using guessed type int dword_8028DD50[15];
