#include "../../types-win32.h"
//----- (1003D9F0) --------------------------------------------------------
int __cdecl sub_1003D9F0(int *a1)
{
  int v1; // eax
  int v3; // [esp-14h] [ebp-1Ch]
  int v4; // [esp+0h] [ebp-8h] BYREF

  if ( !a1 )
    return 0;
  v1 = *a1;
  if ( !*a1 || dword_10AA288C )
    return 0;
  v3 = a1[2];
  v4 = 1610612739;
  return sub_1000C4D0(v1, v3, 0, 1, (int)&v4, 8);
}
// 10AA288C: using guessed type int dword_10AA288C;
