#include "types-win32.h"
//----- (10074030) --------------------------------------------------------
LPCSTR __cdecl GetStringWithIndex(unsigned int index) {
  LPCSTR result; // eax

  if (index && index < 0x12F)
    result = dword_11829370[index];
  else
    result = NULL;
  return result;
}
