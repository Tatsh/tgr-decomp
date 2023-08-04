#include "../../types-win32.h"
//----- (10037FA0) --------------------------------------------------------
int __cdecl sub_10037FA0(_DWORD *a1)
{
  int v1; // edx
  int result; // eax
  unsigned __int16 *v3; // ecx
  int v4; // esi

  v1 = 0;
  result = *(unsigned __int16 *)(a1[9] + 0x2000);
  if ( (unsigned __int16)result > 1u )
  {
    v3 = (unsigned __int16 *)(a1[8] + 2);
    v4 = result - 1;
    do
    {
      result = *v3;
      if ( result > v1 )
        v1 = *v3;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  a1[2] = v1 + 1;
  return result;
}
