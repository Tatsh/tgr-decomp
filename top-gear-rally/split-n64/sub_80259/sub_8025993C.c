#include "types-n64.h"
//----- (8025993C) --------------------------------------------------------
int __fastcall sub_8025993C(int a1) {
    int v1; // $t6

    v1 = *(_DWORD *)(a1 + 4);
    *(float *)(a1 + 260) = 0.0;
    *(float *)(a1 + 256) = 0.0;
    *(float *)(a1 + 252) = 0.0;
    *(float *)(a1 + 272) = 0.0;
    *(float *)(a1 + 268) = 0.0;
    *(float *)(a1 + 264) = 0.0;
    *(float *)(v1 + 252) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 4) + 256) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 4) + 260) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 8) + 252) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 8) + 256) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 8) + 260) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 12) + 252) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 12) + 256) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 12) + 260) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 16) + 252) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 16) + 256) = 0.0;
    *(float *)(*(_DWORD *)(a1 + 16) + 260) = 0.0;
    sub_802594BC(a1);
    sub_80259634((float *)a1, *(_DWORD *)(a1 + 4));
    sub_80259634((float *)a1, *(_DWORD *)(a1 + 8));
    sub_80259634((float *)a1, *(_DWORD *)(a1 + 12));
    sub_80259634((float *)a1, *(_DWORD *)(a1 + 16));
    return sub_8025980C(a1);
}
