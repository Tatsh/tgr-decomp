#include "types-win32.h"
//----- (10044AE0) --------------------------------------------------------
int __cdecl sub_10044AE0(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr10 = 0;
    dword_10AA29B8 = 0;
    dword_10AA29D8 = 0;
    dword_10AA29D4 = 0;
    dword_10AA2880 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr11;
    sub_1003BF60();
    return 0;
}
// 10AA2880: using guessed type int dword_10AA2880;
// 10AA29B8: using guessed type int dword_10AA29B8;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
