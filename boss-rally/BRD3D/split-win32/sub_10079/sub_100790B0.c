#include "types-win32.h"
//----- (100790B0) --------------------------------------------------------
int __cdecl sub_100790B0(int a1) {
    int result; // eax

    dword_118ABD0C = a1;
    dword_118ABD10 = a1;
    result = g_DirectInputEffect_0;
    if (g_DirectInputEffect_0)
        result = (*(int(__stdcall **)(int, int *, int))(*(_DWORD *)g_DirectInputEffect_0 + 24))(
            g_DirectInputEffect_0, &diEffect_0, 256);
    return result;
}
// 118AB880: using guessed type int dword_118AB880;
// 118ABD0C: using guessed type int dword_118ABD0C;
// 118ABD10: using guessed type int dword_118ABD10;
// 118ABDEC: using guessed type int dword_118ABDEC;
