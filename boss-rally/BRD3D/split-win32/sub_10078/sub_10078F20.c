#include "../types-win32.h"
//----- (10078F20) --------------------------------------------------------
int __cdecl sub_10078F20(int a1, int a2, int a3) {
    int result; // eax
    int v4;     // ecx
    int v5;     // edi
    int v6;     // ebx
    int v7;     // esi
    int v8;     // edx

    result = g_ConfigJoystickIndex;
    if (g_ConfigJoystickIndex != 1 && g_ConfigJoystickIndex != 2)
        return result;
    result = dword_10B4E1E0;
    if (!dword_10B4E1E0)
        return result;
    result = MEMORY[0x118ABDBC];
    if (!MEMORY[0x118ABDBC])
        return result;
    result = dword_106909E0;
    if (dword_106909E0)
        return result;
    v4 = dword_100BD424;
    v5 = 1000 * dword_100BD424 * (a3 + 8) / 10000;
    result = dword_118ABDF8;
    dword_100BD42C = v5;
    if (!a2) {
        if (!dword_118ABDF8) {
            result = g_DirectInputEffect_0;
            if (g_DirectInputEffect_0)
                result = (*(int(__stdcall **)(int))(*(_DWORD *)g_DirectInputEffect_0 + 32))(
                    g_DirectInputEffect_0);
            dword_118ABDF8 = 1;
        }
        return result;
    }
    if (dword_118ABDF8) {
        if (g_DirectInputEffect_0)
            (*(void(__stdcall **)(int, int, _DWORD))(*(_DWORD *)g_DirectInputEffect_0 + 28))(
                g_DirectInputEffect_0, 1, 0);
        sub_10078E50();
        v5 = dword_100BD42C;
        v4 = dword_100BD424;
        dword_118ABDF8 = 0;
    }
    v6 = dword_118ABD78;
    if (a1) {
        v7 = -1000 * v4 / 10000 + dword_118ABD78;
        result = 1759218605 * v4 * dword_100BD428;
        dword_118ABD78 = v7;
        v8 = v4 * dword_100BD428 / 10000;
        if (v7 >= v8)
            goto LABEL_20;
    } else {
        v7 = 1000 * v4 / 10000 + dword_118ABD78;
        result = 1759218605 * v4 * v5;
        dword_118ABD78 = v7;
        v8 = v4 * v5 / 10000;
        if (v7 <= v8)
            goto LABEL_20;
    }
    v7 = v8;
    dword_118ABD78 = v8;
LABEL_20:
    if (v7 != v6)
        result = sub_100790B0(v7);
    return result;
}
// 100BD424: using guessed type int dword_100BD424;
// 100BD428: using guessed type int dword_100BD428;
// 100BD42C: using guessed type int dword_100BD42C;
// 106909E0: using guessed type int dword_106909E0;
// 10B4E1D0: using guessed type int g_ReadJoystick;
// 10B4E1E0: using guessed type int dword_10B4E1E0;
// 118ABD78: using guessed type int dword_118ABD78;
// 118ABDBC: using guessed type int dword_118ABDBC;
// 118ABDEC: using guessed type int dword_118ABDEC;
// 118ABDF8: using guessed type int dword_118ABDF8;
