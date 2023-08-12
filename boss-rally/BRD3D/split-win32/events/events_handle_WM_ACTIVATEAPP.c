#include "types-win32.h"
//----- (1007A090) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_ACTIVATEAPP(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    void *v3; // ecx
    void *v4; // ecx
    LONG v5;  // esi
    int v6;   // eax
    int v7;   // eax

    gWPARAM0 = wParam;
    if (!wParam) {
        if (!dword_106909B4 && !dword_106909E0) {
            sub_10067980();
            pm_sub_10002B70();
            sound_10072E00();
            dword_10680734 = 0;
            if (gNetworkPlay && gIsGameMode4 && !dword_106909E0 &&
                (v3 = (void *)dword_100BD3E0, dword_10ACEE50 < dword_100BD3E0)) {
                atomic_sub_10004BE0();
                np_sub_10004FC0();
            } else {
                dword_106909B4 = 1;
            }
        }
        meth_DebugPrint(v3);
    }
    if (sub_1006A980() == 1) {
        v5 = GetWindowLongA(hWnd, GWL_USERDATA);
        if (gWPARAM0) {
            if (v5) {
                v6 = *(_DWORD *)(v5 + 20);
                LOBYTE(v6) = v6 | 8;
                *(_DWORD *)(v5 + 20) = v6;
                meth_unk0008C_1000B2C0((unk0008C *)v5);
                meth_unk0008C_1000B150((unk0008C *)v5);
            }
        } else if (v5) {
            v7 = *(_DWORD *)(v5 + 20);
            LOBYTE(v7) = v7 & 0xF7;
            *(_DWORD *)(v5 + 20) = v7;
            InvalidateRect(hWnd, 0, 0);
        }
    }
    if (gWPARAM0) {
        meth_DebugPrint(v4);
        sub_1002C4D0();
    }
    return DefWindowProcA(hWnd, 0x1Cu, wParam, lParam);
}
// 1007A108: variable 'v3' is possibly undefined
// 1007A16B: variable 'v4' is possibly undefined
// 1022AF14: using guessed type int gIsGameMode4;
// 1022AF18: using guessed type int gNetworkPlay;
// 10680598: using guessed type int gWPARAM0;
// 10680734: using guessed type int dword_10680734;
// 106909B4: using guessed type int dword_106909B4;
// 106909E0: using guessed type int dword_106909E0;
// 10ACEE50: using guessed type int dword_10ACEE50;
