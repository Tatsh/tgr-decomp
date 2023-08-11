#include "types-win32.h"
//----- (1007AC20) --------------------------------------------------------
BOOL __cdecl sub_1007AC20(int width, int height, int bitDepth, unk00334 *a5) {
    unk0008C *u8c;   // eax
    unk0008C *u8c_1; // edi
    unk00334 *v6;    // esi
    unk00334 *u334;  // eax
    unk00334 *v8;    // esi
    unk00334 *v9;    // eax
    BOOL result;     // eax

    u8c = (unk0008C *)GetWindowLongA(gHwnd, GWL_USERDATA);
    u8c_1 = u8c;
    result = 0;
    if (u8c) {
        v6 = u8c->u334a;
        u334 = s_CLSID_1007A7D0((CLSID *)&gGUID);
        if (v6 != u334) {
            if (u334) {
                v8 = u8c_1->u334;
                if (v8) {
                    v9 = meth_unk00334_1001A570(
                        u334, width, height, bitDepth, a5, (unk00228 *)u8c_1->u334);
                    if (!meth_unk0008C_1000B390(u8c_1, (CLSID *)&gGUID, v8, (int)v9))
                        result = 1;
                }
            }
        }
    }
    return result;
  }
