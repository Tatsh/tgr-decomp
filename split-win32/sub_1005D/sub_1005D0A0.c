#include "../../types-win32.h"
//----- (1005D0A0) --------------------------------------------------------
void *__stdcall sub_1005D0A0(LPCSTR lpFileName)
{
  void *result; // eax
  void *v2; // ebx
  int v3; // edi
  int i; // esi
  int v5[70]; // [esp+4h] [ebp-118h] BYREF

  result = (void *)_findfirst(lpFileName, (int)v5);
  v2 = result;
  if ( result != (void *)-1 )
  {
    v3 = 0;
    for ( i = 1; i < 100; ++i )
    {
      if ( _findnext(v2, (int)v5) )
        break;
      ++v3;
    }
    _findclose((intptr_t)v2);
    result = (void *)v3;
  }
  return result;
}
