#include "types-win32.h"
//----- (10046A30) --------------------------------------------------------
int __cdecl sub_10046A30(unk1E214 *a1) {
    int result; // eax

    a1->field_2AE8->lpVtbl->field_1C(a1->field_2AE8);
    if (gUnkC8Ptr1)
        gUnkC8Ptr1->lpVtbl->field_0(gUnkC8Ptr1, 1);
    gUnkC8Ptr17 = 0;
    dword_10AA29C0 = 0;
    dword_10AA29CC = 0;
    dword_10AA28E4 = 0;
    Value = -1;
    strcpy(byte_10AA2518, String2);
    strcpy(byte_10A9D618, String2);
    result = 0;
    gUnkC8Ptr1 = gUnkC8Ptr21;
    return result;
}
// 10AA28E4: using guessed type int dword_10AA28E4;
// 10AA29C0: using guessed type int dword_10AA29C0;
// 10AA29CC: using guessed type int dword_10AA29CC;
