#include "../../types-n64.h"
//----- (80255ADC) --------------------------------------------------------
int __fastcall sub_80255ADC(int a1) {
    float *v3; // [sp+24h] [-4h]

    v3 = (float *)(a1 + 28);
    sub_80255954((_DWORD *)a1, (int *)(a1 + 8), (float *)(a1 + 28), 8);
    sub_80255A18((_DWORD *)a1, (int *)(a1 + 12), v3, 2);
    sub_80255A18((_DWORD *)a1, (int *)(a1 + 16), (float *)(a1 + 24), 4);
    return sub_80255954((_DWORD *)a1, (int *)(a1 + 20), (float *)(a1 + 24), 1);
}
