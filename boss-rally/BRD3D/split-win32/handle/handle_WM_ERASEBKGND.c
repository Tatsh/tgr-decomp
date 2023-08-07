#include "../../types-win32.h"
//----- (1007A210) --------------------------------------------------------
LRESULT __cdecl handle_WM_ERASEBKGND(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    LONG v3;        // eax
    LRESULT result; // eax

    v3 = GetWindowLongA(hWnd, -21);
    if (v3 && (*(_BYTE *)(v3 + 28) & 0x1F) == 31 && (*(_BYTE *)(v3 + 20) & 8) != 0 &&
        !*(_DWORD *)(v3 + 36))
        result = 1;
    else
        result = DefWindowProcA(hWnd, 0x14u, wParam, lParam);
    return result;
}
