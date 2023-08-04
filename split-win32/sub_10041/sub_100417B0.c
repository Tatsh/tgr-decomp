#include "../../types-win32.h"
//----- (100417B0) --------------------------------------------------------
int __cdecl sub_100417B0(int a1)
{
  int v1; // eax
  int result; // eax
  int v3; // edi
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  v1 = dword_100B3818[6 * dword_10220B24] - dword_10AA28C4;
  if ( v1 < 0 )
    v1 = 0;
  _itoa(v1, Buffer, 10);
  result = 0;
  if ( strlen(Buffer) )
  {
    strcpy((char *)(a1 + 11109), _strupr(Buffer));
    v3 = *(_DWORD *)(a1 + 11100);
    (*(void (__thiscall **)(int))(v3 + 8))(a1 + 11100);
    if ( a1 != -11109 )
      (*(void (__thiscall **)(int))(v3 + 44))(a1 + 11100);
    result = 1;
  }
  return result;
}
// 100B3818: using guessed type int dword_100B3818[];
// 10220B24: using guessed type int dword_10220B24;
