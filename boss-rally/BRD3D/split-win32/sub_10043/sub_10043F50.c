#include "types-win32.h"
//----- (10043F50) --------------------------------------------------------
int __cdecl sub_10043F50(int a1) {
    dword_10AA287C = 2;
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr29 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr10;
    return 0;
}
// 10AA287C: using guessed type int dword_10AA287C;
