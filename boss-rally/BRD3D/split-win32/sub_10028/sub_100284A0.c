#include "types-win32.h"
//----- (100284A0) --------------------------------------------------------
int __cdecl sub_100284A0(_DWORD *a1, int a2) {
    int result;      // eax
    int v3;          // edx
    unsigned int v4; // esi
    double v5;       // st7
    unsigned int v6; // ebx

    result = sub_10024B60();
    v3 = 696 * result;
    qmemcpy((char *)dword_1057543C + 696 * result + 4, a1, 0x2ACu);
    *((_DWORD *)dword_1057543C + 174 * result) = a2;
    *(_DWORD *)((char *)dword_1057543C + v3 + 688) = 1065353216;
    *(_DWORD *)((char *)dword_1057543C + v3 + 692) = 1065353216;
    *(float *)((char *)dword_1057543C + v3 + 688) =
        *(float *)((char *)dword_1057543C + v3 + 688) * 0.03125;
    *(float *)((char *)dword_1057543C + v3 + 692) =
        *(float *)((char *)dword_1057543C + v3 + 692) * 0.03125;
    *(float *)((char *)dword_1057543C + v3 + 688) =
        *(float *)((char *)dword_1057543C + v3 + 688) /
        (double)*(int *)((char *)dword_1057543C + v3 + 72);
    *(float *)((char *)dword_1057543C + v3 + 692) =
        *(float *)((char *)dword_1057543C + v3 + 692) /
        (double)*(int *)((char *)dword_1057543C + v3 + 76);
    v4 = a1[16 * a1[23] + 35];
    if (v4) {
        if (v4 > 0xA)
            v5 = (double)(1 << (16 - v4));
        else
            v5 = (double)(1024 >> v4) * 0.0009765625;
        *(float *)((char *)dword_1057543C + v3 + 688) =
            v5 * *(float *)((char *)dword_1057543C + v3 + 688);
    }
    v6 = a1[16 * a1[23] + 36];
    if (v6) {
        if (v6 > 0xA)
            *(float *)((char *)dword_1057543C + v3 + 692) =
                (double)(1 << (16 - v6)) * *(float *)((char *)dword_1057543C + v3 + 692);
        else
            *(float *)((char *)dword_1057543C + v3 + 692) =
                (double)(1024 >> v6) * 0.0009765625 * *(float *)((char *)dword_1057543C + v3 + 692);
    }
    return result;
}
