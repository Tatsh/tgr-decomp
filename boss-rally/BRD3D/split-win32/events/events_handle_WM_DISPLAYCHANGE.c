#include "types-win32.h"
//----- (1007A1F0) --------------------------------------------------------
int __cdecl events_handle_WM_DISPLAYCHANGE(HWND hWnd) {
    if (GetWindowLongA(hWnd, GWL_USERDATA))
        ReturnZero();
    return 0;
}
