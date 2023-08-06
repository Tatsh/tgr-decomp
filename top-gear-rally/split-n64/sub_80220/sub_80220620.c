#include "../../types-n64.h"
//----- (80220620) --------------------------------------------------------
int __fastcall sub_80220620(int a1)
{
  int v2; // $v0
  int result; // $v0
  int v4; // $t0
  int v5; // $t9
  int *v6; // [sp+20h] [-8h]

  sub_8021EB30((float *)a1);
  sub_8021EB30((float *)(a1 + 7664));
  *(float *)(a1 + 7728) = 0.52359879;
  sub_8021EB30((float *)(a1 + 7732));
  *(float *)(a1 + 7796) = 0.52359879;
  sub_8021EB30((float *)(a1 + 7800));
  *(float *)(a1 + 7864) = 0.52359879;
  sub_8021EB30((float *)(a1 + 7868));
  *(float *)(a1 + 7932) = 0.52359879;
  sub_8021EB30((float *)(a1 + 8004));
  *(float *)(a1 + 8068) = 0.52359879;
  *(_DWORD *)(a1 + 8312) = 0;
  *(_DWORD *)(a1 + 7656) = a1 + 7664;
  sub_8021EB30((float *)(a1 + 64));
  sub_8021EB30((float *)(a1 + 128));
  sub_8021EB30((float *)(a1 + 192));
  sub_8021EB30((float *)(a1 + 256));
  sub_802201C8((_DWORD *)a1, COERCE_INT(0.0), COERCE_INT(0.0), COERCE_INT(0.0));
  v2 = *(_DWORD *)(a1 + 8284);
  *(_DWORD *)(a1 + 3932) = 0;
  *(_DWORD *)(a1 + 3936) = 0;
  *(_DWORD *)(a1 + 7660) = 0;
  v6 = &dword_8028B330[19 * v2];
  result = sub_80260B20(a1 + 3576, (char *)v6, 28);
  v4 = *(_DWORD *)(a1 + 3692);
  *(_DWORD *)(a1 + 3604) = v6[7];
  *(_DWORD *)(a1 + 3608) = v6[8];
  *(_DWORD *)(a1 + 3612) = v6[9];
  *(_DWORD *)(a1 + 3616) = v6[10];
  *(_DWORD *)(a1 + 3620) = v6[11];
  v5 = v6[12];
  *(_DWORD *)(a1 + 3632) = v4;
  *(_DWORD *)(a1 + 3624) = v5;
  *(_DWORD *)(a1 + 3628) = v6[13];
  *(_DWORD *)(a1 + 804) = v6[14];
  *(_DWORD *)(a1 + 808) = v6[15];
  *(_DWORD *)(a1 + 812) = v6[16];
  *(_DWORD *)(a1 + 816) = v6[17];
  *(_DWORD *)(a1 + 3636) = v6[18];
  return result;
}
// 8028B330: using guessed type int dword_8028B330[];
