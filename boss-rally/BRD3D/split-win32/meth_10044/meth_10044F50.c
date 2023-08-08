#include "types-win32.h"
//----- (10044F50) --------------------------------------------------------
int __thiscall meth_10044F50(void *this) {
    unkC8 *v1;  // eax
    int result; // eax
    unkC8 *v3;  // ecx

    sub_100419D0(asc_100AD300);
    g_GameMode = 1;
    sub_1003E680();
    if (dword_10AA290C) {
        g_unkC8Ptr1 = (unkC8 *)dword_10AA290C;
        result = 1;
    } else {
        v1 = (unkC8 *)malloc(0xC8u);
        if (v1)
            result = (int)meth_10048710(v1);
        else
            result = 0;
        dword_10AA290C = result;
        g_unkC8Ptr1 = (unkC8 *)result;
        if (result) {
            *(_DWORD *)(result + 4) = sub_1004B430;
            (*(void(__cdecl **)(int))(dword_10AA290C + 4))(dword_10AA290C);
            g_unkC8Ptr1->field_C = 1;
            v3 = g_unkC8Ptr1;
            g_unkC8Ptr1->field_68 = 1;
            debugPrint(v3);
            sub_1003DFC0();
            sub_1003E510();
            result = 1;
        }
    }
    return result;
}
// 1004B430: using guessed type int __cdecl sub_1004B430(int);
// 100AA010: using guessed type int g_GameMode;
// 10AA290C: using guessed type int dword_10AA290C;
