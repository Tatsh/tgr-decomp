#include "../types-win32.h"
//----- (1007A190) --------------------------------------------------------
int __cdecl DestroyWindowWrapper(HWND hWnd) {
    DestroyWindow(hWnd);
    return 0;
}