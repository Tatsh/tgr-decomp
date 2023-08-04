#include "../../types-win32.h"
//----- (1002A350) --------------------------------------------------------
int __cdecl sub_1002A350(int a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // eax
  int result; // eax
  int v5[171]; // [esp+8h] [ebp-2ACh] BYREF

  dword_118AA09C = 1;
  qmemcpy(v5, (char *)dword_1057543C + 696 * a1 + 4, sizeof(v5));
  v5[19] = (int)a2;
  v5[20] = a3;
  if ( v5[155] )
  {
    v5[16] /= 4;
    v5[2] /= 2;
    v5[3] /= 2;
    pow2ExponentToAdd((DWORD *)&v5[7], v5[2], v5[3]);
    v5[6] = v5[7];
    v5[155] = 0;
  }
  v3 = sub_10028860((#506 *)v5);
  result = TIDFromTexture(v5, (int)v3);
  dword_118AA09C = 0;
  return result;
}
// 118AA09C: using guessed type int dword_118AA09C;
