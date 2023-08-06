#include "../../types-n64.h"
//----- (80238714) --------------------------------------------------------
int __fastcall sub_80238714(const char *a1, int a2, int a3, int a4, int a5)
{
  char v6[44]; // [sp+2Ch] [-2Ch] BYREF

  sub_80260DD4((int)v6, "%s%d'%02d\"%02d", a2);
  formatter(v6, a4, a5 + 15);
  return formatter(a1, a4, a5);
}
