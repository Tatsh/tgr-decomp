#include "types-win32.h"
//----- (1007A450) --------------------------------------------------------
int __cdecl events_handle_WM_SIZE(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    unk0008C *v3; // eax
    int result;   // eax

    v3 = (unk0008C *)GetWindowLongA(hWnd, GWL_USERDATA);
    if (wParam) {
        if (wParam == 1) {
            dword_118AC230 = 1;
            dword_118AC234 = 0;
        } else if (wParam == 2) {
            dword_118AC234 = 1;
            dword_118AC230 = 0;
            return DefWindowProcA(hWnd, WM_SIZE, 2u, lParam);
        }
        result = DefWindowProcA(hWnd, WM_SIZE, wParam, lParam);
    } else {
        if (dword_118AC230) {
            if (v3)
                meth_unk0008C_1000B2C0(v3);
            dword_118AC234 = 0;
            dword_118AC230 = 0;
        }
        result = 0;
    }
    return result;
}
// 118AC230: using guessed type int dword_118AC230;
// 118AC234: using guessed type int dword_118AC234;
