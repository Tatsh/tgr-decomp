#include "../../types-win32.h"
//----- (1003CA70) --------------------------------------------------------
int *sub_1003CA70()
{
  int *result; // eax

  result = dword_10AA2540;
  do
  {
    if ( !*result )
    {
      *(result - 2) = -1;
      *(result - 1) = 0;
      *result = 0;
    }
    result += 3;
  }
  while ( (int)result < (int)flt_10AA25A0 );
  return result;
}
