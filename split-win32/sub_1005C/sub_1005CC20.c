#include "../../types-win32.h"
//----- (1005CC20) --------------------------------------------------------
int __stdcall sub_1005CC20(int a1)
{
  FILE *v1; // ebp
  int i; // ebx
  char Buffer[100]; // [esp+10h] [ebp-64h] BYREF

  v1 = fopen(aSeasondescDat, aWb);
  if ( !v1 )
    sub_1003E260(7);
  for ( i = 0; i < 26000; i += 260 )
  {
    strcpy(Buffer, (const char *)(*((_DWORD *)dword_10AA2904 + 48) + i + 4));
    if ( (int)fwriteLock(Buffer, 1u, 0x64u, v1) < 100 )
      sub_1003E260(7);
  }
  fclose(v1);
  return 1;
}
