#include "../types-win32.h"
//----- (10047EB0) --------------------------------------------------------
__int16 __thiscall meth_10047EB0(int this, const char *a2, int a3, char a4, _DWORD *a5) {
    void(__thiscall * *v6)(_DWORD); // ebx
    int v7;                         // ecx
    __int64 v8;                     // rax
    __int16 v9;                     // cx
    __int16 result;                 // ax

    v6 = *(void(__thiscall ***)(_DWORD))(this + 11100);
    strcpy((char *)(this + 11109), a2);
    *(_DWORD *)(this + 11104) |= a3;
    *(_BYTE *)(this + 11108) = a4;
    *(_WORD *)(this + 12152) = 0;
    *(_WORD *)(this + 12136) = 0;
    *(_WORD *)(this + 12134) = 0;
    *(_DWORD *)(this + 12160) = *a5;
    *(_DWORD *)(this + 12168) = a5[2];
    *(_DWORD *)(this + 12140) = *(_DWORD *)(this + 60);
    *(_DWORD *)(this + 12144) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 12148) = 0;
    *(_DWORD *)(this + 12156) = 0;
    v7 = this + 11100;
    if (a4 == 3)
        v6[2](v7);
    else
        v6[1](v7);
    if ((a3 & 1) != 0)
        v6[10](this + 11100);
    v8 = (__int64)*(float *)(this + 64);
    *(_DWORD *)(this + 84) = v8;
    *(_DWORD *)(this + 80) = *a5;
    v9 = *(_WORD *)(this + 12136);
    *(_DWORD *)(this + 88) = a5[2];
    *(_DWORD *)(this + 92) = v9 + (_DWORD)v8;
    result = *(_WORD *)(this + 12134);
    *(_WORD *)(this + 72) = result;
    *(_WORD *)(this + 74) = v9;
    return result;
}
