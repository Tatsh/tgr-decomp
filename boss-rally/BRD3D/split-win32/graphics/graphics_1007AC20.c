#include "types-win32.h"
//----- (1007AC20) --------------------------------------------------------
BOOL __cdecl graphics_1007AC20(int width, int height, int bitDepth, unk00334 *a5) {
    unk0008C *u8c;   // eax
    unk0008C *u8c_1; // edi
    D3DVALUE v6;     // esi
    unk00334 *u334;  // eax
    unk00334 *v8;    // esi
    unk00334 *v9;    // eax
    BOOL result;     // eax

    u8c = (unk0008C *)GetWindowLongA(gHwnd, GWL_USERDATA);
    u8c_1 = u8c;
    result = 0;
    if (u8c) {
        v6 = u8c->field_8.specular.r;
        u334 = graphics_1007A7D0((CLSID *)&gGUID);
        if ((unk00334 *)LODWORD(v6) != u334) {
            if (u334) {
                v8 = (unk00334 *)LODWORD(u8c_1->field_8.specular.b);
                if (v8) {
                    v9 = meth_unk00334_1001A570(u334,
                                                width,
                                                height,
                                                bitDepth,
                                                a5,
                                                (unk00228 *)LODWORD(u8c_1->field_8.specular.b));
                    if (!meth_unk0008C_1000B390(u8c_1, (CLSID *)&gGUID, v8, (int)v9))
                        result = 1;
                }
            }
        }
    }
    return result;
}
