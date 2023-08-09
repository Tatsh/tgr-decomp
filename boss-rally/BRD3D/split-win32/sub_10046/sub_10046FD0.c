#include "types-win32.h"
//----- (10046FD0) --------------------------------------------------------
int __cdecl sub_10046FD0(unk1E214 *a1) {
    if (gUnkC8Ptr20) {
        gUnkC8Ptr20->lpVtbl->field_1C(gUnkC8Ptr20);
        gUnkC8Ptr20 = 0;
    }
    if (gUnkC8Ptr21) {
        gUnkC8Ptr21->lpVtbl->field_1C(gUnkC8Ptr21);
        gUnkC8Ptr21 = 0;
    }
    if (gUnkC8Ptr22) {
        gUnkC8Ptr22->lpVtbl->field_1C(gUnkC8Ptr22);
        gUnkC8Ptr22 = 0;
    }
    a1->field_2AE8->lpVtbl->field_1C(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->field_0(gUnkC8Ptr1, 1);
    gUnkC8Ptr33 = 0;
    gUnkC8Ptr1 = gUnkC8Ptr6;
    return 0;
}
