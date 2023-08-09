#include "types-win32.h"
//----- (100471B0) --------------------------------------------------------
int __cdecl sub_100471B0(unk1E214 *a1) {
    sub_10045C90();
    a1->field_2AE8->lpVtbl->field_1C(a1->field_2AE8);
    if (gUnkC8Ptr8)
        gUnkC8Ptr8->lpVtbl->field_0(gUnkC8Ptr8, 1);
    gUnkC8Ptr8 = 0;
    return 0;
}
