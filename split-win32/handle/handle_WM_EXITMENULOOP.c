#include "../../types-win32.h"
//----- (1007A2B0) --------------------------------------------------------
LRESULT __cdecl handle_WM_EXITMENULOOP(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
  LONG v3; // eax
  unk0 *v4; // esi

  v3 = GetWindowLongA(hWnd, -21);
  v4 = (unk0 *)v3;
  if ( v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31 )
  {
    SetCursor(0);
    sub_1000B220(v4, 0);
  }
  return DefWindowProcA(hWnd, 0x212u, wParam, lParam);
}
