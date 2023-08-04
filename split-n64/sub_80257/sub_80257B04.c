#include "../../types-n64.h"
//----- (80257B04) --------------------------------------------------------
int *__fastcall sub_80257B04(__int16 a1, int a2, int a3, int a4)
{
  __int64 *v4; // $v1
  int *result; // $v0

  v4 = &qword_802A4920[3 * a1];
  result = &dword_80378F50[3 * a1];
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  *((_DWORD *)v4 + 4) = 0;
  *(_DWORD *)v4 = a2;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 5) = 2097184;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 2) = 1;
  return result;
}
// 802A4920: using guessed type __int64 qword_802A4920[];
// 80378F50: using guessed type int dword_80378F50[18];
