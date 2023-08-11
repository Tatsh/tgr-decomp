#include "types-win32.h"
//----- (10044B90) --------------------------------------------------------
int sub_10044B90() {
    _DWORD *v0; // eax
    int result; // eax

    sub_100419D0((int)asc_100AD300);
    if (gUnkC8Ptr30) {
        gUnkC8Ptr1 = (void *)gUnkC8Ptr30;
        result = 1;
    } else {
        v0 = (_DWORD *)malloc(0xC8u);
        if (v0)
            result = (int)meth_unk000C8_10048710(v0);
        else
            result = 0;
        gUnkC8Ptr30 = result;
        gUnkC8Ptr1 = (void *)result;
        if (result) {
            *(_DWORD *)(result + 4) = s_unk000C8_10059760;
            (*(void(__cdecl **)(int))(gUnkC8Ptr30 + 4))(gUnkC8Ptr30);
            *((_DWORD *)gUnkC8Ptr1 + 3) = 1;
            result = 1;
            *((_DWORD *)gUnkC8Ptr1 + 26) = 1;
        }
    }
    return result;
}
// 10059760: using guessed type int __cdecl sub_10059760(int);
// 10AA295C: using guessed type int dword_10AA295C;
