#include "types-win32.h"
//----- (1007A070) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_ACTIVATE(HWND hWnd, WPARAM wParam, LPARAM lParam) {
  return DefWindowProcA(hWnd, 6u, wParam, lParam);
}
