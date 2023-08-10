#include "types-win32.h"
//----- (10046560) --------------------------------------------------------
int __cdecl sub_10046560(unk1E214 *a1) {
    a1->field_2AE8->lpVtbl->meth7(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr9 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr3;
    sub_10079550();
    return 0;
}
