#include "../../types-win32.h"
//----- (1003E0E0) --------------------------------------------------------
BOOL sub_1003E0E0()
{
  BOOL result; // eax

  if ( sub_1005FFD0() >= 0 || (result = sub_1003E080()) )
    result = 1;
  return result;
}
