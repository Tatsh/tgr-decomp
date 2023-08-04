#include "../../types-win32.h"
//----- (1005F530) --------------------------------------------------------
int sub_1005F530()
{
  int result; // eax
  int v1; // edi
  int *v2; // esi

  result = dword_10A9D070;
  if ( dword_10A9D070 )
  {
    v1 = 0;
    if ( (_WORD)dword_10AA28D4 )
    {
      v2 = dword_10A9E360;
      do
      {
        result = *v2;
        if ( *v2 )
        {
          result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(*v2);
          *v2 = 0;
        }
        ++v1;
        v2 += 29;
      }
      while ( v1 < (unsigned __int16)dword_10AA28D4 );
    }
  }
  return result;
}
// 10A9E360: using guessed type int dword_10A9E360[];
// 10AA28D4: using guessed type int dword_10AA28D4;
