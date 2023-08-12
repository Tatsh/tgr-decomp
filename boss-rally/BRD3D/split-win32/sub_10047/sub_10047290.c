#include "types-win32.h"
//----- (10047290) --------------------------------------------------------
int __cdecl sub_10047290(unk1E214 *a1) {
    unk1E214 *u1E214; // esi

    sub_1005FBC0(1);
    if (gUnkC8Ptr20) {
        gUnkC8Ptr20->lpVtbl->meth7(gUnkC8Ptr20);
        gUnkC8Ptr20 = 0;
    }
    if (gUnkC8Ptr21) {
        gUnkC8Ptr21->lpVtbl->meth7(gUnkC8Ptr21);
        gUnkC8Ptr21 = 0;
    }
    if (dword_10AA28B0) {
        u1E214 = a1;
        sub_10043260();
        dword_10AA28B0 = 0;
    } else {
        u1E214 = a1;
        if (dword_10AA28B4) {
            sub_10043330();
            dword_10AA28B4 = 0;
        } else {
            sub_10045C90();
        }
    }
    u1E214->field_2AE8->lpVtbl->meth7(u1E214->field_2AE8);
    if (gUnkC8Ptr22)
        gUnkC8Ptr22->lpVtbl->meth0(gUnkC8Ptr22, 1);
    gUnkC8Ptr22 = 0;
    return 0;
}
// 10AA28B0: using guessed type int dword_10AA28B0;
// 10AA28B4: using guessed type int dword_10AA28B4;
