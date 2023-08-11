#include "types-win32.h"
//----- (1001B690) --------------------------------------------------------
int __thiscall meth_unk00334_1001B690(unk00334 *this, CLSID *a2, _DWORD *a3, unk00334 *a4) {
    _DWORD *v4;    // eax
    unk00228 *v5;  // esi
    unk00228 *v6;  // edi
    unk00228 *v7;  // edx
    unk00228 *v8;  // ebx
    void *v9;      // ecx
    unk00228 *v10; // ebp
    int result;    // eax
    unk00228 *v12; // [esp+10h] [ebp-Ch]
    unk00228 *v13; // [esp+14h] [ebp-8h]
    unk00228 *v14; // [esp+18h] [ebp-4h]
    unk00334 *v15; // [esp+28h] [ebp+Ch]

    v4 = a3;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if (a3)
        *a3 = 0;
    v8 = (unk00228 *)a4;
    if (!a4)
        v8 = this->field_324;
    v9 = v8;
    v15 = (unk00334 *)v8;
    if (v8) {
        while (1) {
            v10 = v8->last;
            if (meth_unk00228_MatchesGUID(v8, a2))
                break;
            if (meth_unk00228_DeviceDescHasDCMColorModel(v8) && !v5)
                v12 = v8;
            if (!memcmp(&v8->guid, &CLSID_IDirect3DRGBDevice, 0x10u) && !v14)
                v14 = v8;
            if (!memcmp(&v8->guid, &CLSID_IDirect3DMMXDevice, 0x10u) && !v13)
                v13 = v8;
            v8 = v10;
            if (!v10) {
                v4 = a3;
                v5 = v12;
                v6 = v13;
                v7 = v14;
                v9 = v15;
                goto LABEL_20;
            }
            v5 = v12;
        }
        result = (int)v8;
    } else {
    LABEL_20:
        if (v4) {
            if (v5) {
                *v4 = v5;
                return 0;
            }
            if (v7) {
                *v4 = v7;
                return 0;
            }
            if (v6) {
                *v4 = v6;
                return 0;
            }
            if (v9)
                *v4 = v9;
        }
        result = 0;
    }
    return result;
}
