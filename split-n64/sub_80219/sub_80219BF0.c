#include "../../types-n64.h"
//----- (80219BF0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_80219BF0(int a1, __int16 a2, int a3, __int16 a4, int a5)
{
  int v5; // $s0
  int *result; // $v0
  __int16 v7; // [sp+20h] [+8h]
  __int16 v9; // [sp+2Eh] [+16h]

  v5 = a3;
  v7 = HIWORD(a1);
  dword_8028AB60 = 1;
  if ( a5 )
  {
    if ( a3 < 0 )
      a3 = -a3;
    v9 = a4;
    sub_80219A78(a1, a2, a3, a4);
    a4 = v9;
  }
  HIWORD(unkThread3Stack[0]) = 2 * v5;
  if ( v5 >= 0 )
  {
    dword_8028A8A8 = 0;
  }
  else
  {
    v5 = -v5;
    dword_8028A8A8 = 1;
  }
  LOWORD(unkThread3Stack[0]) = 2 * a4;
  HIWORD(unkThread3Stack[1]) = 511;
  *(int *)((char *)&unkThread3Stack[1] + 2) = (unsigned __int16)(2 * (2 * v7 + v5));
  LOWORD(unkThread3Stack[2]) = 2 * (2 * a2 + a4);
  HIWORD(unkThread3Stack[3]) = 511;
  LOWORD(unkThread3Stack[3]) = 0;
  dword_8028A858 = 8;
  MEMORY[0] = 58720272;
  MEMORY[4] = unkThread3Stack;
  result = unkThread3Stack;
  dword_8028AB64 = -23622;
  dword_8028AB68 = -1259;
  return result;
}
// 80219CEC: write access to const memory at 8028A8A8 has been detected
// 80219D40: write access to const memory at 8028A8A8 has been detected
// 80219DD8: write access to const memory at 8028AB64 has been detected
// 80219DEC: write access to const memory at 8028AB68 has been detected
// 80219C24: write access to const memory at 8028AB60 has been detected
// 80219DA0: write access to const memory at 8028A858 has been detected
// 80219CDC: write access to const memory at 80318CD0 has been detected
// 80219D3C: write access to const memory at 80318CD0 has been detected
// 80219D70: write access to const memory at 80318CD2 has been detected
// 80219D88: write access to const memory at 80318CD4 has been detected
// 80219D90: write access to const memory at 80318CD6 has been detected
// 80219D94: write access to const memory at 80318CDA has been detected
// 80219D98: write access to const memory at 80318CDC has been detected
// 80219D9C: write access to const memory at 80318CDE has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028AB60: using guessed type int dword_8028AB60;
// 8028AB64: using guessed type int dword_8028AB64;
// 8028AB68: using guessed type int dword_8028AB68;
// 80318CD0: using guessed type int dword_80318CD0[128];
