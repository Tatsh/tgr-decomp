#include "types-win32.h"
//----- (10078CD0) --------------------------------------------------------
int sub_10078CD0() {
    const CHAR *text;    // eax
    unk00054 *u54_1;     // eax
    unk00054 *u54;       // eax
    const CHAR *caption; // [esp-8h] [ebp-18h]

    if (++mouseCreated == 1) {
        if (DirectInputCreateA(hInstance, DIRECTINPUT_VERSION, &g_DirectInputA, 0) < 0) {
            caption = GetStringWithIndex(0x126u);
            text = GetStringWithIndex(0x127u);
            MessageBoxA(gHwnd, text, caption, MB_ICONERROR);
            return 0;
        }
        u54_1 = (unk00054 *)malloc(0x54u);
        if (u54_1)
            u54 = meth_unk00054_init(u54_1);
        else
            u54 = 0;
        gUnk54Ptr = u54;
        meth_unk00054_DICreateMouseDevice(u54, gHwnd);
    }
    return 1;
}
// 118ABDE8: using guessed type int mouseCreated;
