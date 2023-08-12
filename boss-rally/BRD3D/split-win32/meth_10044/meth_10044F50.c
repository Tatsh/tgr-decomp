#include "types-win32.h"
//----- (10044F50) --------------------------------------------------------
int __thiscall meth_10044F50(void *this) {
    unk000C8 *v1; // eax
    int result;   // eax
    unk000C8 *v3; // ecx

    sub_100419D0(asc_100AD300);
    gGameMode = GAME_MODE_1;
    sub_1003E680();
    if (gUnkC8Ptr12) {
        gUnkC8Ptr1 = gUnkC8Ptr12;
        result = 1;
    } else {
        v1 = (unk000C8 *)malloc(0xC8u);
        if (v1)
            result = (int)meth_unk000C8_10048710(v1);
        else
            result = 0;
        gUnkC8Ptr12 = (unk000C8 *)result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_1004B430;
            gUnkC8Ptr12->lpFn0(gUnkC8Ptr12);
            gUnkC8Ptr1->field_C = 1;
            v3 = gUnkC8Ptr1;
            gUnkC8Ptr1->field_68 = 1;
            meth_DebugPrint(v3);
            sub_1003DFC0();
            sub_1003E510();
            result = 1;
        }
    }
    return result;
}
// 1004B430: using guessed type int __cdecl s_unk000C8_1004B430(int);
