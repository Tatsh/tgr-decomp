#include "types-win32.h"
//----- (1007AC20) --------------------------------------------------------
BOOL __cdecl sub_1007AC20(int a1, int a2, int a3, int a4) {
    LONG v4;     // eax
    LPARAM v5;   // edi
    _DWORD *v6;  // esi
    _DWORD *v7;  // eax
    int v8;      // esi
# 492 * v9;      // eax
    BOOL result; // eax

    v4 = GetWindowLongA(gHwnd, -21);
    v5 = v4;
    result = 0;
    if (v4) {
        v6 = *(_DWORD **)(v4 + 44);
        v7 = (_DWORD *)sub_1007A7D0(&dword_10B4E6F8);
        if (v6 != v7) {
            if (v7) {
                v8 = *(_DWORD *)(v5 + 52);
                if (v8) {
                    v9 = meth_unk00334_1001A570(v7, a1, a2, a3, (#492 *)a4, *(IID **)(v5 + 52));
                    if (!meth_unk0008C_1000B390(v5, (int)&dword_10B4E6F8, v8, (int)v9))
                        result = 1;
                }
            }
        }
    }
    return result;
}
// 10B4E6F8: using guessed type int dword_10B4E6F8;
