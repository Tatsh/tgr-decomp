#include "../../types-n64.h"
//----- (8022F968) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8022F968()
{
  int result; // $v0
  int *v1; // [sp+2Ch] [-14h]

  dword_8028A858 = 8;
  MEMORY[4] = 0xFFFF;
  MEMORY[0] = -1140843516;
  if ( sub_8022F900() )
    return sub_80218104();
  sub_80260E30((int)&flt_8031AB10, MEMORY[0x30], MEMORY[0x34], COERCE_INT(MEMORY[0x38] * 0.99000001));
  v1 = sub_80255CD0();
  sub_80260ED0(&flt_8031AB10, (int)v1);
  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -1124073472;
  return result;
}
// 8022F980: write access to const memory at 8028A858 has been detected
// 8022F9A8: write access to const memory at 8028A858 has been detected
// 8022F9C4: write access to const memory at 8028A858 has been detected
// 8022F9E4: write access to const memory at 8028A858 has been detected
// 8022FB7C: write access to const memory at 8028A858 has been detected
// 8022FBA8: write access to const memory at 8028A858 has been detected
// 8022FBD0: write access to const memory at 8028A858 has been detected
// 8022FBEC: write access to const memory at 8028A858 has been detected
// 8022FD98: write access to const memory at 8028A858 has been detected
// 8022FDB4: write access to const memory at 8028A858 has been detected
// 8022FDD0: write access to const memory at 8028A858 has been detected
// 8022FDEC: write access to const memory at 8028A858 has been detected
// 8022FE08: write access to const memory at 8028A858 has been detected
// 8022FE24: write access to const memory at 8028A858 has been detected
// 8022FE40: write access to const memory at 8028A858 has been detected
// 8022FE60: write access to const memory at 8028A858 has been detected
// 8022FE80: write access to const memory at 8028A858 has been detected
// 8022FE98: write access to const memory at 8028A858 has been detected
// 8022FEB4: write access to const memory at 8028A858 has been detected
// 8022FECC: write access to const memory at 8028A858 has been detected
// 8022FD58: write access to const memory at 8028A858 has been detected
// 8022FCB0: write access to const memory at 8028A858 has been detected
// 8022FCD4: write access to const memory at 8028A858 has been detected
// 8022FD00: write access to const memory at 8028A858 has been detected
// 8022FD1C: write access to const memory at 8028A858 has been detected
// 8022FC94: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A878: using guessed type int dword_8028A878;
// 8028A898: using guessed type int dword_8028A898;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8028AA78: using guessed type int dword_8028AA78;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028AB20: using guessed type char byte_8028AB20;
// 8028AB24: using guessed type char byte_8028AB24;
// 8028AB28: using guessed type char byte_8028AB28;
// 8028AB2C: using guessed type char byte_8028AB2C;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
