#include "../../types-win32.h"
//----- (10042740) --------------------------------------------------------
int __cdecl sub_10042740(int a1, int *a2)
{
  int v2; // edx
  int v3; // ebx
  FILE *v4; // eax
  char Buffer[4]; // [esp+10h] [ebp-108h] BYREF
  char FileName[260]; // [esp+14h] [ebp-104h] BYREF

  v2 = *a2;
  dword_10AA29D0 = a1;
  v3 = 0;
  Value = v2;
  if ( a1 + 1080 * v2 != -53 )
  {
    strcpy(FileName, aTimeattack);
    _itoa(v2, Buffer, 10);
    strcat(FileName, Buffer);
    strcat(FileName, aGrf);
  }
  v4 = fopen(FileName, aR);
  if ( v4 )
    fclose(v4);
  else
    v3 = 1;
  if ( v3 )
    sub_10042410(dword_10AA29C4);
  else
    *(_DWORD *)(*(_DWORD *)(dword_10AA29C4 + 10984) + 112) = 1;
  return 1;
}
// 10AA29C4: using guessed type int dword_10AA29C4;
// 10AA29D0: using guessed type int dword_10AA29D0;
