#include "types-win32.h"
//----- (10046260) --------------------------------------------------------
int sub_10046260() {
    unk000C8 *v0; // eax
    int result;   // eax
    unk000C8 *v2; // ecx

    gGameMode = GAME_MODE_2;
    sub_1003E680();
    dword_10ACED34 = 0;
    dword_10AD0984 = 1;
    gGameMode = GAME_MODE_2;
    dword_100AC304 = 1;
    LOBYTE(dword_10680738[0]) = -1;
    if (gUnkC8Ptr12) {
        gUnkC8Ptr1 = gUnkC8Ptr12;
        result = 1;
    } else {
        dword_100AC304 = 1;
        v0 = (unk000C8 *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr12 = (unk000C8 *)result;
        gUnkC8Ptr1 = (unk000C8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_1004B430;
            gUnkC8Ptr12->lpFn0(gUnkC8Ptr12);
            gUnkC8Ptr1->field_C = 1;
            v2 = gUnkC8Ptr1;
            gUnkC8Ptr1->field_68 = 1;
            meth_DebugPrint(v2);
            sub_1003DFC0();
            sub_1003E510();
            result = 1;
            *(_DWORD *)(dword_10AA29AC + 8) = sub_10044CB0;
        }
    }
    return result;
}
// 1004B430: using guessed type int __cdecl sub_1004B430(int);
// 100AC304: using guessed type int dword_100AC304;
// 10AA29AC: using guessed type int dword_10AA29AC;
// 10AD0984: using guessed type int dword_10AD0984;
