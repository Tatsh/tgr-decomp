#include "../../types-win32.h"
//----- (1003C020) --------------------------------------------------------
HANDLE sub_1003C020()
{
  HANDLE result; // eax
  int v1; // [esp+4h] [ebp-408h] BYREF
  SIZE_T v2; // [esp+8h] [ebp-404h] BYREF
  char Buffer[1024]; // [esp+Ch] [ebp-400h] BYREF

  v1 = 0;
  v2 = 0;
  KillTimer(g_HWND, uIDEvent);
  sub_1003C550();
  result = (HANDLE)sub_1003D480(&v1, &v2);
  if ( !v1 )
    goto LABEL_13;
  result = (HANDLE)sub_1003C520((LPVOID *)&unk);
  ++dword_10A9D004;
  if ( (int)result < 0 )
    goto LABEL_13;
  if ( !unk )
    goto LABEL_13;
  result = (HANDLE)(*(int (__stdcall **)(SIZE_T, int, _DWORD))(*(_DWORD *)unk + 152))(unk, v1, 0);
  if ( (int)result < 0 )
    goto LABEL_13;
  if ( dword_10AA287C != 2 && dword_10AA287C != 3 )
  {
    if ( dword_10AA29D4 )
    {
      result = (HANDLE)sub_1003CC70(unk);
      if ( (int)result < 0 )
        goto LABEL_13;
    }
    uIDEvent = SetTimer(g_HWND, 1u, 0x3E8u, 0);
    dword_10A9CFFC = 1;
  }
  result = (HANDLE)dword_10277B44;
  if ( !dword_10277B44 )
  {
    result = CreateEventA(0, 0, 0, 0);
    dword_10277B44 = (int)result;
    if ( !result )
    {
      result = (HANDLE)-2147024882;
LABEL_13:
      if ( result != (HANDLE)-2005466856 )
        result = (HANDLE)sprintf(Buffer, "Could not select service provider because of error 0x%08X", result);
      return result;
    }
  }
  return result;
}
// 10277B44: using guessed type int dword_10277B44;
// 10A9CFFC: using guessed type int dword_10A9CFFC;
// 10A9D004: using guessed type int dword_10A9D004;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA29D4: using guessed type int dword_10AA29D4;
