#include "types-win32.h"
//----- (1001C620) --------------------------------------------------------
int __thiscall meth_1001C620(_DWORD *this) {
    int v2; // [esp-8h] [ebp-8h]

    if (!this[0x16])
        return 0;
    v2 = this[21];
    this[22] = 0;
    return (*(int(__stdcall **)(int, _DWORD *))(*(_DWORD *)v2 + 12))(v2, this);
}
