#include "../../types-win32.h"
//----- (1003C260) --------------------------------------------------------
int sub_1003C260()
{
  int result; // eax
  int v1; // esi
  DWORD pcbBuffer; // [esp+8h] [ebp-734h] BYREF
  int v3[4]; // [esp+Ch] [ebp-730h] BYREF
  CHAR Buffer[800]; // [esp+1Ch] [ebp-720h] BYREF
  char v5[1024]; // [esp+33Ch] [ebp-400h] BYREF

  if ( !unk )
    return 0;
  if ( dword_10AA29D8 && *(_WORD *)(dword_10AA29D4 + 123236) )
  {
    if ( !dword_10A9D000 )
    {
      v1 = sub_1003D030(v3);
      if ( v1 < 0 )
        goto LABEL_11;
      memset(Buffer, 0, sizeof(Buffer));
      pcbBuffer = 200;
      GetUserNameA(Buffer, &pcbBuffer);
      v1 = sub_1003C740(unk, (int)v3, (int)Buffer, dword_10A9D008);
      if ( v1 == -2005465056 )
      {
        result = sub_10042AF0();
        if ( !result )
          return result;
        v1 = sub_1003C740(unk, (int)v3, (int)Buffer, dword_10A9D008);
      }
      if ( v1 < 0 )
      {
LABEL_11:
        sub_1003BF60();
        sub_1003C020();
        sprintf(v5, "Could not join session because of error 0x%08X", v1);
        return 0;
      }
    }
    g_NetworkPlay = 1;
    sub_10005B10();
    sub_1003CE80();
  }
  return 1;
}
// 1022AF18: using guessed type int g_NetworkPlay;
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
