#include "../types-win32.h"
//----- (10010D90) --------------------------------------------------------
int __cdecl CompareFunction(const void *a1, const void *a2)
{
  __int16 v2; // ax
  __int16 v3; // cx
  int result; // eax

  v2 = *((_WORD *)a1 + 1);
  v3 = *((_WORD *)a2 + 1);
  if ( v2 <= v3 )
    result = (v2 >= v3) - 1;
  else
    result = 1;
  return result;
}
