#include "../types-win32.h"
//----- (1007A6F0) --------------------------------------------------------
int __cdecl resetWindowLong_USERDATA(HWND hWnd) {
    SetWindowLongA(hWnd, -21, 0);
    return 0;
}
