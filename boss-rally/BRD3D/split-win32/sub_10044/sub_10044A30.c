#include "../../types-win32.h"
//----- (10044A30) --------------------------------------------------------
int __cdecl sub_10044A30(int a1) {
    int v1; // eax

    if (dword_10A9D000) {
        (*(void(__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 10984) + 24))(
            *(_DWORD *)(a1 + 10984), 0);
        cleanUpAndExitWithCode(0);
    }
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (dword_10AA2904)
        (**(void(__thiscall ***)(void *, int))dword_10AA2904)(dword_10AA2904, 1);
    dword_10AA2950 = 0;
    dword_10AA2904 = (void *)dword_10AA294C;
    sub_1003BF60();
    v1 = dword_10AA287C;
    if ((!dword_10AA287C || dword_10AA287C == 1) && !dword_10A9D000) {
        sub_1003C020();
        v1 = dword_10AA287C;
    }
    if (v1 == 2 || v1 == 3) {
        if (dword_10AA29D8) {
            *(_DWORD *)(dword_10AA29D8 + 28) &= 0xFFFFFFEF;
            *(_BYTE *)(dword_10AA29D8 + 11108) = 0;
        }
    }
    return 0;
}
// 1003BF60: using guessed type int sub_1003BF60(void);
// 10044A30: using guessed type int __cdecl sub_10044A30(int);
// 10A9D000: using guessed type int dword_10A9D000;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA294C: using guessed type int dword_10AA294C;
// 10AA2950: using guessed type int dword_10AA2950;
// 10AA29D8: using guessed type int dword_10AA29D8;
