#include "types-win32.h"
//----- (10077090) --------------------------------------------------------
void __cdecl windows_10077090(WPARAM wParam) {
    gWPARAM0 = wParam;
    gWPARAMLO = (unsigned __int16)wParam;
    gWPARAMHI = HIWORD(wParam);
    if (!(_WORD)wParam || HIWORD(wParam))
        meth_DebugPrint((void *)(unsigned __int16)wParam);
}
// 10680598: using guessed type int gWPARAM0;
// 1068059C: using guessed type int gWPARAMLO;
// 106805A0: using guessed type int gWPARAMHI;
