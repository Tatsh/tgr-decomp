#include "types-win32.h"
//----- (10044DE0) --------------------------------------------------------
int __cdecl sub_10044DE0(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr32 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr30;
    return 0;
}
