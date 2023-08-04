#include "../../types-n64.h"
//----- (80238DD4) --------------------------------------------------------
int sub_80238DD4()
{
  int result; // $v0

  sub_8022F504();
  result = 0;
  if ( MEMORY[0xFB0] )
  {
    sub_8022F5D0(30);
    result = formatter(MEMORY[0xFB0], -709645779, 1750267669);
  }
  else if ( MEMORY[0xFB8] )
  {
    sub_8022F5D0(20);
    result = formatter(MEMORY[0xFB8], -709645779, 1750267667);
  }
  return result;
}
// 80238EB4: conditional instruction was optimized away because of '%var_C.4==1E'
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
