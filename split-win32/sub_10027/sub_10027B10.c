#include "../../types-win32.h"
//----- (10027B10) --------------------------------------------------------
unsigned int __cdecl sub_10027B10(unsigned __int16 a1)
{
  unsigned __int16 v1; // dx

  LOBYTE(v1) = 0;
  HIBYTE(v1) = a1;
  return ((((unsigned __int16)(HIBYTE(a1) | v1) >> 3) & 0x700 | (HIBYTE(a1) | v1) & 0xF800u) >> 8) | (32 * (((unsigned __int16)(HIBYTE(a1) | v1) >> 3) & 0x38 | (HIBYTE(a1) | v1) & 0x7C0 | ((HIBYTE(a1) & 0xE | (8 * (HIBYTE(a1) & 0x3E | ((unsigned __int8)-((a1 & 0x100) != 0) << 6)))) << 10)));
}
