#include "../../types-win32.h"
//----- (100415A0) --------------------------------------------------------
int __cdecl sub_100415A0(int a1)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // edi
  char Buffer[32]; // [esp+10h] [ebp-20h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  if ( dword_10AA289C )
    v1 = dword_100B3818[6 * (char)dword_10AA28B8];
  else
    v1 = dword_100B3818[0];
  v2 = v1 - dword_10AA28C4;
  if ( v2 < 0 )
    v2 = 0;
  _itoa(v2, Buffer, 10);
  result = 0;
  if ( strlen(Buffer) )
  {
    strcpy((char *)(a1 + 11109), _strupr(Buffer));
    v4 = *(_DWORD *)(a1 + 11100);
    (*(void (__thiscall **)(int))(v4 + 8))(a1 + 11100);
    if ( a1 != -11109 )
      (*(void (__thiscall **)(int))(v4 + 44))(a1 + 11100);
    result = 1;
  }
  return result;
}
// 100B3818: using guessed type int dword_100B3818[];
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28B8: using guessed type int dword_10AA28B8;
