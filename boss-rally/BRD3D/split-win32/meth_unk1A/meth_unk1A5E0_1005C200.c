#include "types-win32.h"
//----- (1005C200) --------------------------------------------------------
int __thiscall meth_unk1A5E0_1005C200(unk1A5E0 *this, char *a2, size_t Size, int a4) {
    int v4; // ebx

    v4 = a4;
    if (a4 == -1) {
        v4 = (unsigned __int16)this->field_1A92C[0] - 1;
        if (v4 < 0)
            v4 = 0;
    }
    if (!*(_DWORD *)&this->gap1A60C[8 * v4 + 4])
        *(_DWORD *)&this->gap1A60C[8 * v4 + 4] = malloc(Size);
    qmemcpy(*(void **)&this->gap1A60C[8 * v4 + 4], a2, Size);
    *(_DWORD *)&this->gap1A60C[8 * v4] = Size;
    return 1;
}
