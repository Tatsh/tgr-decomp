#include "../../types-win32.h"
//----- (10079A90) --------------------------------------------------------
int __cdecl RallyCreateWindow(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam, int a3, int a14, HWND *a15, unk0 *a16)
{
  unk0 *gsu0_1; // edi
  int result; // eax
  HINSTANCE hInst; // ebx
  HWND wnd1; // esi
  unk0 *gsu0; // eax
  HWND wnd; // eax
  HWND wnd0; // esi
  int v23; // ebx

  gsu0_1 = 0;
  if ( !lpClassName )
    return -2147024809;
  hInst = hInstance;
  if ( !hInstance )
    hInst = GetModuleHandleA(0);
  wnd1 = hWndParent;
  if ( !hWndParent )
    wnd1 = GetDesktopWindow();
  gsu0 = (unk0 *)malloc(0x8Cu);
  if ( gsu0 )
    gsu0_1 = initUnk(gsu0);
  if ( !gsu0_1 )
    return -2147024882;
  wnd = CreateWindowExA(
          dwExStyle,
          lpClassName,
          lpWindowName,
          dwStyle,
          X,
          Y,
          nWidth,
          nHeight,
          wnd1,
          hMenu,
          hInst,
          lpParam);
  wnd0 = wnd;
  if ( wnd )
  {
    ShowWindow(wnd, 10);
    UpdateWindow(wnd0);
    if ( g_Playmusic == PLAYMUSIC_EAR )
      setupEAR(wnd0);
    v23 = meth_1000A1E0(gsu0_1, wnd0, a3, 0, 0, 0, 0, 0, 1);
    if ( v23 >= 0 )
    {
      if ( a15 )
        *a15 = wnd0;
      if ( a16 )
        a16->field_27 = gsu0_1;
      result = 0;
    }
    else
    {
      meth_1000A1C0(gsu0_1);
      free(gsu0_1);
      MessageBoxA(wnd0, aUnableToInitia, Caption, MB_ICONSTOP);
      DestroyWindow(wnd0);
      result = v23;
    }
  }
  else
  {
    meth_1000A1C0(gsu0_1);
    free(gsu0_1);
    result = -2147467259;
  }
  return result;
}
// 100940A4: using guessed type int g_Playmusic;
