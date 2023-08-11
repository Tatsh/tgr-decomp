#include "types-win32.h"
//----- (1007A1A0) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_COMMAND(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    return DefWindowProcA(hWnd, 0x111u, wParam, lParam);
}
