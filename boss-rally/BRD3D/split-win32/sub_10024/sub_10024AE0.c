#include "../types-win32.h"
//----- (10024AE0) --------------------------------------------------------
int __cdecl sub_10024AE0(int a1) {
    int result; // eax
    int v2;     // edx

    result = sub_10024B60();
    v2 = 696 * result;
    qmemcpy((char *)dword_1057543C + 696 * result, (char *)dword_1057543C + 696 * a1, 0x2B8u);
    *(float *)((char *)dword_1057543C + v2 + 688) =
        *(float *)((char *)dword_1057543C + v2 + 688) * 0.5;
    *(float *)((char *)dword_1057543C + v2 + 692) =
        *(float *)((char *)dword_1057543C + v2 + 692) * 0.5;
    return result;
}
