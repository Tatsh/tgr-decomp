#include "types-win32.h"
//----- (10048960) --------------------------------------------------------
HRESULT __thiscall meth_unk000C8_5(unk000C8 *this) {
    int *v1;                         // esi
    int v2;                          // edi
    int(__stdcall * v3)(int *, int); // edi
    HRESULT result;                  // eax

    v1 = *(int **)(gUnk334->ddCapsFlags + 68);
    v2 = *v1;
    (*(void(__stdcall **)(int *, _DWORD, int))(*v1 + 44))(
        v1, *(_DWORD *)(gUnk334->ddCapsFlags + 88), 1);
    v3 = *(int(__stdcall **)(int *, int))(v2 + 72);
    for (result = v3(v1, 2); result; result = v3(v1, 2))
        Sleep(0);
    return result;
}
