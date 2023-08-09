#include "types-win32.h"
//----- (1001B690) --------------------------------------------------------
unk00334 *__thiscall meth_1001B690(_DWORD *this, int a2, _DWORD *a3, int a4) {
    _DWORD *v4;                                    // eax
    unk00334 *v5;                                  // esi
    unk00334 *v6;                                  // edi
    unk00334 *v7;                                  // edx
    unk00334 *v8;                                  // ebx
    void *v9;                                      // ecx
    unk00334 *v10;                                 // ebp
    int v11;                                       // eax
    unk00334 *result;                              // eax
    unk00334 *v13;                                 // [esp+10h] [ebp-Ch]
    unk00334 *v14;                                 // [esp+14h] [ebp-8h]
    unk00334 *v15;                                 // [esp+18h] [ebp-4h]
    IID **__attribute__((__org_arrdim(0, 3))) iid; // [esp+28h] [ebp+Ch]

    v4 = a3;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if (a3)
        *a3 = 0;
    v8 = (unk00334 *)a4;
    if (!a4)
        v8 = (unk00334 *)this[0xC9];
    v9 = v8;
    iid = (IID **)v8;
    if (v8) {
        while (1) {
            v10 = (unk00334 *)v8->ddCaps0.dwMaxOverlayStretch;
            LOBYTE(v11) = meth_unk00334_1001ADA0(v8, (const void *)a2);
            if (v11)
                break;
            if (meth_unk00334_1001AD90(v8) && !v5)
                v13 = v8;
            if (!memcmp(&v8->lpGUID, &CLSID_IDirect3DRGBDevice, 0x10u) && !v15)
                v15 = v8;
            if (!memcmp(&v8->lpGUID, &CLSID_IDirect3DMMXDevice, 0x10u) && !v14)
                v14 = v8;
            v8 = v10;
            if (!v10) {
                v4 = a3;
                v5 = v13;
                v6 = v14;
                v7 = v15;
                v9 = iid;
                goto LABEL_20;
            }
            v5 = v13;
        }
        result = v8;
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
// 1001B6E9: variable 'v11' is possibly undefined
