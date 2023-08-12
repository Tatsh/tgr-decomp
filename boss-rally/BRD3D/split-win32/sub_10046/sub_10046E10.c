#include "types-win32.h"
//----- (10046E10) --------------------------------------------------------
int __cdecl sub_10046E10(unk1E214 *a1) {
    int result; // eax

    a1->field_2AE8->lpVtbl->meth7(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->meth0(gUnkC8Ptr1, 1);
    gUnkC8Ptr16 = 0;
    dword_10AA28E0 = 0;
    Value = -1;
    strcpy(byte_10AA2518, String2);
    strcpy(byte_10A9D618, String2);
    result = 0;
    gUnkC8Ptr1 = gUnkC8Ptr5;
    return result;
}
// 10AA28E0: using guessed type int dword_10AA28E0;
