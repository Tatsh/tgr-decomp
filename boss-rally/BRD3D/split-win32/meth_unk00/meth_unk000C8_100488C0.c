#include "types-win32.h"
//----- (100488C0) --------------------------------------------------------
int __thiscall meth_unk000C8_100488C0(unk000C8 *this) {
    int v3;       // ecx
    unk000C8 *v4; // esi
    float *v5;    // ecx
    float v6;     // edx

    if (((int)this->field_8 & 0x10) != 0)
        return 0;
    v3 = 0;
    if (gPlayMusic == 2) {
        v3 = 1;
    } else {
        if (!(dword_10AA2A4C % 120))
            v3 = 1;
        ++dword_10AA2A4C;
    }
    if (v3)
        dword_10AA2A34 = pm_sub_10002910() - 2;
    v4 = gUnkC8Ptr1;
    gUnkC8Ptr1 = gUnkC8Ptr6;
    v5 = *(float **)&gUnkC8Ptr6->field_14[0]->gap20[788];
    v5[15] = (float)gUnk54Ptr->field_0;
    v6 = *v5;
    v5[16] = (float)*(int *)gUnk54Ptr->gap4;
    (*(void (**)(void))(LODWORD(v6) + 12))();
    gUnkC8Ptr1 = v4;
    if (!dword_10AA2874)
        this->lpVtbl->meth5(this);
    return 1;
}
// 100940A4: using guessed type int gPlayMusic;
// 10AA2874: using guessed type int dword_10AA2874;
// 10AA2A34: using guessed type int dword_10AA2A34;
// 10AA2A4C: using guessed type int dword_10AA2A4C;
