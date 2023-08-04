#include "../../types-win32.h"
//----- (1002A1A0) --------------------------------------------------------
unsigned int __cdecl sub_1002A1A0(_DWORD *a1)
{
  unsigned int result; // eax

  result = (unsigned int)a1;
  if ( (*a1 & 0xFF00) == 768 )
  {
    result = a1[1];
    switch ( result )
    {
      case 0x504F50u:
        dword_10575414 = 0;
        break;
      case 0xC184240u:
        dword_10575414 = 0;
        break;
      case 0x504240u:
        dword_10575414 = 0;
        break;
      default:
        if ( result && (result & 0x1800) != 0 )
        {
          result = HIWORD(result) & 1;
          dword_10575414 = result;
        }
        else
        {
          dword_10575414 = 0;
        }
        break;
    }
  }
  return result;
}
// 10575414: using guessed type int dword_10575414;
