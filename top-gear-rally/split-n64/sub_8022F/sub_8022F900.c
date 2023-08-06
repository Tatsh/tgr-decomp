#include "../../types-n64.h"
//----- (8022F900) --------------------------------------------------------
BOOL sub_8022F900()
{
  BOOL result; // $v0

  result = MEMORY[0x80025C50] == 0;
  if ( MEMORY[0x80025C50] )
    result = 0;
  return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8028AA80: using guessed type int dword_8028AA80;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AA8C: using guessed type int dword_8028AA8C;
