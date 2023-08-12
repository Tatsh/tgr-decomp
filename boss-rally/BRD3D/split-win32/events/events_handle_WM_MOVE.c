#include "types-win32.h"
//----- (1007A380) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_MOVE(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    return DefWindowProcA(hWnd, 3u, wParam, lParam);
}
