#include "types-win32.h"
//----- (1007A260) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_ENTERMENULOOP(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    unk00334 *v3; // eax

    v3 = (unk00334 *)GetWindowLongA(hWnd, GWL_USERDATA);
    if (v3 && (v3->ddCaps1.dwSize & 0x1F) == 31) {
        meth_unk00334_1000B220(v3, 1);
        SetCursor(hCursor);
    }
    return DefWindowProcA(hWnd, WM_ENTERMENULOOP, wParam, lParam);
}
