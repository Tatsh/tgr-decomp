#include "types-win32.h"
//----- (1007A3F0) --------------------------------------------------------
LRESULT __cdecl handle_WM_SETCURSOR(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    LONG v3;        // eax
    LRESULT result; // eax

    v3 = GetWindowLongA(hWnd, -21);
    if (!v3 || (*(_BYTE *)(v3 + 28) & 2) == 0)
        return DefWindowProcA(hWnd, 0x20u, wParam, lParam);
    if (*(_DWORD *)(v3 + 36) || (*(_BYTE *)(v3 + 20) & 8) == 0) {
        SetCursor(hCursor);
        result = 1;
    } else {
        SetCursor(0);
        result = 1;
    }
    return result;
}
