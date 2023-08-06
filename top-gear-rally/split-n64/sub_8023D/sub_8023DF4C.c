#include "../../types-n64.h"
//----- (8023DF4C) --------------------------------------------------------
int __fastcall sub_8023DF4C(int *a1, int (__fastcall *a2)(int))
{
  int v2; // $v0
  unsigned __int8 *v3; // $v0

  v2 = CHK_GetFileSize(*a1);
  v3 = (unsigned __int8 *)a2(v2);
  a1[2] = (int)v3;
  return LoadCarWithIndex2(v3, *a1, 0);
}
