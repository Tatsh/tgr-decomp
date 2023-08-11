#include "types-win32.h"
//----- (1007A4E0) --------------------------------------------------------
LRESULT __cdecl handle_WM_SYSCOMMAND(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    unk00334 *v3; // eax

    v3 = (unk00334 *)GetWindowLongA(hWnd, -21);
    if (wParam <= 0xF010) {
        if (wParam != 61456) {
            if (wParam == 61440)
                return 0;
            return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
        }
        return 0;
    }
    switch (wParam) {
    case 0xF020u:
        dword_118AC230 = 1;
    LABEL_15:
        dword_118AC234 = 0;
        return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
    case 0xF030u:
        dword_118AC234 = 1;
        dword_118AC230 = 0;
        return 0;
    case 0xF120u:
        if (dword_118AC230) {
            if (v3)
                meth_unk0008C_1000B2C0(v3);
        }
        dword_118AC230 = 0;
        goto LABEL_15;
    }
    return DefWindowProcA(hWnd, 0x112u, wParam, lParam);
  }
  // 118AC230: using guessed type int dword_118AC230;
  // 118AC234: using guessed type int dword_118AC234;
