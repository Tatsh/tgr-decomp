#include "types-win32.h"
//----- (1000A5D0) --------------------------------------------------------
int __thiscall meth_unk0008C_1000A5D0(unk0008C *this) {
    int flags;       // edi
    unk00334 *u0;    // ecx
    int hr;          // edi
    int v5;          // eax
    int v6;          // ecx
    D3DVALUE v7;     // eax
    int result;      // eax
    D3DVALUE iid;    // edx
    unk00334 *v10;   // eax
    D3DVALUE v11;    // ecx
    unk00334 *u0_1;  // eax
    int v13;         // eax
    int v14;         // ecx
    int v15;         // edx
    D3DVALUE v16;    // eax
    D3DVALUE v17;    // [esp+8h] [ebp-38h]
    D3DVALUE iid0;   // [esp+1Ch] [ebp-24h]
    int width;       // [esp+30h] [ebp-10h] BYREF
    int height;      // [esp+34h] [ebp-Ch] BYREF
    int bitDepth;    // [esp+38h] [ebp-8h] BYREF
    int refreshRate; // [esp+3Ch] [ebp-4h] BYREF

    flags = 0;
    u0 = (unk00334 *)LODWORD(this->field_8.specular.g);
    if (!u0 || !LODWORD(this->field_8.emissive.r))
        return -2005522669;
    meth_unk00334_1001AC80(u0, &width, &height, &bitDepth, &refreshRate);
    if (width == 320 && height == 200 && bitDepth == 8)
        flags = 1;
    hr = (*(int(__stdcall **)(_DWORD, int, int, int, int, int))(
        *(_DWORD *)LODWORD(this->field_8.emissive.r) + 84))(
        LODWORD(this->field_8.emissive.r), width, height, bitDepth, refreshRate, flags);
    if (hr < 0 && (width == 640 && height == 480 ||
                   (iid = this->field_8.specular.b,
                    height = 480,
                    v17 = this->field_8.specular.r,
                    width = 640,
                    v10 = meth_unk00334_1001A570(
                        (unk00334 *)LODWORD(v17), 640, 480, bitDepth, 0, (unk00228 *)LODWORD(iid)),
                    (LODWORD(this->field_8.specular.g) = v10) == 0) ||
                   (hr = (*(int(__stdcall **)(_DWORD, int, int, int, _DWORD, _DWORD))(
                        *(_DWORD *)LODWORD(this->field_8.emissive.r) + 84))(
                        LODWORD(this->field_8.emissive.r), width, height, bitDepth, 0, 0),
                    hr < 0))) {
        if (bitDepth == 16 ||
            (iid0 = this->field_8.specular.b,
             v11 = this->field_8.specular.r,
             bitDepth = 16,
             u0_1 = meth_unk00334_1001A570(
                 (unk00334 *)LODWORD(v11), width, height, 16, 0, (unk00228 *)LODWORD(iid0)),
             (LODWORD(this->field_8.specular.g) = u0_1) == 0) ||
            (hr = (*(int(__stdcall **)(_DWORD, int, int, int, _DWORD, _DWORD))(
                 *(_DWORD *)LODWORD(this->field_8.emissive.r) + 84))(
                 LODWORD(this->field_8.emissive.r), width, height, bitDepth, 0, 0),
             hr < 0)) {
            result = hr;
        } else {
            v13 = width;
            v14 = height;
            v15 = bitDepth;
            this->field_78 = 0;
            this->field_7C = 0;
            this->field_80 = v13;
            this->field_84 = v14;
            gWidth = v13;
            g_Width1 = v13;
            gHeight = v14;
            g_Height1 = v14;
            g_BitDepth = v15;
            v16 = this->field_8.ambient.r;
            LOBYTE(v16) |= 2u;
            this->field_8.ambient.r = v16;
            result = hr;
        }
    } else {
        v5 = width;
        v6 = height;
        this->field_78 = 0;
        this->field_7C = 0;
        this->field_80 = v5;
        this->field_84 = v6;
        gWidth = v5;
        g_Width1 = v5;
        gHeight = v6;
        g_Height1 = v6;
        g_BitDepth = bitDepth;
        v7 = this->field_8.ambient.r;
        LOBYTE(v7) |= 2u;
        this->field_8.ambient.r = v7;
        result = hr;
    }
    return result;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
// 100AA8A8: using guessed type int g_BitDepth;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
