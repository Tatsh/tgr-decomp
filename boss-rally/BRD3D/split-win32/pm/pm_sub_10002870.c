#include "types-win32.h"
//----- (10002870) --------------------------------------------------------
int __cdecl pm_sub_10002870(int a1) {
    if (gPlayMusic) {
        if (dword_10220CD0) {
            dword_10220CD8 = 1;
            dword_10220CD4 = a1;
            if (dword_10220C3C) {
                if (byte_10220CDC)
                    PostMessageA(hWnd, 0x3B9u, 1u, mciId);
            }
        }
    }
    return 1;
}
// 100940A4: using guessed type int g_Playmusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10220CD4: using guessed type int dword_10220CD4;
// 10220CD8: using guessed type int dword_10220CD8;
// 10220CDC: using guessed type char byte_10220CDC;
