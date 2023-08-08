#include "../types-win32.h"
//----- (10076700) --------------------------------------------------------
void __thiscall meth_10076700(int this, void *a2) {
    _DWORD *v3; // esi
    int v4;     // ecx
    int v5;     // edx
    int v6;     // eax
    int v7;     // ecx
    int v8;     // edx
    int v9;     // eax
    int v10;    // ecx

    qmemcpy((void *)this, a2, 0x40u);
    v3 = (_DWORD *)(this + 500);
    sub_100765E0((float *)a2, (float *)(this + 500));
    v4 = *(_DWORD *)(this + 504);
    v5 = *(_DWORD *)(this + 508);
    *(_DWORD *)(this + 724) = *v3;
    v6 = *(_DWORD *)(this + 512);
    *(_DWORD *)(this + 728) = v4;
    v7 = *v3;
    *(_DWORD *)(this + 732) = v5;
    v8 = *(_DWORD *)(this + 504);
    *(_DWORD *)(this + 736) = v6;
    v9 = *(_DWORD *)(this + 508);
    *(_DWORD *)(this + 656) = v7;
    v10 = *(_DWORD *)(this + 512);
    *(_DWORD *)(this + 660) = v8;
    *(_DWORD *)(this + 664) = v9;
    *(_DWORD *)(this + 668) = v10;
    sub_10074450((float *)(this + 544), (float *)(this + 476));
}
