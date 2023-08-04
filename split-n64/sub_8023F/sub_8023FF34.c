#include "../../types-n64.h"
//----- (8023FF34) --------------------------------------------------------
int __fastcall sub_8023FF34(int *a1, char *a2, int a3)
{
  int result; // $v0

  sub_80260B20(a1[9], a2, a3);
  result = a1[9] + a3;
  a1[12] = result;
  a1[11] = result;
  return result;
}
