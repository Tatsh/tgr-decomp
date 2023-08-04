#include "../../types-win32.h"
//----- (100798F0) --------------------------------------------------------
int sub_100798F0()
{
  int result; // eax
  int v1; // eax
  HWND wnd; // [esp+0h] [ebp-3Ch] BYREF
  int v3; // [esp+4h] [ebp-38h]
  WNDCLASSA WndClass; // [esp+8h] [ebp-34h] BYREF
  int v5; // [esp+38h] [ebp-4h]

  hCursor = LoadCursorA(0, (LPCSTR)0x7F00);     // MAKEINTRESOURCE(...)
  WndClass.style = CS_DBLCLKS;
  WndClass.lpfnWndProc = windowProc;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 4;                      // for storing a pointer after this
  WndClass.hInstance = hInst;
  WndClass.hIcon = LoadIconA(hInst, (LPCSTR)0x65);// MAKEINTRESOURCE(...)
  WndClass.hCursor = hCursor;
  WndClass.hbrBackground = (HBRUSH)GetStockObject(0);
  WndClass.lpszMenuName = (LPCSTR)102;          // MAKEINTRESOURCE(...)
  WndClass.lpszClassName = lpClassName;
  if ( !RegisterClassA(&WndClass) )
    return 0;
  if ( RallyCreateWindow(
         WS_EX_APPWINDOW,
         lpClassName,
         lpWindowName,
         0x80C20000,                            // dwStyle, WS_EX_STATICEDGE | WS_EX_NOACTIVATE | WS_CAPTION
         0,
         0,
         640,
         480,
         0,
         0,
         hInst,
         0,
         (int)&dword_10B4E6F8,
         1,
         &wnd,
         (unk0 *)&g_gsu0) < 0 )
    return 0;
  g_HWND = wnd;
  v1 = malloc(4u);
  v3 = v1;
  v5 = 0;
  if ( v1 )
    result = unknown_libname_1(v1);
  else
    result = 0;
  v5 = -1;
  dword_118ABE08 = result;
  if ( result )
  {
    ShowStaticImage(g_gsu0, aSplashImg, 0x2AC7E58B);
    result = sub_1000B280((int)g_gsu0, (_DWORD *)dword_118ABE08) >= 0;
  }
  return result;
}
// 10001130: using guessed type int __thiscall unknown_libname_1(_DWORD);
// 10B4E6F8: using guessed type int dword_10B4E6F8;
// 118ABE08: using guessed type int dword_118ABE08;
