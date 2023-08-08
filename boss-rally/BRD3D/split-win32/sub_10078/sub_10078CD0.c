#include "types-win32.h"
//----- (10078CD0) --------------------------------------------------------
int sub_10078CD0() {
    const CHAR *text;    // eax
    unk54 *u54_1;        // eax
    unk54 *u54;          // eax
    const CHAR *caption; // [esp-8h] [ebp-18h]

    if (++mouseCreated == 1) {
        if (DirectInputCreateA(hInst, DIRECTINPUT_VERSION, &g_DirectInputA, 0) < 0) {
            caption = getCaptionString(0x126u);
            text = getCaptionString(0x127u);
            MessageBoxA(g_HWND, text, caption, MB_ICONERROR);
            return 0;
        }
        u54_1 = (unk54 *)malloc(0x54u);
        if (u54_1)
            u54 = meth_unk54_init(u54_1);
        else
            u54 = 0;
        g_unk54Ptr = u54;
        meth_DICreateMouseDevice(u54, g_HWND);
    }
    return 1;
}
// 118ABDE8: using guessed type int mouseCreated;
