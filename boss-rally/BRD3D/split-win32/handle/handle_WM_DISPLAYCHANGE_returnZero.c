#include "../types-win32.h"
//----- (1007A1F0) --------------------------------------------------------
int __cdecl handle_WM_DISPLAYCHANGE_returnZero(HWND hWnd) {
    if (GetWindowLongA(hWnd, GWL_USERDATA))
        returnZero();
    return 0;
}
