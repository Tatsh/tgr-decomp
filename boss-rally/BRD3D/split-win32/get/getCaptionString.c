#include "../../types-win32.h"
//----- (10074030) --------------------------------------------------------
LPCSTR __cdecl getCaptionString(unsigned int a1)
{
  LPCSTR result; // eax

  if ( a1 && a1 < 0x12F )
    result = (LPCSTR)dword_11829370[a1];
  else
    result = 0;
  return result;
}
// 11829370: using guessed type int dword_11829370[];
