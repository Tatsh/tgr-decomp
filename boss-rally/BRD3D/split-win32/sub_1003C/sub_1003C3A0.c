#include "../types-win32.h"
//----- (1003C3A0) --------------------------------------------------------
int __stdcall sub_1003C3A0(int a1, int a2, int a3, LPCVOID pMem) {
    HGLOBAL v4; // eax
    HGLOBAL v5; // eax

    if (a2 == 275) {
        if (dword_10AA29D4)
            sub_1003CC70(unk);
        if (!dword_10AA2884)
            sub_1003CE80();
        return 0;
    }
    if (a2 != 1281)
        return 0;
    if (dword_10AA29E0)
        (*(void(__thiscall **)(int, LPCVOID, _DWORD, int, void *, int))(
            *(_DWORD *)(dword_10AA29E0 + 14392) + 16))(
            dword_10AA29E0 + 14392, pMem, 0, 1, &unk_100AB408, 1);
    v4 = GlobalHandle(pMem);
    GlobalUnlock(v4);
    v5 = GlobalHandle(pMem);
    GlobalFree(v5);
    return 0;
}
// 10AA2884: using guessed type int dword_10AA2884;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29E0: using guessed type int dword_10AA29E0;
