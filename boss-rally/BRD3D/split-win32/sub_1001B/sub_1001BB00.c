#include "types-win32.h"
//----- (1001BB00) --------------------------------------------------------
int __cdecl sub_1001BB00(int a1, int a2, int a3, int a4) {
    if (!sub_1007AC20(a1, a2, a3, a4) &&
        (a1 != g_Width1 || a2 != g_Height1 || a3 != g_BitDepth || a4 != MEMORY[0x106C6644])) {
        meth_unk0008C_1000B4D0(gUnk8C, a1, a2, a3, a4);
        if (!gUnk8C->width)
            meth_unk0008C_1000B4D0(gUnk8C, 640, 480, 16, 0);
    }
    return sub_1001BAE0();
}
// 100AA8A8: using guessed type int g_BitDepth;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C6644: using guessed type int dword_106C6644;
