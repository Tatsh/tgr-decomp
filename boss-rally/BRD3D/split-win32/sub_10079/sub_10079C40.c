#include "../types-win32.h"
//----- (10079C40) --------------------------------------------------------
int sub_10079C40() {
    unk334 *v0; // esi

    if (g_HWND && IsWindow(g_HWND)) {
        DestroyWindow(g_HWND);
        g_HWND = 0;
    }
    v0 = g_gsu0;
    if (g_gsu0) {
        meth_1000A1C0(g_gsu0);
        free(v0);
        g_gsu0 = 0;
    }
    return 0;
}
