#include "types-n64.h"
//----- (80221108) --------------------------------------------------------
void __fastcall sub_80221108(int a1) {
    float *v2; // [sp+24h] [-4h]

    *(_DWORD *)(a1 + 7656) = a1 + 7868;
    v2 = (float *)(a1 + 7916);
    sub_8022494C((float *)(a1 + 7916), (float *)(a1 + 48), (float *)a1, 6.0);
    sub_80224990(v2, (float *)(a1 + 16), 2.0);
    sub_802248C8(v2, (float *)(a1 + 32));
    *(_DWORD *)(a1 + 3912) = 2;
}
