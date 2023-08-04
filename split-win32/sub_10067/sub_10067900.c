#include "../../types-win32.h"
//----- (10067900) --------------------------------------------------------
void **__cdecl sub_10067900(void **a1, char *a2)
{
  void **result; // eax
  char *v3; // edi
  void **v5; // edx

  result = a1;
  v3 = (char *)*a1;
  if ( *a1 )
  {
    v5 = a1;
    do
    {
      result += 2;
      qmemcpy(v3, a2, (unsigned int)v5[1]);
      v3 = (char *)*result;
      a2 = &a2[(_DWORD)v5[1]];
      v5 = result;
    }
    while ( *result );
  }
  return result;
}
