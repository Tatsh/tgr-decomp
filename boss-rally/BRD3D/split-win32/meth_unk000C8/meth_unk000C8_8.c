#include "types-win32.h"
//----- (1005AFA0) --------------------------------------------------------
int meth_unk000C8_8() {
    int v0;     // ebx
    _DWORD *v1; // eax
    _DWORD *v2; // esi
    int v3;     // edi
    int v4;     // eax
    int v6[4];  // [esp+10h] [ebp-10h] BYREF

    v0 = *(_DWORD *)(gUnk334->ddCapsFlags + 100);
    if (!*(_DWORD *)(gUnk334->ddCapsFlags + 64) || !*(_DWORD *)(gUnk334->ddCapsFlags + 96) || !v0)
        return -2147467259;
    v6[0] = 0;
    v6[2] = gWidth;
    v6[1] = 0;
    v6[3] = gHeight;
    v1 = *(_DWORD **)(gUnk334->ddCapsFlags + 8);
    v1[1] = 1048608897;
    v1[2] = 0;
    v1[3] = 0;
    v1[22] = 1;
    v2 = *(_DWORD **)(gUnk334->ddCapsFlags + 8);
    v3 = *(_DWORD *)(gUnk334->ddCapsFlags + 100);
    v4 = v2[21];
    v2[22] = 0;
    v2[19] = 1;
    (*(void(__stdcall **)(int, _DWORD *))(*(_DWORD *)v4 + 12))(v4, v2);
    (*(void(__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 32))(v3, v2[20]);
    (*(void(__stdcall **)(int, int, int *, int))(*(_DWORD *)v0 + 48))(v0, 1, v6, 3);
    return 0;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
