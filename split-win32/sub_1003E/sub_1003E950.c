#include "../../types-win32.h"
//----- (1003E950) --------------------------------------------------------
int __cdecl sub_1003E950(int a1)
{
  __int16 v1; // cx

  v1 = 104;
  if ( !dword_100AB3D8 )
    v1 = 105;
  *(_WORD *)(a1 + 10816) = v1;
  *(_WORD *)(a1 + 123404) = v1;
  return 1;
}
// 100AB3D8: using guessed type int dword_100AB3D8;
