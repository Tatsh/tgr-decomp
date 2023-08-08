#include "types-win32.h"
//----- (10043BF0) --------------------------------------------------------
int __stdcall sub_10043BF0() {
    unkC8 *v0;     // eax
    unkC8 *result; // eax

    sub_100419D0(asc_100AD300);
    sub_1003E510();
    if (dword_10AA2958) {
        g_unkC8Ptr1 = (unkC8 *)dword_10AA2958;
        result = (unkC8 *)1;
    } else {
        v0 = (unkC8 *)malloc(0xC8u);
        if (v0)
            result = meth_10048710(v0);
        else
            result = 0;
        dword_10AA2958 = (int)result;
        g_unkC8Ptr1 = result;
        if (result) {
            result->lpFn0 = sub_100563E0;
            (*(void(__cdecl **)(int))(dword_10AA2958 + 4))(dword_10AA2958);
            g_unkC8Ptr1->field_C = 1;
            result = (unkC8 *)1;
            g_unkC8Ptr1->field_68 = 1;
        }
    }
    return (int)result;
}
// 10AA2958: using guessed type int dword_10AA2958;
