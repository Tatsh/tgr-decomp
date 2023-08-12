#include "types-win32.h"
//----- (1006F4A0) --------------------------------------------------------
void __usercall sub_1006F4A0(double a1 @<st0>, _DWORD *a2) {
  int v2;             // esi
  int i;              // ebx
  unsigned __int8 v5; // c0
  unsigned __int8 v6; // c3

  v2 = (int)a2;
  for (i = 0; i < 4; ++i) {
    switch (i) {
    case 0:
      v2 = a2[1];
      break;
    case 1:
      v2 = a2[2];
      break;
    case 2:
      v2 = a2[3];
      break;
    case 3:
      v2 = a2[4];
      break;
    default:
      break;
    }
    a1 = -sub_1006F0C0(a1, (int)a2, v2);
    *(float *)(v2 + 472) = a1;
    if (!(v5 | v6))
      a1 = 0.0;
    if (a1 >= -0.40000001)
      *(float *)(v2 + 128) = a1;
    else
      *(_DWORD *)(v2 + 128) = -1093874483;
  }
}
// 1006F4D3: inconsistent fpu stack
// 1006F4F1: variable 'v5' is possibly undefined
// 1006F4F1: variable 'v6' is possibly undefined
