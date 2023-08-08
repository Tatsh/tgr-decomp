#include "types-n64.h"
//----- (80220C58) --------------------------------------------------------
void __fastcall sub_80220C58(int a1, int a2, float a3) {
    float *v5;   // $s0
    float v6;    // $f0
    float v7;    // $f0
    float v8[3]; // [sp+4Ch] [-Ch] BYREF

    v5 = (float *)(a2 + 48);
    if (*(_DWORD *)(a1 + 3916)) {
        sub_8022494C((float *)(a2 + 48), (float *)(a1 + 48), (float *)(a1 + 32), 2.4000001);
        sub_8022494C(v5, v5, (float *)a1, -11.0);
    } else {
        *(float *)(a2 + 56) = *(float *)(a2 + 56) - 2.4000001;
        sub_80224808(v8, (float *)(a2 + 48), (float *)(a1 + 48));
        v6 = sub_80224B08(v8);
        if (v6 != 0.0)
            sub_80224528(v8, 11.0 / v6);
        sub_802244FC((float *)(a2 + 48), (float *)a1, -11.0);
        v7 = sub_80224B08((float *)(a2 + 48));
        if (v7 != 0.0)
            sub_80224528((float *)(a2 + 48), 11.0 / v7);
        sub_802248FC((float *)(a2 + 48), (float *)(a2 + 48), v8, a3);
        sub_802248C8((float *)(a2 + 48), (float *)(a1 + 48));
        *(float *)(a2 + 56) = *(float *)(a2 + 56) + 2.4000001;
    }
}
// 8026FF18: using guessed type int dword_8026FF18;
