#include "types-win32.h"
//----- (1007A300) --------------------------------------------------------
LRESULT __cdecl events_handle_WM_GETMINMAXINFO(HWND hWnd, WPARAM wParam, LPARAM lParam) {
    LONG v3;         // eax
    unsigned int v4; // ecx
    unsigned int v5; // eax
    int v7[4];       // [esp+4h] [ebp-10h] BYREF

    v3 = GetWindowLongA(hWnd, -21);
    if (!v3 || (*(_BYTE *)(v3 + 28) & 2) == 0 || dword_118AC230)
        return DefWindowProcA(hWnd, 0x24u, wParam, lParam);
    meth_unk00334_1000B350((unk00334 *)v3, v7);
    v4 = abs32(v7[2] - v7[0]);
    v5 = abs32(v7[3] - v7[1]);
    *(_DWORD *)(lParam + 36) = v5;
    *(_DWORD *)(lParam + 28) = v5;
    *(_DWORD *)(lParam + 32) = v4;
    *(_DWORD *)(lParam + 24) = v4;
    return 0;
}
// 118AC230: using guessed type int dword_118AC230;
