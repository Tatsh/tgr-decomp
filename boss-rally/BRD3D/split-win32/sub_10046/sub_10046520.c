#include "types-win32.h"
//----- (10046520) --------------------------------------------------------
int __cdecl sub_10046520(int a1) {
    (*(void(__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 10984) + 28))(*(_DWORD *)(a1 + 10984));
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->field_0(gUnkC8Ptr1, 1);
    gUnkC8Ptr4 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr6;
    return 0;
}
