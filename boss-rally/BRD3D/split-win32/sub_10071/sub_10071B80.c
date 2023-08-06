#include "../../types-win32.h"
//----- (10071B80) --------------------------------------------------------
BOOL sub_10071B80()
{
  HANDLE *v0; // esi
  char *v1; // edi
  HANDLE v2; // ecx
  BOOL result; // eax
  HANDLE Handles[2]; // [esp+10h] [ebp-8h] BYREF

  v0 = &dword_11786828;
  v1 = (char *)&dword_11826BD0;
  do
  {
    v2 = *v0;
    Handles[0] = dword_11826B00;
    Handles[1] = v2;
    if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
      ExitThread(0);
    sub_10071BF0(v1);
    result = ReleaseMutex(*v0);
    v1 += 532;
    v0 += 603;
  }
  while ( (int)v1 < (int)&dword_11828D10 );
  return result;
}
// 10071BF0: using guessed type _DWORD __cdecl sub_10071BF0(_DWORD);
// 11828D10: using guessed type int dword_11828D10;
