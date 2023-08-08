#include "../types-win32.h"
//----- (10028350) --------------------------------------------------------
int __cdecl TIDFromTexture(_DWORD *a1, int a2) {
    _DWORD *v2; // esi
    int result; // eax
    int v4;     // ecx
    bool v5;    // cf
    int v6;     // ebx
    unk20 *v7;  // eax
    int a4;     // [esp+Ch] [ebp-4h] BYREF

    v2 = a1;
    if (dword_118AA09C || (result = sub_10028630((int)a1), result == -1)) {
        v4 = dword_10575428;
        v5 = ++dword_10575424 < (unsigned int)dword_10575428;
        v6 = dword_10575424;
        if (!v5) {
            dword_10575428 += 256;
            Block = CHK_ReAllocateMemory_0(Block, 4 * (v4 + 256), aTidfromtexture);
        }
        v7 = (unk20 *)malloc(0x20u);
        if (v7) {
            v7->field_0 = 0;
            v7->field_4 = 0;
            v7->field_8 = 0;
            v7->field_C = 0;
            v7->field_14 = 0;
            v7->field_10 = 0;
            v7->field_18 = 0;
            v7->last = 0;
        } else {
            v7 = 0;
        }
        *((_DWORD *)Block + v6) = v7;
        sub_10028720(&a4, (int *)&a1, v2[7], v2[8]);
        dword_10575444 = 0;
        dword_10575440 = 0;
        sub_10024BF0(&a4, &a1, v2);
        if (v2[15])
            meth_10009C40(*((void **)Block + v6),
                          g_D3DDevice2,
                          (unsigned __int8 *)a2,
                          a4,
                          (DWORD)a1,
                          v2[4],
                          v2[15]);
        else
            meth_10009EA0(
                *((void **)Block + v6), g_D3DDevice2, (unsigned __int8 *)a2, a4, (int)a1, v2[4]);
        result = sub_100284A0(v2, v6);
    }
    return result;
}
// 10575424: using guessed type int dword_10575424;
// 10575428: using guessed type int dword_10575428;
// 10575440: using guessed type int dword_10575440;
// 10575444: using guessed type int dword_10575444;
// 118AA09C: using guessed type int dword_118AA09C;
