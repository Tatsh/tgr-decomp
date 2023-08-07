#include "../../types-win32.h"
//----- (1003E260) --------------------------------------------------------
void __cdecl sub_1003E260(int a1) {
    LPCSTR v1;      // edi
    const CHAR *v2; // eax

    if (a1 <= 8) {
        v1 = getCaptionString(dword_100AC664[2 * a1]);
        v2 = getCaptionString(0xAAu);
        MessageBoxA(g_HWND, v1 + 1, v2, 0);
        if (dword_100AC660[2 * a1])
            exit(1);
    }
}
// 100AC660: using guessed type int dword_100AC660[];
