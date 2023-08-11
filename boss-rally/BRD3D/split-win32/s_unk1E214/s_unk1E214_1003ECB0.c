#include "types-win32.h"
//----- (1003ECB0) --------------------------------------------------------
int __cdecl s_unk1E214_1003ECB0(unk1E214 *a1) {
    dword_10AA2860 = dword_10AA2A2C;
    gUnk00334Ptr1 =
        s_CLSID_1007A7D0(*(CLSID **)&gUnk1E214Ptr0->field_3838.gap1A60C[8 * dword_10AA2A2C + 4]);
    gGUID = gUnk00334Ptr1->lpGUID;
    gHeight0 = gUnk00334Ptr1->height;
    gWidth0 = gUnk00334Ptr1->width;
    gGap10 = *(_DWORD *)gUnk00334Ptr1->gap10;
    s_unk1E214_10046620(a1);
    return 0;
}
// 10AA2860: using guessed type int dword_10AA2860;
// 10AA2A2C: using guessed type int dword_10AA2A2C;
// 10B4E6FC: using guessed type int gHeight0;
// 10B4E700: using guessed type int gWidth0;
// 10B4E704: using guessed type int gGap10;
