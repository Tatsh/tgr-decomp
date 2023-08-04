#include "../../types-win32.h"
//----- (10060060) --------------------------------------------------------
LRESULT __stdcall sub_10060060(int a1, HWND hWnd, int a3, WPARAM wParam, LPARAM lParam)
{
  LRESULT v5; // edi
  _DWORD *v7; // ecx
  BOOL v8; // eax

  v5 = 1;
  if ( (unsigned int)a3 > 0x102 )
  {
    if ( (unsigned int)a3 <= 0x211 )
    {
      if ( a3 != 529 )
      {
        if ( a3 == 273 )
        {
          if ( (_WORD)wParam == 0x9C41 )
          {
            dword_10AA33E4 = 27;
            return 1;
          }
        }
        else if ( a3 == 274 )
        {
          v5 = DefWindowProcA(hWnd, 0x112u, wParam, lParam);
          if ( IsWindow(hWnd) )
          {
            if ( dword_10AA2E80 )
            {
              sub_10060750(dword_10AA2E80, (int)hWnd);
              return v5;
            }
          }
        }
        return v5;
      }
      goto LABEL_24;
    }
    if ( (unsigned int)a3 > 0x231 )
    {
      if ( a3 != 562 )
      {
        if ( a3 != 1024 )
          return v5;
        goto LABEL_28;
      }
    }
    else
    {
      if ( a3 == 561 )
      {
LABEL_24:
        v7 = dword_10AA2E80;
        dword_10AA33E0 = 1;
        if ( dword_10AA2E80 )
        {
LABEL_25:
          sub_10060750(v7, (int)hWnd);
          return 1;
        }
        return v5;
      }
      if ( a3 != 530 )
        return 1;
    }
    if ( GetActiveWindow() != hWnd || (v8 = IsIconic(hWnd), dword_10AA33E0 = 0, v8) )
      dword_10AA33E0 = 1;
    PostMessageA(hWnd, 0x400u, 0, 0);
    return v5;
  }
  if ( a3 == 258 )
  {
    if ( !dword_10AA2844
      && byte_10AA3350 >= 0
      && (byte_10AA3358 & 0x80) == 0
      && (byte_10AA3353 & 0x80) == 0
      && (byte_10AA3355 & 0x80) == 0 )
    {
      dword_10AA33E4 = wParam;
      return 1;
    }
    return v5;
  }
  if ( a3 == 6 )
  {
    dword_10AA33E0 = wParam == 0;
LABEL_28:
    v7 = dword_10AA2E80;
    if ( dword_10AA2E80 )
      goto LABEL_25;
  }
  return v5;
}
// 10AA2844: using guessed type int dword_10AA2844;
// 10AA3350: using guessed type char byte_10AA3350;
// 10AA3353: using guessed type char byte_10AA3353;
// 10AA3355: using guessed type char byte_10AA3355;
// 10AA3358: using guessed type char byte_10AA3358;
// 10AA33E0: using guessed type int dword_10AA33E0;
// 10AA33E4: using guessed type int dword_10AA33E4;
