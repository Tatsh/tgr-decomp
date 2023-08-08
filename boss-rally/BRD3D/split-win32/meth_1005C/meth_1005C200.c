#include "../types-win32.h"
//----- (1005C200) --------------------------------------------------------
int __thiscall meth_1005C200(unsigned __int16 *this, int a2, size_t Size, int a4) {
    int v4; // ebx

    v4 = a4;
    if (a4 == -1) {
        v4 = this[54422] - 1;
        if (v4 < 0)
            v4 = 0;
    }
    if (!*(_DWORD *)&this[4 * v4 + 54024])
        *(_DWORD *)&this[4 * v4 + 54024] = malloc(Size);
    qmemcpy(*(void **)&this[4 * v4 + 54024], (const void *)a2, Size);
    *(_DWORD *)&this[4 * v4 + 54022] = Size;
    return 1;
}
